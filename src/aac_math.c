/* -*- mode: c; -*- */
/* ========================================================================== */

#include "aac_math.h"

/* -------------------------------------------------------------------------- */

/* -128 ... 127 */
  signed char
isqrt_8s( signed char x )
{
  switch ( x )
    {
      case   -1 ... 1:   return x;
      case -128 ... -2:  return ( -1 ) * isqrt_8s( ( -1 ) * x );
      case    2 ... 3:   return 1;
      case    4 ... 8:   return 2;
      case    9 ... 15:  return 3;
      case   16 ... 24:  return 4;
      case   25 ... 35:  return 5;
      case   36 ... 48:  return 6;
      case   49 ... 63:  return 7;
      case   64 ... 80:  return 8;
      case   81 ... 99:  return 9;
      case  100 ... 120: return 10;
      default:           return 11;
    }
}

/* 0 ... 255 */
  unsigned char
isqrt_8u( unsigned char x )
{
  switch ( x )
    {
      case   0 ... 1:   return x;
      case   2 ... 3:   return 1;
      case   4 ... 8:   return 2;
      case   9 ... 15:  return 3;
      case  16 ... 24:  return 4;
      case  25 ... 35:  return 5;
      case  36 ... 48:  return 6;
      case  49 ... 63:  return 7;
      case  64 ... 80:  return 8;
      case  81 ... 99:  return 9;
      case 100 ... 120: return 10;
      case 121 ... 143: return 11;
      case 144 ... 168: return 12;
      case 169 ... 195: return 13;
      case 196 ... 225: return 14;
      default:          return 15;
    }
}


/* -------------------------------------------------------------------------- */



/* -------------------------------------------------------------------------- */



/* ========================================================================== */
/* vim: set filetype=c : */
