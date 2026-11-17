/* @k10d dispatch_virtual_call_via_object_105327da @ 0x105327da
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves a virtual function pointer from an object structure and invokes it with a
 *   computed this-pointer and a transformed argument.
 * summary:
 *   The function dereferences a pointer at offset 0x14 of param_1, then accesses offset
 *   0x7c to get a base object pointer. It reads a short offset from the object at 0x40 and
 *   a function pointer at 0x44. It calls an external function at 0x104a8c94 with param_2,
 *   then invokes the virtual function with the adjusted this-pointer (base + short offset)
 *   and the result of the external call. This follows the Cfront virtual call idiom.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_via_object_105327da(int param_1,uint32_t param_2)

{
  short sVar1;
  uint32_t uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(*(int *)(param_1 + 0x14) + 0x7c);
  iVar4 = *piVar3;
  sVar1 = *(short *)(iVar4 + 0x40);
  uVar2 = (*(code *)0x104a8c94/*ROM*/)(param_2);
  (**(code **)(iVar4 + 0x44))((int)piVar3 + (int)sVar1,uVar2);
  return;
}
