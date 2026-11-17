/* @k10d call_single_helper_104bea4e @ 0x104bea4e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 225_ae_settings_init (unit names are model-proposed)
 * purpose:
 *   Calls copy_three_byte_state_to_array and returns its result unchanged.
 * summary:
 *   A one-line wrapper that invokes copy_three_byte_state_to_array with no arguments and
 *   returns the 32-bit value in r4. No local state is modified and no other side effects
 *   are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_single_helper_104bea4e(void)

{
  uint32_t uVar1;
  
  uVar1 = copy_three_byte_state_to_array(__frv_reg_unset(4));
  return uVar1;
}
