/* @k10d invoke_callback_and_check_flag @ 0x104bf8cc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a function pointer from a linked object and returns whether a status field
 *   equals 1.
 * summary:
 *   The function calls eventflag_clr_flg on a sub-structure at offset 0x20, then
 *   dereferences a pointer at offset 0x480 to access an object. It retrieves a function
 *   pointer from offset 0x54 of that object and calls it with arguments derived from the
 *   object and the input parameters. It then calls eventflag_wai_flg and eventflag_clr_flg
 *   again before returning the result of comparing the integer at offset 0x28 of the input
 *   structure to 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_callback_and_check_flag(int param_1,uint32_t param_2)

{
  short sVar1;
  int *piVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  int iVar5;
  code *pcVar6;
  uintptr_t sp;
  uint32_t *puVar7;
  uint8_t local_14 [4];
  
  puVar7 = (uint32_t *)local_14;
  puVar4 = (uint32_t *)(param_1 + 0x20);
  eventflag_clr_flg(puVar4,0x80);
  piVar2 = *(int **)(param_1 + 0x480);
  iVar5 = *piVar2;
  sVar1 = *(short *)(iVar5 + 0x50);
  uVar3 = *(uint32_t *)(param_1 + 0x34);
  pcVar6 = *(code **)(iVar5 + 0x54);
  *puVar7 = param_2;
  (*pcVar6)((int)piVar2 + (int)sVar1,param_1,uVar3,param_1 + 0x44);
  eventflag_wai_flg(puVar4,0x80,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar4,0x80);
  return *(int *)(param_1 + 0x28) == 1;
}
