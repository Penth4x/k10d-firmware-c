/* @k10d invoke_object_callback_with_lock @ 0x104bfd04
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, invokes a virtual method on an object, releases the lock, and returns
 *   a status flag.
 * summary:
 *   The function calls eventflag_clr_flg with a flag 0x8000, likely acquiring a mutex or
 *   semaphore. It dereferences a pointer at param_1 + 0x480 to get an object, reads a
 *   vtable pointer and offset, and calls a virtual method (slot 12) with arguments derived
 *   from the object and parameters. It then calls eventflag_wai_flg, likely releasing the
 *   lock, and finally calls eventflag_clr_flg again. The return value is a boolean check of
 *   the value at param_1 + 0x28.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_object_callback_with_lock(int param_1,uint32_t param_2,uint32_t param_3)

{
  short sVar1;
  int *piVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  int iVar5;
  code *pcVar6;
  uintptr_t sp;
  uint32_t *puVar7;
  uint8_t local_18 [4];
  
  puVar7 = (uint32_t *)local_18;
  puVar4 = (uint32_t *)(param_1 + 0x20);
  eventflag_clr_flg(puVar4,0x8000);
  piVar2 = *(int **)(param_1 + 0x480);
  iVar5 = *piVar2;
  sVar1 = *(short *)(iVar5 + 0x60);
  uVar3 = *(uint32_t *)(param_1 + 0x34);
  pcVar6 = *(code **)(iVar5 + 100);
  *puVar7 = param_3;
  (*pcVar6)((int)piVar2 + (int)sVar1,param_1,uVar3,param_2);
  eventflag_wai_flg(puVar4,0x8000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar4,0x8000);
  return *(int *)(param_1 + 0x28) == 1;
}
