/* @k10d invoke_virtual_method_on_object_1053270c @ 0x1053270c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves a virtual method pointer from an object and calls it with a computed this
 *   pointer and a transformed argument.
 * summary:
 *   The function dereferences a pointer at offset 0x14 of param_1, adds 0x4bc to get a base
 *   address, and reads an object pointer from that location. It extracts a short offset
 *   from the object at 0x40 and calls an unknown function at 0x104a8c94 with param_2.
 *   Finally, it invokes a virtual method (slot 8) on the object, passing the adjusted this
 *   pointer and the result of the helper call. No camera-specific subsystem is identifiable
 *   from the code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_object_1053270c(int param_1,uint32_t param_2)

{
  short sVar1;
  uint32_t uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(*(int *)(param_1 + 0x14) + 0x4bc);
  iVar4 = *piVar3;
  sVar1 = *(short *)(iVar4 + 0x40);
  uVar2 = (*(code *)0x104a8c94/*ROM*/)(param_2);
  (((vtbl_entry*)(iVar4))[8].fn)((int)piVar3 + (int)sVar1,uVar2);
  return;
}
