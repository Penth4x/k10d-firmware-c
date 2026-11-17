/* @k10d query_child_flag_zero @ 0x104b298a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper on a sub-object then virtually queries slot 2 of a child pointer with
 *   arg 0, returning 1 if the result's low bit is clear.
 * summary:
 *   First calls clear_two_fields_and_reset with the field at offset 0x10 and constant 1.
 *   Then reads the child pointer at offset 8; if non-null, performs a virtual call to slot
 *   2 (vtable offset 0x1c) with a this-adjustment from offset 0x18 and argument 0. Returns
 *   1 if the call's low bit is 0, otherwise 0; returns 1 if the child pointer is null. The
 *   callee clear_two_fields_and_reset is unnamed, so the subsystem role is not
 *   determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_child_flag_zero(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint32_t uVar3;
  
  clear_two_fields_and_reset((int *)(*(uint32_t *)(param_1 + 0x10)),1);
  piVar1 = *(int **)(param_1 + 8);
  uVar3 = 1;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0);
    uVar3 = 1;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}
