/* @k10d invoke_virtual_method_on_object_104bf940 @ 0x104bf940
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object pointer stored in a struct, passing struct fields
 *   as arguments.
 * summary:
 *   The function retrieves a virtual function pointer from an object at offset 0x5c and
 *   calls it with a this-adjusted pointer, the main struct, and other fields. It performs
 *   memory operations on a buffer at param_1+0x20 before and after the call. Returns a
 *   boolean based on the value at param_1+0x28.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_virtual_method_on_object_104bf940(int param_1,uint32_t param_2)

{
  short sVar1;
  int *piVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  int iVar5;
  code *pcVar6;
  uintptr_t sp;
  uint32_t *puVar7;
  uint8_t auStack_18 [8];
  
  puVar7 = (uint32_t *)auStack_18;
  puVar4 = (uint32_t *)(param_1 + 0x20);
  eventflag_clr_flg(puVar4,0x100);
  piVar2 = *(int **)(param_1 + 0x480);
  iVar5 = *piVar2;
  uVar3 = *(uint32_t *)(param_1 + 0x34);
  sVar1 = *(short *)(iVar5 + 0x58);
  pcVar6 = *(code **)(iVar5 + 0x5c);
  *puVar7 = *(uint32_t *)(param_1 + 0x3c);
  puVar7[1] = param_2;
  (*pcVar6)((int)piVar2 + (int)sVar1,param_1,uVar3,param_1 + 0x44);
  eventflag_wai_flg(puVar4,0x100,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar4,0x100);
  return *(int *)(param_1 + 0x28) == 1;
}
