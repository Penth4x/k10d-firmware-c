/* @k10d check_sram_block_magic @ 0x100f08e0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Verifies that a block at SDRAM offset 0x10 matches a specific magic value and contains
 *   a repeating pattern.
 * summary:
 *   The function checks if the integer at _DAT_800042c0 + 0x10 equals DAT_10000010. If so,
 *   it iterates through a number of offsets (1 or 3 based on param_1) defined in a table at
 *   0x100f2024. For each offset, it checks if the 64-bit value at that SDRAM location
 *   equals a specific pattern (DAT_10000010 in the high 32 bits and 0xffffffa5 in the low
 *   32 bits). It returns 1 if all checks pass, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_sram_block_magic(int param_1)

{
  uint32_t uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0;
  if (*(int *)(_DAT_800042c0/*SDRAM*/ + 0x10) == DAT_10000010/*ROM*/) {
    uVar1 = 1;
    if (param_1 == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = 3;
    }
    if (iVar4 != 0) {
      iVar3 = 0;
      do {
        piVar2 = (int *)(*(int *)(&DAT_100f2024/*ROM*/ + iVar3) * 2 + _DAT_800042c0/*SDRAM*/);
        if (*piVar2 != DAT_10000010/*ROM*/ * 0x10001) {
          return 0;
        }
        if (piVar2[1] != -0x5aa5a55b) {
          return 0;
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 < iVar4 * 4);
    }
  }
  return uVar1;
}
