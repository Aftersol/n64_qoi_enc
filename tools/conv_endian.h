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


/// @file conv_endian.h
/// @brief A C portable header that contains declarations of functions for converting between endianness


#ifndef CONV_ENDIAN_H
#define CONV_ENDIAN_H

#if __cplusplus
extern "C" {
#endif

#include <stdint.h>

/*

    8-bit code is skipped because they defined endianess
    as byte swapped integers and since a byte is 8 bits,
    what is the whole point of including such code that
    effectively does nothing

*/

/*

    16-bit code begins here

*/

/*

    16-bit signed integer starts here

*/

/// @brief Reads an 16-bit unsigned little endian integer number
/// @param val value of a 16-bit unsigned integer in little endian
/// @return converted value of the unsigned little endian value passed into read_le_u16 in their endianness of their machine
uint16_t read_le_u16(uint16_t val);

/// @brief Writes an 16-bit unsigned little endian integer number
/// @param val value of a 16-bit unsigned integer in their endianness of their machine
/// @return little endian value from value passed into convert_to_le_u16 in their endianness of their machine
uint16_t convert_to_le_u16(uint16_t val);

/// @brief Reads an 16-bit unsigned big endian integer number
/// @param val value of a 16-bit unsigned integer in big endian 
/// @return converted value of the unsigned big endian value passed into read_be_u16 in their endianness of their machine
uint16_t read_be_u16(uint16_t val);

/// @brief Writes an 16-bit unsigned big endian integer number
/// @param val value of a 16-bit unsigned integer in their endianness of their machine 
/// @return big endian value from value passed into convert_to_be_u16 in their endianness of their machine
uint16_t convert_to_be_u16(uint16_t val);

/*

    16-bit signed integer starts here

*/

/// @brief Reads an 16-bit signed little endian integer number
/// @param val value of a 16-bit signed integer in little endian
/// @return converted value of the signed little endian value passed into read_le_s16 in their endianness of their machine
int16_t read_le_s16(int16_t val);

/// @brief Writes an 16-bit signed little endian integer number
/// @param val value of a 16-bit signed integer in their endianness of their machine
/// @return little endian value from value passed into convert_to_le_s16 in their endianness of their machine
int16_t convert_to_le_s16(int16_t val);

/// @brief Reads an 16-bit signed big endian integer number
/// @param val value of a 16-bit signed integer in big endian 
/// @return converted value of the signed big endian value passed into read_be_s16 in their endianness of their machine
int16_t read_be_s16(int16_t val);

/// @brief Writes an 16-bit signed big endian integer number
/// @param val value of a 16-bit signed integer in their endianness of their machine 
/// @return big endian value from value passed into convert_to_be_s16 in their endianness of their machine
int16_t convert_to_be_s16(int16_t val);

/*

    16-bit code ends here

    ---------------------------------------------------------------------------

    32-bit code begins here

*/

/*

    32-bit unsigned integer starts here

*/

/// @brief Reads an 32-bit unsigned little endian integer number
/// @param val value of a 32-bit unsigned integer in little endian
/// @return converted value of the unsigned little endian value passed into read_le_u32 in their endianness of their machine
uint32_t read_le_u32(uint32_t val);

/// @brief Writes an 32-bit unsigned little endian integer number
/// @param val value of a 32-bit unsigned integer in their endianness of their machine
/// @return little endian value from value passed into convert_to_le_u32 in their endianness of their machine
uint32_t convert_to_le_u32(uint32_t val);

/// @brief Reads an 32-bit unsigned big endian integer number
/// @param val value of a 32-bit unsigned integer in big endian 
/// @return converted value of the unsigned big endian value passed into read_be_u32 in their endianness of their machine
uint32_t read_be_u32(uint32_t val);

/// @brief Writes an 32 bit unsigned big endian integer number
/// @param val value of a 32-bit unsigned integer in their endianness of their machine 
/// @return big endian value from value passed into convert_to_be_u32 in their endianness of their machine
uint32_t convert_to_be_u32(uint32_t val);

/*

    32-bit signed integer starts here

*/

/// @brief Reads an 32-bit signed little endian integer number
/// @param val value of a 32-bit signed integer in little endian
/// @return converted value of the signed little endian value passed into read_le_s32 in their endianness of their machine
int32_t read_le_s32(int32_t val);

/// @brief Writes an 32-bit signed little endian integer number
/// @param val value of a 32-bit signed integer in their endianness of their machine
/// @return little endian value from value passed into convert_to_le_s32 in their endianness of their machine
int32_t convert_to_le_s32(int32_t val);

/// @brief Reads an 32-bit signed big endian integer number
/// @param val value of a 32-bit signed integer in big endian 
/// @return converted value of the signed big endian value passed into read_be_s32 in their endianness of their machine
int32_t read_be_s32(int32_t val);

/// @brief Writes an 32-bit signed big endian integer number
/// @param val value of a 32-bit signed integer in their endianness of their machine 
/// @return big endian value from value passed into convert_to_be_s32 in their endianness of their machine
int32_t convert_to_be_s32(int32_t val);


/*

    32-bit floating point starts here

*/

/// @brief Reads an 32-bit little endian floating point number
/// @param val value of a 32-bit floating point number in little endian
/// @return converted value of the little endian value passed into read_le_f32 in their endianness of their machine
float read_le_f32(float val);

/// @brief Writes an 32-bit little endian floating point number
/// @param val value of a 32-bit floating point number in their endianness of their machine
/// @return little endian value from value passed into convert_to_le_f32 in their endianness of their machine
float convert_to_le_f32(float val);

/// @brief Reads an 32-bit big endian floating point number
/// @param val value of a 32-bit floating point number in big endian
/// @return converted value of the big endian value passed into read_be_f32 in their endianness of their machine
float read_be_f32(float val);

/// @brief Writes an 32-bit big endian floating point number
/// @param val value of a 32-bit floating point number in their endianness of their machine
/// @return big endian value from value passed into convert_to_be_f32 in their endianness of their machine
float convert_to_be_f32(float val);

/*

    32-bit code ends here

    ---------------------------------------------------------------------------

    64-bit code begins here

*/

/*

    64-bit unsigned integer starts here

*/

/// @brief Reads an 64-bit little endian integer number
/// @param val value of a 64-bit unsigned integer in little endian
/// @return converted value of the signed value passed into read_le_u64 in their endianness of their machine
uint64_t read_le_u64(uint64_t val);

/// @brief Writes an 64-bit little endian integer number
/// @param val value of a number in their endianness of their machine
/// @return little endian value from value passed into convert_to_le_u64 in their endianness of their machine
uint64_t convert_to_le_u64(uint64_t val);

/// @brief Reads an 64-bit big endian integer number
/// @param val value of a 64-bit unsigned integer in big endian 
/// @return converted value of the unsigned big endian value passed into read_be_u64 in their endianness of their machine
uint64_t read_be_u64(uint64_t val);

/// @brief Writes an 64-bit big endian integer number
/// @param val value of a number in their endianness of their machine 
/// @return big endian value from the value passed into convert_to_be_u64 in their endianness of their machine
uint64_t convert_to_be_u64(uint64_t val);


/*

    64-bit signed integer starts here

*/

/// @brief Reads an 64-bit little endian integer number
/// @param val value of a an 64-bit integer in little endian
/// @return converted value of the signed value passed into read_le_s64 in their endianness of their machine
int64_t read_le_s64(int64_t val);

/// @brief Writes an 64-bit little endian integer number
/// @param val value of a number in their endianness of their machine
/// @return little endian value from value passed into convert_to_le_s64 in their endianness of their machine
int64_t convert_to_le_s64(int64_t val);

/// @brief Reads an 64-bit big endian integer number
/// @param val value of a number in big endian 
/// @return converted value of the signed value passed into read_be_s64 in their endianness of their machine
int64_t read_be_s64(int64_t val);

/// @brief Writes an 64-bit big endian integer number
/// @param val value of a number in their endianness of their machine 
/// @return big endian value from the value passed into convert_to_be_s64 in their endianness of their machine
int64_t convert_to_be_s64(int64_t val);

/*

    64-bit floating point starts here

*/

/// @brief Reads an 64-bit little endian floating point number
/// @param val value of a 64-bit floating point number in little endian
/// @return converted value of the little endian value passed into read_le_f64 in their endianness of their machine
double read_le_f64(double val);

/// @brief Writes an 64-bit little endian floating point number
/// @param val value of a 64-bit floating point number in their endianness of their machine
/// @return little endian double-precision value from value passed into convert_to_le_f64 in their endianness of their machine
double convert_to_le_f64(double val);

/// @brief Reads an 64-bit big endian floating point number
/// @param val value of a 64-bit floating point number in big endian
/// @return converted value of the big endian value passed into read_be_f64 in their endianness of their machine
double read_be_f64(double val);

/// @brief Writes an 64-bit big endian floating point number
/// @param val value of a 64-bit floating point number in their endianness of their machine
/// @return big endian double-precision value from value passed into convert_to_be_f64 in their endianness of their machine
double convert_to_be_f64(double val);


#ifdef __cplusplus
}
#endif

#endif