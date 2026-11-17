/* @k10d initialize_module_and_set_flag @ 0x10396f60
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a module by calling a sequence of setup functions and sets a flag if a
 *   subsequent operation succeeds.
 * summary:
 *   The function calls an unnamed initialization routine
 *   (dispatch_status_to_handler_10396fb8) followed by six setup functions
 *   (dispatch_mode_status_update through dispatch_status_to_handler_103972c4) that all take
 *   param_1 as an argument. It then retrieves a value from get_value_from_object, processes
 *   it through add_offset_to_pointer_104df392 and check_flag_and_set_out_param_104d83ee
 *   with param_2, and if the result is non-zero, calls store_byte_to_ram_800045b4 with
 *   param_1 and 1. Returns true if the final operation succeeded.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool initialize_module_and_set_flag(void *param_1,uint8_t *param_2)

{
  int iVar1;
  
  dispatch_status_to_handler_10396fb8();
  dispatch_mode_status_update((int)param_1);
  dispatch_mode_init_sequence((int)param_1);
  map_mode_to_index_and_dispatch((int)param_1);
  map_status_to_mode_and_dispatch_103971e0((int)param_1);
  map_status_to_mode_and_dispatch_10397252((int)param_1);
  dispatch_status_to_handler_103972c4((int)param_1);
  iVar1 = get_value_from_object();
  iVar1 = add_offset_to_pointer_104df392(iVar1);
  iVar1 = check_flag_and_set_out_param_104d83ee(iVar1,param_2);
  if (iVar1 != 0) {
    store_byte_to_ram_800045b4(param_1,1);
  }
  return iVar1 != 0;
}
