/* @k10d dispatch_object_state_change_10410c0e @ 0x10410c0e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Conditionally invokes a virtual method and helper functions on an object, then calls a
 *   final state-update routine.
 * summary:
 *   The function checks if param_2 is non-zero. If so, it calls release_subobject_triplets
 *   and check_kernel_call_success_10459fea, then performs a virtual call on the object
 *   pointed to by param_1 (specifically slot 15, offset 0x7c) with an argument of 1.
 *   Finally, it calls toggle_state_machine with the object and a boolean flag indicating
 *   whether param_2 was non-zero. The specific subsystem is not identifiable from the
 *   provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_object_state_change_10410c0e(void *param_1,int param_2)

{
  if (param_2 != 0) {
    release_subobject_triplets(param_1);
    check_kernel_call_success_10459fea();
    (**(code **)(*(int *)((int)param_1 + 4) + 0x7c))
              ((int)*(short *)(*(int *)((int)param_1 + 4) + 0x78) + (int)param_1,1);
  }
  toggle_state_machine(param_1,(uint)(param_2 != 0));
  return;
}
