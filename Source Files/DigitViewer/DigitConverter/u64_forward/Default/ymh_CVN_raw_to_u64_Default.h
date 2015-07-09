/* ymh_CVN_raw_to_u64_Default.h
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 01/22/2011
 * Last Modified    : 04/06/2012
 * 
 * 
 *      ymh         =   Helper Function
 *      CVN         =   Format Conversion Unit
 *      raw_to_r64  =   Raw -> Binary Integer
 *      Default     =   Default Instruction Set
 * 
 */

#ifndef _ymh_CVN_rawh_to_u64_Default_H
#define _ymh_CVN_rawh_to_u64_Default_H
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  Dependencies
#include "../../ymb_CVN_headers.h"
#include "ymi_CVN_rawh_to_ub_Default.h"
#include "ymi_CVN_rawd_to_ud_Default.h"
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void ymb_CVN_rawh_to_u64b_f(u64_t* T, const char* A, upL_t TL){
    const u64_t* stopT = T + TL;

    while (T < stopT - 1){
        ymi_CVN_rawh_to_u64b_u1_Default(T, A);
        A += 32;
        T += 2;
    }
    if (T < stopT){
        ymi_CVN_rawh_to_u64b_u0_Default(T, A);
        A += 16;
        T += 1;
    }
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void ymb_CVN_rawd_to_u64d_f(u64_t* T, const char* A, upL_t TL){
    const u64_t* stopT = T + TL;

    while (T < stopT - 1){
        ymi_CVN_rawd_to_u64d19_u1_Default(T, A);
        A += 38;
        T += 2;
    }
    if (T < stopT){
        ymi_CVN_rawd_to_u64d19_u0_Default(T, A);
        A += 19;
        T += 1;
    }
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#endif
