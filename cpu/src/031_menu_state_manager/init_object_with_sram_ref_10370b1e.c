/* @k10d init_object_with_sram_ref_10370b1e @ 0x10370b1e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 031_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Sets a field at offset 0x14 to 2 and calls three helpers with a fixed SDRAM address.
 * summary:
 *   Writes the value 2 to param_1+0x14. Calls register_and_select_menu_items_1038c638 with
 *   0x80018060 and constants, then call_helper_on_struct_field_1036c46c, then
 *   call_helper_on_struct_field_1036c41a with param_1 and 0x80018060. The callees are
 *   unnamed, so the specific subsystem role is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_sram_ref_10370b1e(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x14) = 2;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,0x15,2,1,1);
  call_helper_on_struct_field_1036c46c();
  call_helper_on_struct_field_1036c41a(param_1,(void *)0x80018060/*SDRAM*/,1);
  return;
}
