/* @k10d ec_configure @ 0x10433542
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed invoke_virtual_slot_3_on_five_members)
 * unit: 119_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 3 (vtable offset 0x1c) on five non-null member objects of a
 *   0x40-byte class instance.
 * summary:
 *   The function reads five pointers from offsets 0x2c, 0x04, 0x30, 0x38, and 0x3c of the
 *   object passed in param_1. For each non-null pointer, it performs a Cfront-style virtual
 *   call to slot 3 (offset 0x1c) with an argument of 0. The prior note suggests these are
 *   'EC' sub-objects, but without callee names or further context, the specific subsystem
 *   role is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void ec_configure(void *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0);
  }
  piVar1 = *(int **)((int)param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0);
  }
  piVar1 = *(int **)((int)param_1 + 0x30);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0);
  }
  piVar1 = *(int **)((int)param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0);
  }
  piVar1 = *(int **)((int)param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0);
  }
  return;
}
