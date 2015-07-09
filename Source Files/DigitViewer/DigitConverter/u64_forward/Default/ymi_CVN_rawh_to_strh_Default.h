/* ymi_CVN_rawh_to_strh_Default.h
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 04/04/2012
 * Last Modified    : 04/06/2012
 * 
 * 
 *      ymi             =   Micro-Intrinsic
 *      CVN             =   Format Conversion Unit
 *      rawh_to_strh    =   Hexadecimal Raw -> Hexadecimal String
 *      Default         =   Default Instruction Set
 * 
 */

#ifndef _ymi_CVN_rawh_to_strh_Default_H
#define _ymi_CVN_rawh_to_strh_Default_H
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#define ymi_CVN_rawh_to_strh_u0_Default(T){ \
    register char _a0;  \
    \
    _a0 = ((const char*)(T))[0];    \
    \
    if (_a0 > 9)    \
        _a0 += 39;  \
    \
    _a0 += '0'; \
    \
    ((char*)(T))[0] = _a0;  \
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#define ymi_CVN_rawh_to_strh_u2_Default32(T){   \
    register u32_t _a0, _b0; \
    \
    _a0 = ((const u32_t*)(T))[0];   \
    \
    _b0 = _a0 + 0x76767676ull;  \
    \
    _b0 &= 0x80808080ull;   \
    \
    _b0 >>= 7;  \
    \
    _b0 *= 39;  \
    \
    _a0 += 0x30303030ull;   \
    \
    _a0 += _b0; \
    \
    ((u32_t*)(T))[0] = _a0; \
}
#define ymi_CVN_rawh_to_strh_u3_Default32(T){   \
    register u32_t _a0, _b0; \
    register u32_t _a1, _b1; \
    \
    _a0 = ((const u32_t*)(T))[0];   \
    _a1 = ((const u32_t*)(T))[1];   \
    \
    _b0 = _a0 + 0x76767676ull;  \
    _b1 = _a1 + 0x76767676ull;  \
    \
    _b0 &= 0x80808080ull;   \
    _b1 &= 0x80808080ull;   \
    \
    _b0 >>= 7;  \
    _b1 >>= 7;  \
    \
    _b0 *= 39;  \
    _b1 *= 39;  \
    \
    _a0 += 0x30303030ull;   \
    _a1 += 0x30303030ull;   \
    \
    _a0 += _b0; \
    _a1 += _b1; \
    \
    ((u32_t*)(T))[0] = _a0;     \
    ((u32_t*)(T))[1] = _a1;     \
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#define ymi_CVN_rawh_to_strh_u3_Default64(T){   \
    register u64_t _a0, _b0; \
    \
    _a0 = ((const u64_t*)(T))[0];   \
    \
    _b0 = _a0 + 0x7676767676767676ull;  \
    \
    _b0 &= 0x8080808080808080ull;   \
    \
    _b0 >>= 7;  \
    \
    _b0 *= 39;  \
    \
    _a0 += 0x3030303030303030ull;   \
    \
    _a0 += _b0; \
    \
    ((u64_t*)(T))[0] = _a0; \
}
#define ymi_CVN_rawh_to_strh_u4_Default64(T){   \
    register u64_t _a0, _b0; \
    register u64_t _a1, _b1; \
    \
    _a0 = ((const u64_t*)(T))[0];   \
    _a1 = ((const u64_t*)(T))[1];   \
    \
    _b0 = _a0 + 0x7676767676767676ull;  \
    _b1 = _a1 + 0x7676767676767676ull;  \
    \
    _b0 &= 0x8080808080808080ull;   \
    _b1 &= 0x8080808080808080ull;   \
    \
    _b0 >>= 7;  \
    _b1 >>= 7;  \
    \
    _b0 *= 39;  \
    _b1 *= 39;  \
    \
    _a0 += 0x3030303030303030ull;   \
    _a1 += 0x3030303030303030ull;   \
    \
    _a0 += _b0; \
    _a1 += _b1; \
    \
    ((u64_t*)(T))[0] = _a0; \
    ((u64_t*)(T))[1] = _a1; \
}
#define ymi_CVN_rawh_to_strh_u5_Default64(T){   \
    register u64_t _a0, _b0; \
    register u64_t _a1, _b1; \
    register u64_t _a2, _b2; \
    register u64_t _a3, _b3; \
    \
    _a0 = ((const u64_t*)(T))[0];   \
    _a1 = ((const u64_t*)(T))[1];   \
    _a2 = ((const u64_t*)(T))[2];   \
    _a3 = ((const u64_t*)(T))[3];   \
    \
    _b0 = _a0 + 0x7676767676767676ull;  \
    _b1 = _a1 + 0x7676767676767676ull;  \
    _b2 = _a2 + 0x7676767676767676ull;  \
    _b3 = _a3 + 0x7676767676767676ull;  \
    \
    _b0 &= 0x8080808080808080ull;   \
    _b1 &= 0x8080808080808080ull;   \
    _b2 &= 0x8080808080808080ull;   \
    _b3 &= 0x8080808080808080ull;   \
    \
    _b0 >>= 7;  \
    _b1 >>= 7;  \
    _b2 >>= 7;  \
    _b3 >>= 7;  \
    \
    _b0 *= 39;  \
    _b1 *= 39;  \
    _b2 *= 39;  \
    _b3 *= 39;  \
    \
    _a0 += 0x3030303030303030ull;   \
    _a1 += 0x3030303030303030ull;   \
    _a2 += 0x3030303030303030ull;   \
    _a3 += 0x3030303030303030ull;   \
    \
    _a0 += _b0; \
    _a1 += _b1; \
    _a2 += _b2; \
    _a3 += _b3; \
    \
    ((u64_t*)(T))[0] = _a0; \
    ((u64_t*)(T))[1] = _a1; \
    ((u64_t*)(T))[2] = _a2; \
    ((u64_t*)(T))[3] = _a3; \
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#endif
