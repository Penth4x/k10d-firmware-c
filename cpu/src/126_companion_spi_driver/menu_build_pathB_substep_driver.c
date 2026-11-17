/* @k10d menu_build_pathB_substep_driver @ 0x10449f7e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed run_sd_init_step_table)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Iterates a table of 12 function pointers at param_1+0x1c, calling each until one
 *   returns a value other than 1.
 * summary:
 *   The function clears a 4-byte field at param_1+0x3c4 and then loops 12 times (0x60 bytes
 *   / 8-byte stride). Each iteration resolves a function pointer from the table, handling a
 *   potential vtable indirection if the second word of the descriptor is negative, and
 *   invokes it with the base object pointer. The loop terminates early if the callee
 *   returns anything other than 1. Given the caller is sd_card_init_worker, this executes
 *   the sequence of SD/MMC initialization commands (e.g., CMD8, ACMD41, etc.).
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
