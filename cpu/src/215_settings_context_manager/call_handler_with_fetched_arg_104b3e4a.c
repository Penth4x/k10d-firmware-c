/* @k10d call_handler_with_fetched_arg_104b3e4a @ 0x104b3e4a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Fetches a value from an unknown helper and passes it with a second argument to a
 *   function pointer at 0x104b1ed4.
 * summary:
 *   The function calls get_or_init_ram_buffer_104b172a to obtain a value, then invokes the
 *   code pointer located at 0x104b1ed4, passing the fetched value and the original second
 *   parameter. No camera-specific behavior or subsystem is evident from the limited
 *   pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_handler_with_fetched_arg_104b3e4a(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_ram_buffer_104b172a();
  (*(code *)0x104b1ed4/*ROM*/)(uVar1,param_2);
  return;
}
