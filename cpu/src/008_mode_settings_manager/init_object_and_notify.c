/* @k10d init_object_and_notify @ 0x1036704c
 * name: model (proposed by the local model from the decompile, confidence 0.30)
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a field in the object to 2, calls an unknown helper with a fixed SDRAM address,
 *   and invokes two other helpers.
 * summary:
 *   The function writes the value 2 to offset 0x1c of the object passed in param_1. It then
 *   calls register_and_select_menu_items_1038c638 with a fixed SDRAM address (0x80018060)
 *   and other constants, followed by call_helper_on_struct_field_1036c46c and
 *   call_helper_on_struct_field_1036c41a. The specific roles of the callees and the object
 *   are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_and_notify(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x1c) = 2;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,0x16,0,0,1);
  call_helper_on_struct_field_1036c46c();
  call_helper_on_struct_field_1036c41a(param_1,(void *)0x80018060/*SDRAM*/,1);
  return;
}
