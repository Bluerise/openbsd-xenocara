/**
 * Many similar implementations exist. See for example libwsbm
 * or the linux kernel include/atomic.h
 *
 * No copyright claimed on this file.
 *
 */

#include "no_extern_c.h"

#ifndef U_ATOMIC_H
#define U_ATOMIC_H

#include <stdbool.h>

/* Favor OS-provided implementations.
 *
 * Where no OS-provided implementation is available, fall back to
 * locally coded assembly, compiler intrinsic or ultimately a
 * mutex-based implementation.
 */
#if defined(__sun)
#define PIPE_ATOMIC_OS_SOLARIS
#elif defined(_MSC_VER)
#define PIPE_ATOMIC_MSVC_INTRINSIC
#elif defined(__ARM_ARCH_4__) || defined(__ARM_ARCH_4T__) || \
      defined(__ARM_ARCH_5__) || defined(__ARM_ARCH_5T__) || \
      defined(__ARM_ARCH_5TE__) || defined(__ARM_ARCH_5E__) || \
      defined(__hppa__) || defined(__sparc__) || defined(__sh__)
#define PIPE_ATOMIC_UNLOCKED
#elif defined(__GNUC__)
#define PIPE_ATOMIC_GCC_INTRINSIC
#else
#error "Unsupported platform"
#endif


/* Implementation using GCC-provided synchronization intrinsics
 */
#if defined(PIPE_ATOMIC_GCC_INTRINSIC)

#define PIPE_ATOMIC "GCC Sync Intrinsics"

#define p_atomic_set(_v, _i) (*(_v) = (_i))
#define p_atomic_read(_v) (*(_v))
#define p_atomic_dec_zero(v) (__sync_sub_and_fetch((v), 1) == 0)
#define p_atomic_inc(v) (void) __sync_add_and_fetch((v), 1)
#define p_atomic_dec(v) (void) __sync_sub_and_fetch((v), 1)
#define p_atomic_add(v, i) (void) __sync_add_and_fetch((v), (i))
#define p_atomic_inc_return(v) __sync_add_and_fetch((v), 1)
#define p_atomic_dec_return(v) __sync_sub_and_fetch((v), 1)
#define p_atomic_cmpxchg(v, old, _new) \
   __sync_val_compare_and_swap((v), (old), (_new))

#endif

#if defined(PIPE_ATOMIC_UNLOCKED)

#define PIPE_ATOMIC "Unlocked"

#define p_atomic_set(_v, _i) (*(_v) = (_i))
#define p_atomic_read(_v) (*(_v))
#define p_atomic_dec_zero(_v) ((*(_v) -= 1) == 0)
#define p_atomic_inc(_v) (*(_v) += 1)
#define p_atomic_dec(_v) (*(_v) -= 1)
#define p_atomic_add(_v, _i) (*(_v) += (_i))
#define p_atomic_inc_return(_v) (*(_v) += 1)
#define p_atomic_dec_return(_v) (*(_v) -= 1)
#define p_atomic_cmpxchg(_v, old, _new) ({	\
	__typeof(*_v) _r = *(_v);		\
	if (*(_v) == old)			\
		*(_v) = (_new);			\
	_r;					\
})
#endif

/* Unlocked version for single threaded environments, such as some
 * windows kernel modules.
 */
#if defined(PIPE_ATOMIC_OS_UNLOCKED) 

#define PIPE_ATOMIC "Unlocked"

#define p_atomic_set(_v, _i) (*(_v) = (_i))
#define p_atomic_read(_v) (*(_v))
#define p_atomic_dec_zero(_v) (p_atomic_dec_return(_v) == 0)
#define p_atomic_inc(_v) ((void) p_atomic_inc_return(_v))
#define p_atomic_dec(_v) ((void) p_atomic_dec_return(_v))
#define p_atomic_add(_v, _i) (*(_v) = *(_v) + (_i))
#define p_atomic_inc_return(_v) (++(*(_v)))
#define p_atomic_dec_return(_v) (--(*(_v)))
#define p_atomic_cmpxchg(_v, _old, _new) (*(_v) == (_old) ? (*(_v) = (_new), (_old)) : *(_v))

#endif


#if defined(PIPE_ATOMIC_MSVC_INTRINSIC)

#define PIPE_ATOMIC "MSVC Intrinsics"

/* We use the Windows header's Interlocked*64 functions instead of the
 * _Interlocked*64 intrinsics wherever we can, as support for the latter varies
 * with target CPU, whereas Windows headers take care of all portability
 * issues: using intrinsics where available, falling back to library
 * implementations where not.
 */
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN 1
#endif
#include <windows.h>
#include <intrin.h>
#include <assert.h>

/* MSVC supports decltype keyword, but it's only supported on C++ and doesn't
 * quite work here; and if a C++-only solution is worthwhile, then it would be
 * better to use templates / function overloading, instead of decltype magic.
 * Therefore, we rely on implicit casting to LONGLONG for the functions that return
 */

#define p_atomic_set(_v, _i) (*(_v) = (_i))
#define p_atomic_read(_v) (*(_v))

#define p_atomic_dec_zero(_v) \
   (p_atomic_dec_return(_v) == 0)

#define p_atomic_inc(_v) \
   ((void) p_atomic_inc_return(_v))

#define p_atomic_inc_return(_v) (\
   sizeof *(_v) == sizeof(short)   ? _InterlockedIncrement16((short *)  (_v)) : \
   sizeof *(_v) == sizeof(long)    ? _InterlockedIncrement  ((long *)   (_v)) : \
   sizeof *(_v) == sizeof(__int64) ? InterlockedIncrement64 ((__int64 *)(_v)) : \
                                     (assert(!"should not get here"), 0))

#define p_atomic_dec(_v) \
   ((void) p_atomic_dec_return(_v))

#define p_atomic_dec_return(_v) (\
   sizeof *(_v) == sizeof(short)   ? _InterlockedDecrement16((short *)  (_v)) : \
   sizeof *(_v) == sizeof(long)    ? _InterlockedDecrement  ((long *)   (_v)) : \
   sizeof *(_v) == sizeof(__int64) ? InterlockedDecrement64 ((__int64 *)(_v)) : \
                                     (assert(!"should not get here"), 0))

#define p_atomic_add(_v, _i) (\
   sizeof *(_v) == sizeof(char)    ? _InterlockedExchangeAdd8 ((char *)   (_v), (_i)) : \
   sizeof *(_v) == sizeof(short)   ? _InterlockedExchangeAdd16((short *)  (_v), (_i)) : \
   sizeof *(_v) == sizeof(long)    ? _InterlockedExchangeAdd  ((long *)   (_v), (_i)) : \
   sizeof *(_v) == sizeof(__int64) ? InterlockedExchangeAdd64((__int64 *)(_v), (_i)) : \
                                     (assert(!"should not get here"), 0))

#define p_atomic_cmpxchg(_v, _old, _new) (\
   sizeof *(_v) == sizeof(char)    ? _InterlockedCompareExchange8 ((char *)   (_v), (char)   (_new), (char)   (_old)) : \
   sizeof *(_v) == sizeof(short)   ? _InterlockedCompareExchange16((short *)  (_v), (short)  (_new), (short)  (_old)) : \
   sizeof *(_v) == sizeof(long)    ? _InterlockedCompareExchange  ((long *)   (_v), (long)   (_new), (long)   (_old)) : \
   sizeof *(_v) == sizeof(__int64) ? InterlockedCompareExchange64 ((__int64 *)(_v), (__int64)(_new), (__int64)(_old)) : \
                                     (assert(!"should not get here"), 0))

#endif

#if defined(PIPE_ATOMIC_OS_SOLARIS)

#define PIPE_ATOMIC "Solaris OS atomic functions"

#include <atomic.h>
#include <assert.h>

#define p_atomic_set(_v, _i) (*(_v) = (_i))
#define p_atomic_read(_v) (*(_v))

#define p_atomic_dec_zero(v) (\
   sizeof(*v) == sizeof(uint8_t)  ? atomic_dec_8_nv ((uint8_t  *)(v)) == 0 : \
   sizeof(*v) == sizeof(uint16_t) ? atomic_dec_16_nv((uint16_t *)(v)) == 0 : \
   sizeof(*v) == sizeof(uint32_t) ? atomic_dec_32_nv((uint32_t *)(v)) == 0 : \
   sizeof(*v) == sizeof(uint64_t) ? atomic_dec_64_nv((uint64_t *)(v)) == 0 : \
                                    (assert(!"should not get here"), 0))

#define p_atomic_inc(v) (void) (\
   sizeof(*v) == sizeof(uint8_t)  ? atomic_inc_8 ((uint8_t  *)(v)) : \
   sizeof(*v) == sizeof(uint16_t) ? atomic_inc_16((uint16_t *)(v)) : \
   sizeof(*v) == sizeof(uint32_t) ? atomic_inc_32((uint32_t *)(v)) : \
   sizeof(*v) == sizeof(uint64_t) ? atomic_inc_64((uint64_t *)(v)) : \
                                    (assert(!"should not get here"), 0))

#define p_atomic_inc_return(v) ((__typeof(*v)) \
   sizeof(*v) == sizeof(uint8_t)  ? atomic_inc_8_nv ((uint8_t  *)(v)) : \
   sizeof(*v) == sizeof(uint16_t) ? atomic_inc_16_nv((uint16_t *)(v)) : \
   sizeof(*v) == sizeof(uint32_t) ? atomic_inc_32_nv((uint32_t *)(v)) : \
   sizeof(*v) == sizeof(uint64_t) ? atomic_inc_64_nv((uint64_t *)(v)) : \
                                    (assert(!"should not get here"), 0))

#define p_atomic_dec(v) ((void) \
   sizeof(*v) == sizeof(uint8_t)  ? atomic_dec_8 ((uint8_t  *)(v)) : \
   sizeof(*v) == sizeof(uint16_t) ? atomic_dec_16((uint16_t *)(v)) : \
   sizeof(*v) == sizeof(uint32_t) ? atomic_dec_32((uint32_t *)(v)) : \
   sizeof(*v) == sizeof(uint64_t) ? atomic_dec_64((uint64_t *)(v)) : \
                                    (assert(!"should not get here"), 0))

#define p_atomic_dec_return(v) ((__typeof(*v)) \
   sizeof(*v) == sizeof(uint8_t)  ? atomic_dec_8_nv ((uint8_t  *)(v)) : \
   sizeof(*v) == sizeof(uint16_t) ? atomic_dec_16_nv((uint16_t *)(v)) : \
   sizeof(*v) == sizeof(uint32_t) ? atomic_dec_32_nv((uint32_t *)(v)) : \
   sizeof(*v) == sizeof(uint64_t) ? atomic_dec_64_nv((uint64_t *)(v)) : \
                                    (assert(!"should not get here"), 0))

#define p_atomic_add(v, i) ((void)				     \
   sizeof(*v) == sizeof(uint8_t)  ? atomic_add_8 ((uint8_t  *)(v), (i)) : \
   sizeof(*v) == sizeof(uint16_t) ? atomic_add_16((uint16_t *)(v), (i)) : \
   sizeof(*v) == sizeof(uint32_t) ? atomic_add_32((uint32_t *)(v), (i)) : \
   sizeof(*v) == sizeof(uint64_t) ? atomic_add_64((uint64_t *)(v), (i)) : \
                                    (assert(!"should not get here"), 0))

#define p_atomic_cmpxchg(v, old, _new) ((__typeof(*v)) \
   sizeof(*v) == sizeof(uint8_t)  ? atomic_cas_8 ((uint8_t  *)(v), (uint8_t )(old), (uint8_t )(_new)) : \
   sizeof(*v) == sizeof(uint16_t) ? atomic_cas_16((uint16_t *)(v), (uint16_t)(old), (uint16_t)(_new)) : \
   sizeof(*v) == sizeof(uint32_t) ? atomic_cas_32((uint32_t *)(v), (uint32_t)(old), (uint32_t)(_new)) : \
   sizeof(*v) == sizeof(uint64_t) ? atomic_cas_64((uint64_t *)(v), (uint64_t)(old), (uint64_t)(_new)) : \
                                    (assert(!"should not get here"), 0))

#endif

#ifndef PIPE_ATOMIC
#error "No pipe_atomic implementation selected"
#endif



#endif /* U_ATOMIC_H */
