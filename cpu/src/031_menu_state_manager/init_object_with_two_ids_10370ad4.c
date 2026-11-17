/* @k10d init_object_with_two_ids_10370ad4 @ 0x10370ad4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 031_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Sets a field at offset 0x14 to 2 and calls three helpers with a fixed SDRAM address.
 * summary:
 *   Writes the constant 2 to *(param_1 + 0x14). Calls
 *   register_and_select_menu_items_1038c638 with arguments (0x80018060, 0x15, 0, 0, 1).
 *   Calls call_helper_on_struct_field_1036c46c with no arguments. Calls
 *   call_helper_on_struct_field_1036c41a with (param_1, 0x80018060, 1). The callees are not
 *   named, so the specific subsystem role is not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_10370ad4(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x14) = 2;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,0x15,0,0,1);
  call_helper_on_struct_field_1036c46c();
  call_helper_on_struct_field_1036c41a(param_1,(void *)0x80018060/*SDRAM*/,1);
  return;
}
