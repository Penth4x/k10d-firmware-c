/* @k10d settings_save_block1 @ 0x1048376c
 * name: verified (structural evidence: emulator call: flash_program_block(.., 0x10005000, 0x8005a2bc, 0x84))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Writes the second settings block (0x8005a2bc, 0x84 halfwords) to flash at 0x10005000.
 * summary:
 *   VERIFIED: emulator call: flash_program_block(.., 0x10005000, 0x8005a2bc, 0x84)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t settings_save_block1(int param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  int iVar5;
  
  uVar4 = *(uint32_t *)(param_1 + 4);
  iVar5 = **(int **)(param_1 + 0xc);
  uVar1 = (((vtbl_entry*)(iVar5))[9].fn)((int)*(int **)(param_1 + 0xc) + (int)((vtbl_entry*)(iVar5))[9].adj)
  ;
  iVar5 = **(int **)(param_1 + 0xc);
  uVar2 = (((vtbl_entry*)(iVar5))[8].fn)((int)*(int **)(param_1 + 0xc) + (int)((vtbl_entry*)(iVar5))[8].adj)
  ;
  iVar5 = **(int **)(param_1 + 0xc);
  uVar3 = (((vtbl_entry*)(iVar5))[10].fn)((int)*(int **)(param_1 + 0xc) + (int)((vtbl_entry*)(iVar5))[10].adj)
  ;
  uVar1 = flash_program_block(uVar4,(void*)(uVar1),uVar2,uVar3);
  return uVar1;
}
