/* @k10d build_status_byte_from_flags @ 0x000c9426
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Computes a status byte in DAT_0003c388 by mapping bits from several flag words into
 *   specific bit positions.
 * summary:
 *   The function reads multiple flag bytes (DAT_0003c126, DAT_0003c127, DAT_0003c128,
 *   DAT_0003c101, DAT_0003c12d) and uses a nested if-else chain to set the lower 4 bits of
 *   DAT_0003c388 to values 0-8. It also sets bits 4, 5, and 6 of DAT_0003c388 based on bits
 *   4, 6, and 7 of DAT_0003c128, and conditionally sets bit 7. Finally, it stores a 3-bit
 *   value derived from DAT_0003c126 into DAT_0003c389. No external functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_status_byte_from_flags(void)

{
  if ((DAT_0003c127 & 1) == 0) {
    if ((DAT_0003c127 & 2) == 0) {
      if ((DAT_0003c127 & 4) == 0) {
        if ((DAT_0003c126 & 0x20) == 0) {
          if (((DAT_0003c127 & 0x40) == 0) &&
             (((DAT_0003c127 & 0x20) == 0 || (DAT_0003c12a == '\0')))) {
            if ((DAT_0003c127 & 0x20) == 0) {
              if ((DAT_0003c126 & 0x10) == 0) {
                if ((DAT_0003c127 & 0x10) == 0) {
                  if ((DAT_0003c127 & 8) != 0) {
                    DAT_0003c388 = DAT_0003c388 & 0xf0 | 3;
                    DAT_0003c38b = DAT_0003c12b;
                    DAT_0003c38a = 0;
                  }
                }
                else {
                  DAT_0003c388 = DAT_0003c388 & 0xf0 | 4;
                  DAT_0003c38b = DAT_0003c113;
                  DAT_0003c38a = 0;
                }
              }
              else {
                DAT_0003c388 = DAT_0003c388 & 0xf0 | 7;
                DAT_0003c38b = DAT_0003c142;
                DAT_0003c38a = DAT_0003c143 & 3;
              }
            }
            else {
              DAT_0003c388 = DAT_0003c388 & 0xf0 | 5;
              DAT_0003c38b = DAT_0003c12b;
              DAT_0003c38a = 0;
            }
          }
          else {
            DAT_0003c388 = DAT_0003c388 & 0xf0 | 6;
            DAT_0003c38b = DAT_0003c12a;
            DAT_0003c38a = 0;
          }
        }
        else {
          DAT_0003c388 = DAT_0003c388 & 0xf0 | 8;
          DAT_0003c38b = DAT_0003c142;
          DAT_0003c38a = DAT_0003c143 & 3;
        }
      }
      else {
        DAT_0003c388 = DAT_0003c388 & 0xf0 | 2;
      }
    }
    else {
      DAT_0003c388 = DAT_0003c388 & 0xf0 | 1;
    }
  }
  else {
    DAT_0003c388 = DAT_0003c388 & 0xf0;
  }
  if ((DAT_0003c128 & 0x10) != 0) {
    DAT_0003c388 = DAT_0003c388 | 0x40;
  }
  if ((DAT_0003c128 & 0x40) != 0) {
    DAT_0003c388 = DAT_0003c388 | 0x20;
  }
  if ((DAT_0003c128 & 0x80) != 0) {
    DAT_0003c388 = DAT_0003c388 | 0x10;
  }
  if ((((DAT_0003c126 & 0x20) == 0) || ((DAT_0003c143 & 0x40) == 0)) || ((DAT_0003c143 & 0x20) == 0)
     ) {
    if ((DAT_0003c101 & 0x80) != 0) {
      DAT_0003c388 = DAT_0003c388 | 0x80;
    }
  }
  else if ((DAT_0003c12d & 1) != 0) {
    DAT_0003c388 = DAT_0003c388 | 0x80;
  }
  DAT_0003c389 = DAT_0003c126 >> 1 & 7;
  return;
}
