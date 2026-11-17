/* @k10d call_two_helpers_and_return_104b45e6 @ 0x104b45e6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper then a function pointer at 0x104b0436, returning the latter's
 *   result.
 * summary:
 *   The function first invokes get_sram_buffer_pointer with no arguments, discarding its
 *   return value. It then calls the function pointer stored at 0x104b0436 and returns that
 *   value in r4. No other side effects or data manipulation are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_and_return_104b45e6(void)

{
  uint32_t uVar1;
  
  get_sram_buffer_pointer();
  uVar1 = (*(code *)0x104b0436/*ROM*/)();
  return uVar1;
}
