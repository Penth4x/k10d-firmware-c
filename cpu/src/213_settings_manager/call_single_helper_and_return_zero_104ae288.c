/* @k10d call_single_helper_and_return_zero_104ae288 @ 0x104ae288
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper with the given pointer argument and returns zero.
 * summary:
 *   The function takes one pointer parameter, passes it to
 *   invoke_virtual_slot_two_104ae294, and unconditionally returns 0. It is a virtual method
 *   shared by 10 vtable slots, suggesting a default or inherited implementation. No other
 *   side effects or state modifications are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_single_helper_and_return_zero_104ae288(cls_105b77c0 *param_1)

{
  invoke_virtual_slot_two_104ae294(param_1);
  return 0;
}
