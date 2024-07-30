#ifndef STD_TYPES_H
#define STD_TYPES_H

#include <cstdint>

// Boolean type
#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

// Unsigned 8-bit integer
typedef uint8_t uint8;

// Unsigned 16-bit integer
typedef uint16_t uint16;

// Unsigned 32-bit integer
typedef uint32_t uint32;

// Unsigned 64-bit integer
typedef uint64_t uint64;

// Signed 8-bit integer
typedef int8_t sint8;

// Signed 16-bit integer
typedef int16_t sint16;

// Signed 32-bit integer
typedef int32_t sint32;

// Signed 64-bit integer
typedef int64_t sint64;

// Floating point
typedef float float32;
typedef double float64;

// Standard return type
typedef uint8 Std_ReturnType;

#endif // STD_TYPES_H
