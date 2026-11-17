/* @k10d init_object_field_and_call_helpers_1036506c @ 0x1036506c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Sets a field at offset 0x204 to 4 and calls three helper functions with a fixed SDRAM
 *   address.
 * summary:
 *   The function writes the value 4 to the memory location param_1 + 0x204. It then calls
 *   register_and_select_menu_items_1038c638 with arguments (0x80018060, 0x14, 2, 1, 1),
 *   followed by call_helper_on_struct_field_1036c46c with no arguments, and finally
 *   call_helper_on_struct_field_1036c41a with (param_1, 0x80018060, 1). The role of the
 *   specific subsystem is not determinable from the provided pseudocode and unknown
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_field_and_call_helpers_1036506c(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x204) = 4;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,0x14,2,1,1);
  call_helper_on_struct_field_1036c46c();
  call_helper_on_struct_field_1036c41a(param_1,(void *)0x80018060/*SDRAM*/,1);
  return;
}
