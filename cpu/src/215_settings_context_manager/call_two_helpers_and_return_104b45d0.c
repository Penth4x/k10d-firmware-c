/* @k10d call_two_helpers_and_return_104b45d0 @ 0x104b45d0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper, then calls a function pointer at 0x104b0426 and returns its
 *   result.
 * summary:
 *   The function first invokes get_sram_buffer_pointer, then dereferences the code pointer
 *   stored at 0x104b0426 and calls it with no arguments. The return value of the second
 *   call is returned to the caller. No other side effects or data manipulation are visible
 *   in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_and_return_104b45d0(void)

{
  uint32_t uVar1;
  
  get_sram_buffer_pointer();
  uVar1 = (*(code *)0x104b0426/*ROM*/)();
  return uVar1;
}
