/* @k10d set_flags_and_call_virtual_slot @ 0x10364b3c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Sets two struct fields to 1, invokes virtual slot 8, then calls a helper.
 * summary:
 *   The function writes the value 1 to offsets 0x204 and 0x208 of the object pointed to by
 *   param_1. It then performs a virtual call to slot 8 (offset 0x44 in the vtable) with the
 *   object as the this pointer. Finally, it calls release_object_at_offset_0x70 with the
 *   same object pointer. The specific camera subsystem role is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flags_and_call_virtual_slot(int *param_1)

{
  param_1[0x81] = 1;
  param_1[0x82] = 1;
  (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
  release_object_at_offset_0x70(param_1);
  return;
}
