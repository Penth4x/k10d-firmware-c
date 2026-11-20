/* @k10d dispatch_state_two_with_flag_toggle_1036a440 @ 0x1036a440
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Toggles a flag at offset 0x14, dispatches to one of two handlers based on a state field
 *   at 0x2ac, then clears the flag.
 * summary:
 *   The function reads a byte at param_1+0x14 via read_byte_at_offset_0x1d. If non-zero, it
 *   calls dispatch_object_state_update_10491fb2 with 1. It then checks the int at
 *   param_1+0x2ac: if 0 it calls build_and_send_parameter_block, if 1 it calls
 *   call_two_helpers_on_param. Finally, it re-reads the byte at param_1+0x14 and if non-
 *   zero calls dispatch_object_state_update_10491fb2 with 0. The pattern suggests a guarded
 *   state transition or event handler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_two_with_flag_toggle_1036a440(cls_10557b38 *param_1)

{
  char cVar1;
  uint8_t *puVar2;
  
  puVar2 = &param_1->field_0x14;
  cVar1 = read_byte_at_offset_0x1d((int)puVar2);
  if (cVar1 != '\0') {
    dispatch_object_state_update_10491fb2((int)puVar2,1);
  }
  if (param_1->field_0x2ac == 0) {
    build_and_send_parameter_block((int)(param_1));
  }
  else if (param_1->field_0x2ac == 1) {
    call_two_helpers_on_param((int)(param_1));
  }
  cVar1 = read_byte_at_offset_0x1d((int)puVar2);
  if (cVar1 != '\0') {
    dispatch_object_state_update_10491fb2((int)puVar2,0);
  }
  return;
}
