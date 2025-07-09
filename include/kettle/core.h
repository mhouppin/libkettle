#ifndef KETTLE_CORE_H
#define KETTLE_CORE_H

#include <assert.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "kettle/core/defines.h"

// Unsigned integer type definitions

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef uintptr_t usize;

static_assert(sizeof(u8) == 1, "Invalid core type size");
static_assert(sizeof(u16) == 2, "Invalid core type size");
static_assert(sizeof(u32) == 4, "Invalid core type size");
static_assert(sizeof(u64) == 8, "Invalid core type size");
static_assert(sizeof(usize) == sizeof(void *), "Invalid core type size");

// Unsigned integer limits

#define U8_MIN ((u8)0)
#define U8_MAX ((u8)UINT8_MAX)
#define U16_MIN ((u16)0)
#define U16_MAX ((u16)UINT16_MAX)
#define U32_MIN ((u32)0)
#define U32_MAX ((u32)UINT32_MAX)
#define U64_MIN ((u64)0)
#define U64_MAX ((u64)UINT64_MAX)
#define USIZE_MIN ((usize)0)
#define USIZE_MAX ((usize)UINTPTR_MAX)

#define U8_BITS 8
#define U16_BITS 16
#define U32_BITS 32
#define U64_BITS 64
#define USIZE_BITS (sizeof(usize) * 8)

// Signed integer type definitions

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
typedef intptr_t isize;

static_assert(sizeof(i8) == 1, "Invalid core type size");
static_assert(sizeof(i16) == 2, "Invalid core type size");
static_assert(sizeof(i32) == 4, "Invalid core type size");
static_assert(sizeof(i64) == 8, "Invalid core type size");
static_assert(sizeof(isize) == sizeof(void *), "Invalid core type size");

// Signed integer limits

#define I8_MIN ((i8)INT8_MIN)
#define I8_MAX ((i8)INT8_MAX)
#define I16_MIN ((i16)INT16_MIN)
#define I16_MAX ((i16)INT16_MAX)
#define I32_MIN ((i32)INT32_MIN)
#define I32_MAX ((i32)INT32_MAX)
#define I64_MIN ((i64)INT64_MIN)
#define I64_MAX ((i64)INT64_MAX)
#define ISIZE_MIN ((isize)INTPTR_MIN)
#define ISIZE_MAX ((isize)INTPTR_MAX)

#define I8_BITS 8
#define I16_BITS 16
#define I32_BITS 32
#define I64_BITS 64
#define ISIZE_BITS (sizeof(isize) * 8)

// Floating point type definitions

typedef float f32;
typedef double f64;

static_assert(sizeof(f32) == 4, "Invalid core type size");
static_assert(sizeof(f64) == 8, "Invalid core type size");

// If available on the host, add 128-bit integer type definitions.
#ifdef __SIZEOF_INT128__
#define KETTLE_HAS_INT128
typedef unsigned __int128 u128;
typedef __int128 i128;

static_assert(sizeof(u128) == 16, "Invalid core type size");
static_assert(sizeof(i128) == 16, "Invalid core type size");

#define U128_MIN ((u128)0)
#define U128_MAX (~(u128)0)
#define I128_MIN (-(i128)(((u128)1 << 127) - 1) - 1)
#define I128_MAX ((i128)(((u128)1 << 127) - 1))

#define U128_BITS 128
#define I128_BITS 128
#endif

#include "kettle/core/intcast_fwd.h"
#include "kettle/core/intcmp_fwd.h"
#include "kettle/core/intabs_fwd.h"
#include "kettle/core/intshift_fwd.h"
#include "kettle/core/introt_fwd.h"
#include "kettle/core/intbitcnt_fwd.h"
#include "kettle/core/intbitscan_fwd.h"
#include "kettle/core/intbitrev_fwd.h"

#endif
