/* @k10d init_object_with_two_ids_10365d30 @ 0x10365d30
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 006_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Sets a field at offset 0x14 to 2 and calls three helpers with a fixed SDRAM address.
 * summary:
 *   The function writes the constant 2 to param_1+0x14. It then calls
 *   register_and_select_menu_items_1038c638 with arguments (0x80018060, 0x14, 0, 0, 1),
 *   followed by call_helper_on_struct_field_1036c46c with no arguments, and finally
 *   call_helper_on_struct_field_1036c41a with (param_1, 0x80018060, 1). The role of the
 *   callees and the specific subsystem is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_10365d30(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x14) = 2;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,0x14,0,0,1);
  call_helper_on_struct_field_1036c46c();
  call_helper_on_struct_field_1036c41a(param_1,(void *)0x80018060/*SDRAM*/,1);
  return;
}
