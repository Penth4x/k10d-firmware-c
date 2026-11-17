/* @k10d call_handler_with_fetched_arg_104af30e @ 0x104af30e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Fetches a value from an unknown function and passes it with a second argument to a
 *   function pointer.
 * summary:
 *   The function calls get_or_init_sram_buffer_104ae40c to obtain a value, then invokes the
 *   code pointer at 0x104ae880 with that value and the second input parameter. It acts as a
 *   simple trampoline or dispatcher. The roles of the callee and the target function
 *   pointer are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_handler_with_fetched_arg_104af30e(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_sram_buffer_104ae40c();
  (*(code *)0x104ae880/*ROM*/)(uVar1,param_2);
  return;
}
