/* @k10d menu_build_pathB_substep_driver @ 0x10449f7e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed run_sd_init_step_table)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Iterates through a table of 12 SD/MMC initialization step descriptors, calling each
 *   until one fails or the table ends.
 * summary:
 *   The function walks an array of 12 8-byte descriptors starting at param_1 + 0x1c. Each
 *   descriptor contains a function pointer and a context/argument. It calls the function
 *   pointer with the context as an argument. The loop continues as long as the return value
 *   is 1 (success) and the index is less than 0x60. It clears a status word at param_1 +
 *   0x3c4 before starting. This is a standard state-machine or step-table driver for SD
 *   card initialization sequences (CMD8, ACMD41, etc.).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void menu_build_pathB_substep_driver(void *param_1)

{
  short *psVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  *(uint32_t *)((int)param_1 + 0x3c4) = 0;
  iVar4 = 0;
  do {
    psVar1 = (short *)((int)param_1 + iVar4 + 0x1c);
    iVar3 = (int)*psVar1 + (int)param_1;
    if (psVar1[1] < 0) {
      pcVar2 = *(code **)(psVar1 + 2);
    }
    else {
      psVar1 = (short *)(*(int *)((short)*(uint32_t *)(psVar1 + 2) + iVar3) + psVar1[1] * 8);
      iVar3 = *psVar1 + iVar3;
      pcVar2 = *(code **)(psVar1 + 2);
    }
    iVar3 = (*pcVar2)(iVar3);
    iVar4 = iVar4 + 8;
  } while ((iVar4 < 0x60) && (iVar3 == 1));
  return;
}
