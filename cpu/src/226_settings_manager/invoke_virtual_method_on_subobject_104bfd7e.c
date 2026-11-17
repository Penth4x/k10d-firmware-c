/* @k10d invoke_virtual_method_on_subobject_104bfd7e @ 0x104bfd7e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on a subobject found via a pointer chain, passing the parent
 *   object and a stored value.
 * summary:
 *   The function retrieves a pointer from param_1 + 0x480 and uses it to access a subobject
 *   at an offset determined by a short value at +0xb8. It then calls a virtual function
 *   pointer located at +0xbc of that subobject, passing the adjusted subobject pointer, the
 *   parent object, a value from param_1 + 0x34, and a pointer to param_1 + 0x44. It also
 *   calls two other functions (eventflag_clr_flg and eventflag_wai_flg) with a pointer to
 *   param_1 + 0x20 and the constant 0x10000. Finally, it returns true if the value at
 *   param_1 + 0x28 is 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_virtual_method_on_subobject_104bfd7e(int param_1,uint32_t param_2)

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
  eventflag_clr_flg(puVar4,0x10000);
  piVar2 = *(int **)(param_1 + 0x480);
  iVar5 = *piVar2;
  sVar1 = *(short *)(iVar5 + 0xb8);
  uVar3 = *(uint32_t *)(param_1 + 0x34);
  pcVar6 = *(code **)(iVar5 + 0xbc);
  *puVar7 = param_2;
  (*pcVar6)((int)piVar2 + (int)sVar1,param_1,uVar3,param_1 + 0x44);
  eventflag_wai_flg(puVar4,0x10000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar4,0x10000);
  return *(int *)(param_1 + 0x28) == 1;
}
