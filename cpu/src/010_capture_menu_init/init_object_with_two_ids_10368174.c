/* @k10d init_object_with_two_ids_10368174 @ 0x10368174
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 010_capture_menu_init (unit names are model-proposed)
 * purpose:
 *   Sets a field to 2, calls an init helper, and registers two IDs on the object.
 * summary:
 *   Writes the constant 2 to offset 0x14 of the object in param_1. Calls
 *   register_and_select_menu_items_1038c638 with a fixed SDRAM address (0x80018060) and
 *   param_2, then calls call_helper_on_struct_field_1036c46c. Calls
 *   call_helper_on_fetched_object twice with offsets 0xd and 0xe on the object's field at
 *   0x18, and finally calls call_helper_on_struct_field_1036c41a with the object, the SDRAM
 *   address, and 1. The callees are not named, so the specific subsystem is not
 *   determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_10368174(void *param_1,uint32_t param_2)

{
  *(uint32_t *)((int)param_1 + 0x14) = 2;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,param_2,0,0,0);
  call_helper_on_struct_field_1036c46c();
  call_helper_on_fetched_object((void *)((int)param_1 + 0x18),0xd);
  call_helper_on_fetched_object((void *)((int)param_1 + 0x18),0xe);
  call_helper_on_struct_field_1036c41a(param_1,(void *)0x80018060/*SDRAM*/,1);
  return;
}
