/* @k10d update_state_counters @ 0x000cc346
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Increments internal counters and shifts a state byte based on flags in a local data
 *   block.
 * summary:
 *   The function iterates up to three times, reading a byte from an array at 0x0003f2ce. It
 *   checks a flag at 0x0003ce01 and increments a counter at 0x0003ce04 if set. It also
 *   increments a counter at 0x0003ce03 and left-shifts a byte at 0x0003ce24 if specific
 *   conditions are met. No external calls are made.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int update_state_counters(void)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  bVar1 = DAT_0003ce20;
  while( true ) {
    if (bVar1 <= _DAT_0003ce32) {
      return iVar2;
    }
    if ((DAT_0003ce01 & 0x10) != 0) {
      DAT_0003ce04 = DAT_0003ce04 + 1;
    }
    if ((((DAT_0003ce04 & 2) == 0) || (_DAT_0003ce2c < bVar1)) &&
       (DAT_0003ce03 = DAT_0003ce03 + 1, (DAT_0003ce03 & 2) != 0)) {
      _DAT_0003ce24 = _DAT_0003ce24 << 1;
    }
    if (iVar2 + 1 == 3) break;
    bVar1 = (&DAT_0003f2ce)[iVar2];
    iVar2 = iVar2 + 1;
  }
  return 3;
}
