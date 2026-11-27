/* @k10d init_object_with_two_ids_1040a3b0 @ 0x1040a3b0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling a helper and setting a flag at offset 0x55.
 * summary:
 *   The function calls clear_flag_and_call_subroutine_1040a3d2 with no arguments. It then
 *   calls call_subroutine_on_field_0x48, passing the value at param_1 + 0x28 and the
 *   constant 1. Finally, it sets the byte at param_1 + 0x55 to 1. The specific subsystem is
 *   not identifiable from the provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_1040a3b0(int param_1)

{
  clear_flag_and_call_subroutine_1040a3d2((uint32_t)param_1);
  call_subroutine_on_field_0x48(*(uint32_t *)(param_1 + 0x28),1);
  *(uint8_t *)(param_1 + 0x55) = 1;
  return;
}
