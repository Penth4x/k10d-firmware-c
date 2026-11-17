/* @k10d invoke_virtual_slot_two_and_notify @ 0x104b29ee
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 on the object if a pointer field is set, then calls virtual slot 6
 *   on the pointed-to object with a flag and parameter.
 * summary:
 *   Checks if param_1[2] is non-null. If so, invokes virtual slot 2 (offset 0x14) on the
 *   object pointed to by param_1. If that call returns non-zero, it dereferences param_1[2]
 *   to get a second object and invokes virtual slot 6 (offset 0x34) on it, passing the
 *   adjusted pointer, the constant 1, and param_1[4]. Returns 1 if the second call was
 *   made, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_and_notify(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if ((param_1[2] != 0) &&
     (iVar1 = (**(code **)(*param_1 + 0x14))((int)*(short *)(*param_1 + 0x10) + (int)param_1),
     iVar1 != 0)) {
    iVar1 = *(int *)param_1[2];
    (**(code **)(iVar1 + 0x34))(param_1[2] + (int)*(short *)(iVar1 + 0x30),1,param_1[4]);
    uVar2 = 1;
  }
  return uVar2;
}
