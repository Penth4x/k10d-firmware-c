/* @k10d reset_state_and_invoke_callback @ 0x103909aa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 037_sr_settings_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_state_and_invoke_callback(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  int iVar5;
  
  uRam80019848 = 6;
  uRam8001984c = 0;
  uRam80019850 = 0;
  piVar2 = *(int **)(param_1 + 0x60);
  if (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    sVar1 = *(short *)(iVar3 + 0x20);
    iVar5 = 0xc;
    do {
      iVar4 = iVar5 + -4;
      *(uint32_t *)(&stack0xffffffe8 + iVar5) = *(uint32_t *)(&DAT_80019844/*SDRAM*/ + iVar5);
      iVar5 = iVar4;
    } while (iVar4 != 0);
    (**(code **)(iVar3 + 0x24))((int)sVar1 + (int)piVar2,auStack_14);
  }
  set_flg_obj((uint32_t *)(param_1 + 0x4c));
  return;
}
