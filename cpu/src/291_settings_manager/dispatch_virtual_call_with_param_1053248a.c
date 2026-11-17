/* @k10d dispatch_virtual_call_with_param_1053248a @ 0x1053248a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves a virtual method pointer from an object and invokes it with a computed this-
 *   pointer and a transformed parameter.
 * summary:
 *   The function dereferences a pointer at offset 0x14 of param_1, adds 0x9c to get a sub-
 *   object, and reads a short value at offset 0x40 of that sub-object. It calls an unknown
 *   function at 0x104a8c94 with param_2 to obtain a value. Finally, it performs a virtual
 *   call through the function pointer at offset 0x44 of the sub-object, passing the
 *   adjusted this-pointer (sub-object address plus the short offset) and the result from
 *   the helper call. No camera-specific subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_with_param_1053248a(int param_1,uint32_t param_2)

{
  short sVar1;
  uint32_t uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(*(int *)(param_1 + 0x14) + 0x9c);
  iVar4 = *piVar3;
  sVar1 = *(short *)(iVar4 + 0x40);
  uVar2 = (*(code *)0x104a8c94/*ROM*/)(param_2);
  (**(code **)(iVar4 + 0x44))((int)piVar3 + (int)sVar1,uVar2);
  return;
}
