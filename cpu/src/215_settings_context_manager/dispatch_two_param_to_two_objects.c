/* @k10d dispatch_two_param_to_two_objects @ 0x104b45fc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves two object pointers and calls a method on each with the second parameter.
 * summary:
 *   The function calls get_or_init_sram_block_104b3d52 to get an object pointer, then calls
 *   forward_param_to_helper_104b3e2c on it with param_2. It then calls
 *   get_sram_buffer_pointer to get a second object pointer and calls a function at
 *   0x104b041e on it with param_2. This pattern suggests a broadcast or update operation to
 *   two related components.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_two_param_to_two_objects(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_sram_block_104b3d52();
  forward_param_to_helper_104b3e2c(uVar1,param_2);
  uVar1 = get_sram_buffer_pointer();
  (*(code *)0x104b041e/*ROM*/)(uVar1,param_2);
  return;
}
