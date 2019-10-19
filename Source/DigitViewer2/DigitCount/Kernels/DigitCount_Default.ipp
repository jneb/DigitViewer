/* DigitCount_Default.ipp
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 01/13/2018
 * Last Modified    : 01/13/2018
 * 
 */

#pragma once
#ifndef ydv_DigitViewer_DigitCount_Default_IPP
#define ydv_DigitViewer_DigitCount_Default_IPP
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  Dependencies
#include "DigitCount_Default.h"
namespace DigitViewer2{
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void DigitCounts::accumulate(const char* raw_digits, upL_t digits){
    DigitCount::accumulate_Default(m_counts, raw_digits, digits);
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
}
#endif