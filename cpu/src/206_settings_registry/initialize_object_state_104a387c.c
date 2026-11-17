/* @k10d initialize_object_state_104a387c @ 0x104a387c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Initializes object fields by calling setup routines and storing results from two getter
 *   functions.
 * summary:
 *   The function calls sr_driver_singleton and passes a pointer offset by 4 to
 *   module_array_getter with argument 9. It then stores the return values of
 *   return_sram_address_104357ec and get_or_init_sram_buffer_1052c5b8 into offsets 0x5c and
 *   0x64 of the object. Finally, it calls initialize_two_entry_table and
 *   initialize_parameter_table on the object and returns 1. The specific roles of the
 *   callees are unknown, preventing a more specific camera-subsystem name.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_state_104a387c(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sr_driver_singleton();
  module_array_getter(*(void **)(iVar1 + 4),9);
  uVar2 = return_sram_address_104357ec();
  *(uint32_t *)(param_1 + 0x5c) = uVar2;
  uVar2 = get_or_init_sram_buffer_1052c5b8();
  *(uint32_t *)(param_1 + 100) = uVar2;
  initialize_two_entry_table(param_1);
  initialize_parameter_table(param_1);
  return 1;
}
