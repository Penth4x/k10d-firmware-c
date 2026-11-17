/* @k10d set_two_object_params @ 0x104b4530
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves two object pointers and sets a parameter on each, then returns 1.
 * summary:
 *   Calls get_or_init_sram_block_104b3d52 and get_sram_buffer_pointer to obtain object
 *   pointers, then calls call_helper_with_param_two_104b3da4 and
 *   invoke_virtual_slot_with_zero respectively with param_2 as the second argument. Returns
 *   1 unconditionally. The specific subsystem is not identifiable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_two_object_params(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_sram_block_104b3d52();
  call_helper_with_param_two_104b3da4(uVar1,param_2);
  uVar1 = get_sram_buffer_pointer();
  invoke_virtual_slot_with_zero((void *)uVar1,param_2);
  return 1;
}
