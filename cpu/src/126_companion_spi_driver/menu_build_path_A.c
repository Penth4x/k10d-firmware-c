/* @k10d menu_build_path_A @ 0x1044a516
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed run_sd_init_step_table)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Executes a sequence of SD/MMC initialization steps from a descriptor table until one
 *   fails or the table ends.
 * summary:
 *   Sets a flag at offset 0x3c4 in the host structure to 1. Iterates through an array of 8
 *   step descriptors starting at offset 0x7c, resolving function pointers (handling both
 *   direct and indirect references) and calling them with the host structure as an
 *   argument. Continues execution as long as the step function returns 1 and the step index
 *   is less than 0x40. Returns the result of the last executed step function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int menu_build_path_A(int param_1)

{
  short *psVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  *(uint32_t *)(param_1 + 0x3c4) = 1;
  iVar4 = 0;
  do {
    psVar1 = (short *)(param_1 + 0x7c + iVar4);
    iVar3 = *psVar1 + param_1;
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
  } while ((iVar4 < 0x40) && (iVar3 == 1));
  return iVar3;
}
