/* @k10d read_byte_from_fifo @ 0x000e2f3a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Waits for a FIFO status flag and returns the next byte from one of two 4-byte buffers.
 * summary:
 *   The function selects between two 4-byte buffers based on param_1 (0-3 for the first,
 *   4-7 for the second). It polls a status byte (DAT_00000079 or DAT_00000085) until bit 6
 *   is set, then clears the byte. It extracts the specific byte from the selected buffer
 *   and returns it masked to 8 bits. The behavior is consistent with reading from a
 *   hardware FIFO or serial buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint read_byte_from_fifo(int param_1,uint param_2)

{
  if (param_1 < 4) {
    do {
    } while ((DAT_00000079 & 0x40) == 0);
    DAT_00000079 = 0;
    if (param_1 == 0) {
      param_2 = CONCAT22(_DAT_0000007d,_DAT_0000007f);
    }
    else if (param_1 == 1) {
      param_2 = CONCAT22(_DAT_0000007f,_DAT_00000081);
    }
    else if (param_1 == 2) {
      param_2 = CONCAT22(_DAT_00000081,_DAT_00000083);
    }
    else if (param_1 == 3) {
      param_2 = (uint)DAT_00000086;
    }
  }
  else {
    do {
    } while ((DAT_00000085 & 0x40) == 0);
    DAT_00000085 = 0;
    if (param_1 == 4) {
      param_2 = CONCAT22(_DAT_00000089,_DAT_0000008b);
    }
    else if (param_1 == 5) {
      param_2 = CONCAT22(_DAT_0000008b,_DAT_0000008d);
    }
    else if (param_1 == 6) {
      param_2 = CONCAT22(_DAT_0000008d,_DAT_0000008f);
    }
    else if (param_1 == 7) {
      param_2 = CONCAT22(_DAT_0000008f,uRam00000091);
    }
  }
  return param_2 & 0xff;
}
