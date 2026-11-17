/* @k10d dispatch_mode_change_event_1047cdb8 @ 0x1047cdb8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode ID, selects a handler based on a state value, and dispatches a virtual
 *   event with a computed code.
 * summary:
 *   The function writes param_2 to offset 0x40 of the object and calls
 *   initialize_struct_header on offset 0x2c. It reads a state value from the object pointed
 *   to by param_2 and selects one of four helper functions
 *   (invoke_virtual_callback_and_update_state, invoke_virtual_method_on_subobject_1047cf4e,
 *   copy_six_bytes_from_object, copy_struct_fields_to_target) along with a specific code
 *   (0x10000, 0x10002, 0x10036, 0x1000f). It then performs a virtual call (slot 2) on an
 *   object retrieved from the state pointer, passing the computed code and the object's
 *   offset 0x2c. Finally, it calls free_object_if_flag_set_1052107a with argument 3 and
 *   clears the pointer at offset 0x40.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_change_event_1047cdb8(int param_1,uint32_t param_2)

{
  int iVar1;
  int *piVar2;
  uint32_t uVar3;
  
  *(uint32_t *)(param_1 + 0x40) = param_2;
  initialize_struct_header((void *)(param_1 + 0x2c));
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 4);
  uVar3 = 0;
  if (iVar1 == 0) {
    uVar3 = 0x10000;
    invoke_virtual_callback_and_update_state(param_1);
  }
  else if (iVar1 == 1) {
    uVar3 = 0x10002;
    invoke_virtual_method_on_subobject_1047cf4e(param_1);
  }
  else if (iVar1 == 2) {
    uVar3 = 0x10036;
    copy_six_bytes_from_object(param_1);
  }
  else if (iVar1 == 3) {
    uVar3 = 0x1000f;
    copy_struct_fields_to_target(param_1);
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x40) + 8);
  iVar1 = *piVar2;
  (**(code **)(iVar1 + 0x14))((int)piVar2 + (int)*(short *)(iVar1 + 0x10),uVar3,param_1 + 0x2c);
  free_object_if_flag_set_1052107a(*(void **)(param_1 + 0x40),3);
  *(uint32_t *)(param_1 + 0x40) = 0;
  return;
}
