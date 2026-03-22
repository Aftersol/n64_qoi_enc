// This is free and unencumbered software released into the public domain.

// Anyone is free to copy, modify, publish, use, compile, sell, or
// distribute this software, either in source code form or as a compiled
// binary, for any purpose, commercial or non-commercial, and by any
// means.

// In jurisdictions that recognize copyright laws, the author or authors
// of this software dedicate any and all copyright interest in the
// software to the public domain. We make this dedication for the benefit
// of the public at large and to the detriment of our heirs and
// successors. We intend this dedication to be an overt act of
// relinquishment in perpetuity of all present and future rights to this
// software under copyright law.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
// OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.

// For more information, please refer to <https://unlicense.org>


/// @file conv_endians.c
/// @brief A C portable source code that contains implementation of functions for converting between endianness


#include "conv_endian.h"
#include <stdint.h>

/*

    16-bit code begins here

*/

/*

    Unsigned 16-bit code

*/

/// @brief Reads an 16-bit unsigned little endian integer number
/// @param val value of a 16-bit unsigned integer in little endian
/// @return converted value of the unsigned little endian value passed into read_le_u16 in their endianness of their machine
uint16_t read_le_u16(uint16_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (uint16_t)((val_ptr[0] << 0) | (val_ptr[1] << 8));
}

/// @brief Writes an 16-bit unsigned little endian integer number
/// @param val value of a 16-bit unsigned integer in their endianness of their machine
/// @return little endian value from value passed into convert_to_le_u16 in their endianness of their machine
uint16_t convert_to_le_u16(uint16_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (uint16_t)((val_ptr[0] >> 0) | (val_ptr[1] >> 8));
}

/// @brief Reads an 16-bit unsigned big endian integer number
/// @param val value of a 16-bit unsigned integer in big endian 
/// @return converted value of the unsigned big endian value passed into read_be_u16 in their endianness of their machine
uint16_t read_be_u16(uint16_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (uint16_t)((val_ptr[1] << 0) | (val_ptr[0] << 8));
}

/// @brief Writes an 16-bit unsigned big endian integer number
/// @param val value of a 16-bit unsigned integer in their endianness of their machine 
/// @return big endian value from value passed into convert_to_be_u16 in their endianness of their machine
uint16_t convert_to_be_u16(uint16_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (uint16_t)((val_ptr[1] >> 0) | (val_ptr[0] >> 8));
}

/*

    Signed 16-bit code

*/

/// @brief Reads an 16-bit signed little endian integer number
/// @param val value of a 16-bit signed integer in little endian
/// @return converted value of the signed little endian value passed into read_le_s16 in their endianness of their machine
int16_t read_le_s16(int16_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (int16_t)((val_ptr[0] << 0) | (val_ptr[1] << 8));
}

/// @brief Writes an 16-bit signed little endian integer number
/// @param val value of a 16-bit signed integer in their endianness of their machine
/// @return little endian value from value passed into convert_to_le_s16 in their endianness of their machine
int16_t convert_to_le_s16(int16_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (int16_t)((val_ptr[0] >> 0) | (val_ptr[1] >> 8));
}

/// @brief Reads an 16-bit signed big endian integer number
/// @param val value of a 16-bit signed integer in big endian 
/// @return converted value of the signed big endian value passed into read_be_s16 in their endianness of their machine
int16_t read_be_s16(int16_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (int16_t)((val_ptr[1] << 0) | (val_ptr[0] << 8));
}

/// @brief Writes an 16-bit signed big endian integer number
/// @param val value of a 16-bit signed integer in their endianness of their machine 
/// @return big endian value from value passed into convert_to_be_s16 in their endianness of their machine
int16_t convert_to_be_s16(int16_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (int16_t)((val_ptr[1] >> 0) | (val_ptr[0] >> 8));
}

/*

    16-bit code ends here

    ---------------------------------------------------------------------------

    32-bit code begins here

*/

/*

    Unsigned 32-bit code

*/

/// @brief Reads an 32-bit unsigned little endian integer number
/// @param val value of a 32-bit unsigned integer in little endian
/// @return converted value of the unsigned little endian value passed into read_le_u32 in their endianness of their machine
uint32_t read_le_u32(uint32_t val) 
{
    uint8_t* val_ptr = (uint8_t*)&val;

    return (uint32_t)((val_ptr[0] << 0) | (val_ptr[1] << 8) | (val_ptr[2] << 16) | (val_ptr[3] << 24));
}

/// @brief Writes an 32-bit unsigned little endian integer number
/// @param val value of a 32-bit unsigned integer in their endianness of their machine
/// @return little endian value from value passed into convert_to_le_u32 in their endianness of their machine
uint32_t convert_to_le_u32(uint32_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;

    return (uint32_t)((val_ptr[0] >> 0) | (val_ptr[1] >> 8) | (val_ptr[2] >> 16) | (val_ptr[3] >> 24));
}

/// @brief Reads an 32-bit unsigned big endian integer number
/// @param val value of a 32-bit unsigned integer in big endian 
/// @return converted value of the unsigned big endian value passed into read_be_u32 in their endianness of their machine
uint32_t read_be_u32(uint32_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (uint32_t)((val_ptr[3] << 0) | (val_ptr[2] << 8) | (val_ptr[1] << 16) | (val_ptr[0] << 24));
}

/// @brief Writes an 32 bit unsigned big endian integer number
/// @param val value of a 32-bit unsigned integer in their endianness of their machine 
/// @return big endian value from value passed into convert_to_be_u32 in their endianness of their machine
uint32_t convert_to_be_u32(uint32_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (uint32_t)((val_ptr[3] >> 0) | (val_ptr[2] >> 8) | (val_ptr[1] >> 16) | (val_ptr[0] >> 24));
}


/*
    Signed 32-bit code

*/

/// @brief Reads an 32-bit signed little endian integer number
/// @param val value of a 32-bit signed integer in little endian
/// @return converted value of the signed little endian value passed into read_le_s32 in their endianness of their machine
int32_t read_le_s32(int32_t val) 
{
    uint8_t* val_ptr = (uint8_t*)&val;

    return (int32_t)((val_ptr[0] << 0) | (val_ptr[1] << 8) | (val_ptr[2] << 16) | (val_ptr[3] << 24));
}

/// @brief Writes an 32-bit signed little endian integer number
/// @param val value of a 32-bit signed integer in their endianness of their machine
/// @return little endian value from value passed into convert_to_le_s32 in their endianness of their machine
int32_t convert_to_le_s32(int32_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;

    return (int32_t)((val_ptr[0] >> 0) | (val_ptr[1] >> 8) | (val_ptr[2] >> 16) | (val_ptr[3] >> 24));
}

/// @brief Reads an 32-bit signed big endian integer number
/// @param val value of a 32-bit signed integer in big endian 
/// @return converted value of the signed big endian value passed into read_be_s32 in their endianness of their machine
int32_t read_be_s32(int32_t val)
{
    uint32_t reintrepreted_val = *(uint32_t*)&val;

    uint8_t bytes[4];

    bytes[0] = (uint64_t)reintrepreted_val << 0;
    bytes[1] = (uint64_t)reintrepreted_val << 8;
    bytes[2] = (uint64_t)reintrepreted_val << 16;
    bytes[3] = (uint64_t)reintrepreted_val << 24;

    return *(int32_t*)bytes;
}

/// @brief Writes an 32-bit signed big endian integer number
/// @param val value of a 32-bit signed integer in their endianness of their machine 
/// @return big endian value from value passed into convert_to_be_s32 in their endianness of their machine
int32_t convert_to_be_s32(int32_t val)
{
    uint32_t reintrepreted_val = *(uint32_t*)&val;

    uint8_t bytes[4];

    bytes[0] = (uint64_t)reintrepreted_val >> 0;
    bytes[1] = (uint64_t)reintrepreted_val >> 8;
    bytes[2] = (uint64_t)reintrepreted_val >> 16;
    bytes[3] = (uint64_t)reintrepreted_val >> 24;

    return *(int32_t*)bytes;
}

/*

    Floating point 32-bit code

*/

/// @brief Reads an 32-bit little endian floating point number
/// @param val value of a 32-bit floating point number in little endian
/// @return converted value of the little endian value passed into read_le_f32 in their endianness of their machine
float read_le_f32(float val) 
{
    // by writing this code like that
    // prevent dereferencing type-punned pointer 
    // breaking strict-aliasing rules warning

    uint32_t* ptr_val = (uint32_t*)&val;
    uint32_t reintrepreted_val = *ptr_val;

    uint8_t bytes[4];

    bytes[0] = (uint64_t)reintrepreted_val << 0;
    bytes[1] = (uint64_t)reintrepreted_val << 8;
    bytes[2] = (uint64_t)reintrepreted_val << 16;
    bytes[3] = (uint64_t)reintrepreted_val << 24;

    return *(float*)bytes;
}

/// @brief Writes an 32-bit little endian floating point number
/// @param val value of a 32-bit floating point number in their endianness of their machine
/// @return little endian value from value passed into convert_to_le_f32 in their endianness of their machine
float convert_to_le_f32(float val)
{
    // by writing this code like that
    // prevent dereferencing type-punned pointer 
    // breaking strict-aliasing rules warning

    uint32_t* ptr_val = (uint32_t*)&val;
    uint32_t reintrepreted_val = *ptr_val;

    uint8_t bytes[4];

    bytes[0] = (uint32_t)reintrepreted_val >> 0;
    bytes[1] = (uint32_t)reintrepreted_val >> 8;
    bytes[2] = (uint32_t)reintrepreted_val >> 16;
    bytes[3] = (uint32_t)reintrepreted_val >> 24;

    return *(float*)bytes;
}

/// @brief Reads an 32-bit big endian floating point number
/// @param val value of a 32-bit floating point number in big endian
/// @return converted value of the big endian value passed into read_be_f32 in their endianness of their machine
float read_be_f32(float val) 
{
    // by writing this code like that
    // prevent dereferencing type-punned pointer 
    // breaking strict-aliasing rules warning

    uint32_t* ptr_val = (uint32_t*)&val;
    uint32_t reintrepreted_val = *ptr_val;

    uint8_t bytes[4];

    bytes[0] = (uint32_t)reintrepreted_val << 24;
    bytes[1] = (uint32_t)reintrepreted_val << 16;
    bytes[2] = (uint32_t)reintrepreted_val << 8;
    bytes[3] = (uint32_t)reintrepreted_val << 0;

    return *(float*)bytes;
}

/// @brief Writes an 32-bit big endian floating point number
/// @param val value of a 32-bit floating point number in their endianness of their machine
/// @return big endian value from value passed into convert_to_be_f32 in their endianness of their machine
float convert_to_be_f32(float val)
{
    // by writing this code like that
    // prevent dereferencing type-punned pointer 
    // breaking strict-aliasing rules warning

    uint32_t* ptr_val = (uint32_t*)&val;
    uint32_t reintrepreted_val = *ptr_val;

    uint8_t bytes[4];

    bytes[0] = (uint32_t)reintrepreted_val >> 24;
    bytes[1] = (uint32_t)reintrepreted_val >> 16;
    bytes[2] = (uint32_t)reintrepreted_val >> 8;
    bytes[3] = (uint32_t)reintrepreted_val >> 0;

    return *(float*)bytes;
}



/*

    32-bit code ends here

    ---------------------------------------------------------------------------

    64-bit code begins here

*/

/*

    Unsigned 64-bit code

*/

/// @brief Reads an 64-bit little endian integer number
/// @param val value of a 64-bit unsigned integer in little endian
/// @return converted value of the signed value passed into read_le_u64 in their endianness of their machine
uint64_t read_le_u64(uint64_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (uint64_t)(
        ((uint64_t)val_ptr[0] << 0) | 
        ((uint64_t)val_ptr[1] << 8) | 
        ((uint64_t)val_ptr[2] << 16) | 
        ((uint64_t)val_ptr[3] << 24) | 
        ((uint64_t)val_ptr[4] << 32) | 
        ((uint64_t)val_ptr[5] << 40) | 
        ((uint64_t)val_ptr[6] << 48) | 
        ((uint64_t)val_ptr[7] << 56)
    );
}

/// @brief Writes an 64-bit little endian integer number
/// @param val value of a number in their endianness of their machine
/// @return little endian value from value passed into convert_to_le_u64 in their endianness of their machine
uint64_t convert_to_le_u64(uint64_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (uint64_t)(
        ((uint64_t)val_ptr[0] >> 0) | 
        ((uint64_t)val_ptr[1] >> 8) | 
        ((uint64_t)val_ptr[2] >> 16) | 
        ((uint64_t)val_ptr[3] >> 24) | 
        ((uint64_t)val_ptr[4] >> 32) | 
        ((uint64_t)val_ptr[5] >> 40) | 
        ((uint64_t)val_ptr[6] >> 48) | 
        ((uint64_t)val_ptr[7] >> 56)
    );
}

/// @brief Reads an 64-bit big endian integer number
/// @param val value of a 64-bit unsigned integer in big endian 
/// @return converted value of the unsigned big endian value passed into read_be_u64 in their endianness of their machine
uint64_t read_be_u64(uint64_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (uint64_t)(
        ((uint64_t)val_ptr[7] << 0) | 
        ((uint64_t)val_ptr[6] << 8) | 
        ((uint64_t)val_ptr[5] << 16) | 
        ((uint64_t)val_ptr[4] << 24) | 
        ((uint64_t)val_ptr[3] << 32) | 
        ((uint64_t)val_ptr[2] << 40) | 
        ((uint64_t)val_ptr[1] << 48) | 
        ((uint64_t)val_ptr[0] << 56)
    );
}

/// @brief Writes an 64-bit big endian integer number
/// @param val value of a number in their endianness of their machine 
/// @return big endian value from the value passed into convert_to_be_u64 in their endianness of their machine
uint64_t convert_to_be_u64(uint64_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (uint64_t)(
        ((uint64_t)val_ptr[7] >> 0) | 
        ((uint64_t)val_ptr[6] >> 8) | 
        ((uint64_t)val_ptr[5] >> 16) | 
        ((uint64_t)val_ptr[4] >> 24) | 
        ((uint64_t)val_ptr[3] >> 32) | 
        ((uint64_t)val_ptr[2] >> 40) | 
        ((uint64_t)val_ptr[1] >> 48) | 
        ((uint64_t)val_ptr[0] >> 56)
    );
}

/*

    Signed 64-bit code

*/

/// @brief Reads an 64-bit little endian integer number
/// @param val value of a an 64-bit integer in little endian
/// @return converted value of the signed value passed into read_le_s64 in their endianness of their machine
int64_t read_le_s64(int64_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (int64_t)(
        ((int64_t)val_ptr[0] << 0) | 
        ((int64_t)val_ptr[1] << 8) | 
        ((int64_t)val_ptr[2] << 16) | 
        ((int64_t)val_ptr[3] << 24) | 
        ((int64_t)val_ptr[4] << 32) | 
        ((int64_t)val_ptr[5] << 40) | 
        ((int64_t)val_ptr[6] << 48) | 
        ((int64_t)val_ptr[7] << 56)
    );
}

/// @brief Writes an 64-bit little endian integer number
/// @param val value of a number in their endianness of their machine
/// @return little endian value from value passed into convert_to_le_s64 in their endianness of their machine
int64_t convert_to_le_s64(int64_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (int64_t)(
        ((int64_t)val_ptr[0] >> 0) | 
        ((int64_t)val_ptr[1] >> 8) | 
        ((int64_t)val_ptr[2] >> 16) | 
        ((int64_t)val_ptr[3] >> 24) | 
        ((int64_t)val_ptr[4] >> 32) | 
        ((int64_t)val_ptr[5] >> 40) | 
        ((int64_t)val_ptr[6] >> 48) | 
        ((int64_t)val_ptr[7] >> 56)
    );
}

/// @brief Reads an 64-bit big endian integer number
/// @param val value of a number in big endian 
/// @return converted value of the signed value passed into read_be_s64 in their endianness of their machine
int64_t read_be_s64(int64_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (int64_t)(
        ((int64_t)val_ptr[7] << 0) | 
        ((int64_t)val_ptr[6] << 8) | 
        ((int64_t)val_ptr[5] << 16) | 
        ((int64_t)val_ptr[4] << 24) | 
        ((int64_t)val_ptr[3] << 32) | 
        ((int64_t)val_ptr[2] << 40) | 
        ((int64_t)val_ptr[1] << 48) | 
        ((int64_t)val_ptr[0] << 56)
    );
}

/// @brief Writes an 64-bit big endian integer number
/// @param val value of a number in their endianness of their machine 
/// @return big endian value from the value passed into convert_to_be_s64 in their endianness of their machine
int64_t convert_to_be_s64(int64_t val)
{
    uint8_t* val_ptr = (uint8_t*)&val;
    return (int64_t)(
        ((int64_t)val_ptr[7] >> 0) | 
        ((int64_t)val_ptr[6] >> 8) | 
        ((int64_t)val_ptr[5] >> 16) | 
        ((int64_t)val_ptr[4] >> 24) | 
        ((int64_t)val_ptr[3] >> 32) | 
        ((int64_t)val_ptr[2] >> 40) | 
        ((int64_t)val_ptr[1] >> 48) | 
        ((int64_t)val_ptr[0] >> 56)
    );
}

/*

    Floating point 64-bit code

*/


/// @brief Reads an 64-bit little endian floating point number
/// @param val value of a 64-bit floating point number in little endian
/// @return converted value of the little endian value passed into read_le_f64 in their endianness of their machine
double read_le_f64(double val) 
{
    // by writing this code like that
    // prevent dereferencing type-punned pointer 
    // breaking strict-aliasing rules warning

    uint64_t* ptr_val = (uint64_t*)&val;
    uint64_t reintrepreted_val = *ptr_val;

    uint8_t bytes[8];

    bytes[0] = (uint64_t)reintrepreted_val << 0;
    bytes[1] = (uint64_t)reintrepreted_val << 8;
    bytes[2] = (uint64_t)reintrepreted_val << 16;
    bytes[3] = (uint64_t)reintrepreted_val << 24;
    bytes[4] = (uint64_t)reintrepreted_val << 32;
    bytes[5] = (uint64_t)reintrepreted_val << 40;
    bytes[6] = (uint64_t)reintrepreted_val << 48;
    bytes[7] = (uint64_t)reintrepreted_val << 56;

    return *(double*)bytes;
}

/// @brief Writes an 64-bit little endian floating point number
/// @param val value of a 64-bit floating point number in their endianness of their machine
/// @return little endian double-precision value from value passed into convert_to_le_f64 in their endianness of their machine
double convert_to_le_f64(double val)
{
    // by writing this code like that
    // prevent dereferencing type-punned pointer 
    // breaking strict-aliasing rules warning

    uint64_t* ptr_val = (uint64_t*)&val;
    uint64_t reintrepreted_val = *ptr_val;
    
    uint8_t bytes[8];

    bytes[0] = reintrepreted_val >> 0;
    bytes[1] = reintrepreted_val >> 8;
    bytes[2] = reintrepreted_val >> 16;
    bytes[3] = reintrepreted_val >> 24;
    bytes[4] = reintrepreted_val >> 32;
    bytes[5] = reintrepreted_val >> 40;
    bytes[6] = reintrepreted_val >> 48;
    bytes[7] = reintrepreted_val >> 56;


    return *(double*)bytes;
}

/// @brief Reads an 64-bit big endian floating point number
/// @param val value of a 64-bit floating point number in big endian
/// @return converted value of the big endian value passed into read_be_f64 in their endianness of their machine
double read_be_f64(double val) 
{
    // by writing this code like that
    // prevent dereferencing type-punned pointer 
    // breaking strict-aliasing rules warning

    uint64_t* ptr_val = (uint64_t*)&val;
    uint64_t reintrepreted_val = *ptr_val;

    uint8_t bytes[8];

    bytes[0] = (uint64_t)reintrepreted_val >> 56;
    bytes[1] = (uint64_t)reintrepreted_val >> 48;
    bytes[2] = (uint64_t)reintrepreted_val >> 40;
    bytes[3] = (uint64_t)reintrepreted_val >> 32;
    bytes[4] = (uint64_t)reintrepreted_val >> 24;
    bytes[5] = (uint64_t)reintrepreted_val >> 16;
    bytes[6] = (uint64_t)reintrepreted_val >> 8;
    bytes[7] = (uint64_t)reintrepreted_val >> 0;

    return *(double*)bytes;
}

/// @brief Writes an 64-bit big endian floating point number
/// @param val value of a 64-bit floating point number in their endianness of their machine
/// @return big endian double-precision value from value passed into convert_to_be_f64 in their endianness of their machine
double convert_to_be_f64(double val)
{
    // by writing this code like that
    // prevent dereferencing type-punned pointer 
    // breaking strict-aliasing rules warning

    uint64_t* ptr_val = (uint64_t*)&val;
    uint64_t reintrepreted_val = *ptr_val;
    
    uint8_t bytes[8];

    bytes[0] = reintrepreted_val >> 56;
    bytes[1] = reintrepreted_val >> 48;
    bytes[2] = reintrepreted_val >> 40;
    bytes[3] = reintrepreted_val >> 32;
    bytes[4] = reintrepreted_val >> 24;
    bytes[5] = reintrepreted_val >> 16;
    bytes[6] = reintrepreted_val >> 8;
    bytes[7] = reintrepreted_val >> 0;


    return *(double*)bytes;
}