/* @k10d toggle_flag_and_run_handler @ 0x1036e20a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * purpose:
 *   Checks a flag on a sub-object, sets it, runs a handler, then clears the flag.
 * summary:
 *   Reads a pointer at offset 0x14 of param_1 and queries its state via
 *   read_byte_at_offset_0x1d. If the state is non-zero, it sets the state to 1 via
 *   dispatch_object_state_update_10491fb2. It then calls map_mode_state_pair to get a
 *   value, passes it to register_and_select_menu_item_1038d2ac at offset 0x18, and calls
 *   read_two_shorts_from_buffer. Finally, it re-checks the state and sets it to 0 if it was
 *   non-zero. The pattern suggests a guarded execution of a handler with state management.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_flag_and_run_handler(cls_10557ecc *param_1)

{
  char cVar2;
  uint32_t uVar1;
  
  cVar2 = read_byte_at_offset_0x1d(*(int *)&param_1->field_0x14);
  if (cVar2 != '\0') {
    dispatch_object_state_update_10491fb2(*(int *)&param_1->field_0x14,1);
  }
  uVar1 = map_mode_state_pair(param_1);
  register_and_select_menu_item_1038d2ac((int)(&param_1->field_0x18),(int)(uVar1));
  read_two_shorts_from_buffer((int)param_1);
  cVar2 = read_byte_at_offset_0x1d(*(int *)&param_1->field_0x14);
  if (cVar2 != '\0') {
    dispatch_object_state_update_10491fb2(*(int *)&param_1->field_0x14,0);
  }
  return;
}
