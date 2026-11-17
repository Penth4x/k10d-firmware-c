/* @k10d invoke_object_callback_and_release @ 0x104bf856
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, invokes a virtual method on an object, releases the lock, and returns
 *   a status flag.
 * summary:
 *   The function calls eventflag_clr_flg to acquire a resource (likely a mutex) associated
 *   with param_1+0x20. It then dereferences a pointer at param_1+0x480 to get an object,
 *   reads a vtable pointer and offset, and calls a virtual method with arguments derived
 *   from the object and param_1. After the call, it releases the resource via
 *   eventflag_wai_flg and re-acquires it via eventflag_clr_flg. Finally, it returns true if
 *   the integer at param_1+0x28 is 1. The specific camera subsystem is not identifiable
 *   from the provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_object_callback_and_release(int param_1)

{
  short sVar1;
  int *piVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t *puVar5;
  int iVar6;
  code *pcVar7;
  uintptr_t sp;
  int *piVar8;
  uint8_t local_10 [4];
  
  piVar8 = (int *)local_10;
  puVar5 = (uint32_t *)(param_1 + 0x20);
  eventflag_clr_flg(puVar5,0x40);
  piVar2 = *(int **)(param_1 + 0x480);
  iVar6 = *piVar2;
  sVar1 = *(short *)(iVar6 + 0x48);
  uVar3 = *(uint32_t *)(param_1 + 0x34);
  uVar4 = *(uint32_t *)(param_1 + 0x38);
  pcVar7 = *(code **)(iVar6 + 0x4c);
  *piVar8 = param_1 + 0x44;
  (*pcVar7)((int)piVar2 + (int)sVar1,param_1,uVar3,uVar4);
  eventflag_wai_flg(puVar5,0x40,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar5,0x40);
  return *(int *)(param_1 + 0x28) == 1;
}
