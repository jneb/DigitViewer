/* ymi_CVN_ub_to_rawh_Default.h
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 01/22/2011
 * Last Modified    : 04/07/2012
 * 
 * 
 *      ymi         =   Micro-Intrinsic
 *      CVN         =   Format Conversion Unit
 *      ub_to_rawh  =   Binary Integer -> Hexadecimal Raw
 *      Default     =   Default Instruction Set
 * 
 */

#ifndef _ymi_CVN_ub_to_rawh_Default_H
#define _ymi_CVN_ub_to_rawh_Default_H
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#define ymi_CVN_u64b_to_rawh_u0_Default(T, A){   \
    register u64_t _a0, _a1; \
    register u64_t _b0, _b1; \
    \
    _a0 = ((const u64_t*)(A))[0];   \
    _a1 = _a0 >> 32;    \
    _a0 &= 0xffffffff;  \
    \
    _b0 = _a0 & 0x00000000ffff0000ull;  \
    _b1 = _a1 & 0x00000000ffff0000ull;  \
    _a0 = _a0 & 0x000000000000ffffull;  \
    _a1 = _a1 & 0x000000000000ffffull;  \
    _b0 >>= 16; \
    _b1 >>= 16; \
    _a0 <<= 32; \
    _a1 <<= 32; \
    _a0 |= _b0; \
    _a1 |= _b1; \
    \
    _b0 = _a0 & 0x0000ff000000ff00ull;  \
    _b1 = _a1 & 0x0000ff000000ff00ull;  \
    _a0 = _a0 & 0x000000ff000000ffull;  \
    _a1 = _a1 & 0x000000ff000000ffull;  \
    _b0 >>= 8;  \
    _b1 >>= 8;  \
    _a0 <<= 16; \
    _a1 <<= 16; \
    _a0 |= _b0; \
    _a1 |= _b1; \
    \
    _b0 = _a0 & 0x00f000f000f000f0ull;  \
    _b1 = _a1 & 0x00f000f000f000f0ull;  \
    _a0 = _a0 & 0x000f000f000f000full;  \
    _a1 = _a1 & 0x000f000f000f000full;  \
    _b0 >>= 4;  \
    _b1 >>= 4;  \
    _a0 <<= 8;  \
    _a1 <<= 8;  \
    _a0 |= _b0; \
    _a1 |= _b1; \
    \
    ((u64_t*)(T))[1] = _a0; \
    ((u64_t*)(T))[0] = _a1; \
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#endif
