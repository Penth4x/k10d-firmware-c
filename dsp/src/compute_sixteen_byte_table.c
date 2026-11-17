/* @k10d compute_sixteen_byte_table @ 0x000ed9fa
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Populates a 16-byte region with values derived from a base counter and fixed
 *   multipliers.
 * summary:
 *   The function checks a mode flag (DAT_0003c25b) and, if it is 1 or 2, calls
 *   unsigned_divide sixteen times. Each call multiplies a base value (DAT_0003f3e8 or
 *   DAT_0003f3e9) by one of four constants (0x3b6, 0x3aa, 0x391, 0x3b1, 0x370) and adds 1
 *   or -1 to the result before storing it in consecutive bytes. The specific pattern of
 *   multipliers and the use of a counter suggest a lookup table or state machine
 *   initialization, but the exact purpose of the resulting bytes is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_sixteen_byte_table(void)

{
  char cVar1;
  
  if (DAT_0003c25b == '\x01') {
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x3b6,1000);
    DAT_0003c230 = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x3aa,1000);
    DAT_0003c231 = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x391,1000);
    DAT_0003c232 = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x3b6,1000);
    DAT_0003c234 = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x3aa,1000);
    DAT_0003c235 = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x391,1000);
    DAT_0003c236 = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x3b6,1000);
    DAT_0003c238 = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x3aa,1000);
    DAT_0003c239 = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x391,1000);
    DAT_0003c23a = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x3b6,1000);
    DAT_0003c23c = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x3aa,1000);
    DAT_0003c23d = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x391,1000);
    DAT_0003c23e = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x3b6,1000);
    DAT_0003c22c = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x3aa,1000);
    DAT_0003c22d = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x391,1000);
    DAT_0003c22e = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x3b1,1000);
    DAT_0003c23f = cVar1 + -1;
    cVar1 = unsigned_divide((uint)DAT_0003f3e8 * 0x370,1000);
    DAT_0003c254 = cVar1 + '\x01';
  }
  if (DAT_0003c25b == '\x02') {
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x3b6,1000);
    DAT_0003c230 = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x3aa,1000);
    DAT_0003c231 = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x391,1000);
    DAT_0003c232 = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x3b6,1000);
    DAT_0003c234 = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x3aa,1000);
    DAT_0003c235 = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x391,1000);
    DAT_0003c236 = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x3b6,1000);
    DAT_0003c238 = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x3aa,1000);
    DAT_0003c239 = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x391,1000);
    DAT_0003c23a = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x3b6,1000);
    DAT_0003c23c = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x3aa,1000);
    DAT_0003c23d = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x391,1000);
    DAT_0003c23e = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x3b6,1000);
    DAT_0003c22c = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x3aa,1000);
    DAT_0003c22d = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x391,1000);
    DAT_0003c22e = cVar1 + '\x01';
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x3b1,1000);
    DAT_0003c23f = cVar1 + -1;
    cVar1 = unsigned_divide((uint)DAT_0003f3e9 * 0x370,1000);
    DAT_0003c255 = cVar1 + '\x01';
  }
  return;
}
