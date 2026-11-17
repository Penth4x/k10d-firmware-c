/* @k10d call_two_helpers_and_return_104b45ba @ 0x104b45ba
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls two unnamed helper functions in sequence and returns the second helper's result.
 * summary:
 *   The function invokes get_or_init_sram_block_104b3d52 for its side effects, then calls
 *   call_two_helpers_and_return_104b3df8 and returns its value in r4. No arguments are
 *   passed to either callee. The specific subsystem or behavior is not determinable from
 *   the pseudocode alone since both callees are unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_and_return_104b45ba(void)

{
  uint32_t uVar1;
  
  get_or_init_sram_block_104b3d52();
  uVar1 = call_two_helpers_and_return_104b3df8();
  return uVar1;
}
