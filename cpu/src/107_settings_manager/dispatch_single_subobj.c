/* @k10d dispatch_single_subobj @ 0x10427d26
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_subobject_slot_two)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 of the sub-object stored at offset 4 of the given object.
 * summary:
 *   Reads the pointer at param_1+4. If non-null, performs a Cfront virtual call to slot 2
 *   (vtable offset 0x14) of that sub-object, passing the this-adjusted pointer as the sole
 *   argument. Returns the callee's return value, or 0 if the sub-object pointer is null. No
 *   other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_single_subobj(int param_1)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1);
  }
  return uVar2;
}
