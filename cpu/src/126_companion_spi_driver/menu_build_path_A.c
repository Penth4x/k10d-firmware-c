/* @k10d menu_build_path_A @ 0x1044a516
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed run_sd_init_step_table)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Executes a sequence of up to 8 SD/MMC initialization steps from a descriptor table,
 *   stopping on the first non-success result.
 * summary:
 *   Sets a flag at param_1+0x3c4 to 1, then iterates through an 8-entry table starting at
 *   param_1+0x7c. Each entry is a function pointer (with optional this-adjustment) that is
 *   called with the base object pointer. The loop continues as long as the step function
 *   returns 1 and fewer than 8 steps have been executed. Returns the result of the last
 *   executed step function. Called by sd_card_init_worker to run the MMC initialization
 *   sequence.
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
