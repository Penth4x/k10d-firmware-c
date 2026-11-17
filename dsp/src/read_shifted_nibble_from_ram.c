/* @k10d read_shifted_nibble_from_ram @ 0x000e2eb0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Waits for a bit in a RAM flag, clears it, and returns a 10-bit value assembled from
 *   adjacent RAM bytes.
 * summary:
 *   The function branches on param_1 (0-7). For 0-3 it spins until bit 6 of DAT_00000079 is
 *   set, clears the flag, and builds a value from bytes at 0x7c-0x85. For 4-7 it spins on
 *   bit 6 of DAT_00000085, clears it, and builds a value from bytes at 0x88-0x90. The
 *   result is masked with 0x3ff. The RAM addresses are below 0x10000000, so these are
 *   likely on-chip RAM or a low-memory region, not the SDRAM or MMIO regions listed in the
 *   brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint read_shifted_nibble_from_ram(int param_1,uint param_2)

{
  if (param_1 < 4) {
    do {
    } while ((DAT_00000079 & 0x40) == 0);
    DAT_00000079 = 0;
    if (param_1 == 0) {
      param_2 = CONCAT22(_DAT_0000007c,_DAT_0000007e);
    }
    else if (param_1 == 1) {
      param_2 = CONCAT22(_DAT_0000007e,_DAT_00000080);
    }
    else if (param_1 == 2) {
      param_2 = CONCAT22(_DAT_00000080,_DAT_00000082);
    }
    else if (param_1 == 3) {
      param_2 = CONCAT31(CONCAT21(_DAT_00000082,DAT_00000084),DAT_00000085);
    }
  }
  else {
    do {
    } while ((DAT_00000085 & 0x40) == 0);
    DAT_00000085 = 0;
    if (param_1 == 4) {
      param_2 = CONCAT22(_DAT_00000088,_DAT_0000008a);
    }
    else if (param_1 == 5) {
      param_2 = CONCAT22(_DAT_0000008a,_DAT_0000008c);
    }
    else if (param_1 == 6) {
      param_2 = CONCAT22(_DAT_0000008c,_DAT_0000008e);
    }
    else if (param_1 == 7) {
      param_2 = CONCAT22(_DAT_0000008e,uRam00000090);
    }
  }
  return param_2 & 0x3ff;
}
