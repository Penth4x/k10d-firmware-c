/* @k10d init_object_and_call_virtual_slot_10364ba6 @ 0x10364ba6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Sets two fields in an object, invokes a virtual method, and calls a helper function.
 * summary:
 *   The function writes 0 to offset 0x204 and 3 to offset 0x208 of the object pointed to by
 *   param_1. It then performs a virtual call through the vtable at offset 0x44, passing the
 *   object as the first argument. Finally, it calls release_object_at_offset_0x70 with the
 *   object pointer. The specific subsystem or camera role is not determinable from the
 *   provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_and_call_virtual_slot_10364ba6(int *param_1)

{
  param_1[0x81] = 0;
  param_1[0x82] = 3;
  (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
  release_object_at_offset_0x70(param_1);
  return;
}
