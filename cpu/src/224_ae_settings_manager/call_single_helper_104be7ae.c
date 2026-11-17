/* @k10d call_single_helper_104be7ae @ 0x104be7ae
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls update_array_flags_via_virtual_call and returns its result unchanged.
 * summary:
 *   This function is a one-line wrapper that invokes update_array_flags_via_virtual_call
 *   with no arguments and returns the value in r4. No other operations, side effects, or
 *   state modifications are visible in the pseudocode. The caller at 0x104cc064 uses this
 *   wrapper to obtain the return value of update_array_flags_via_virtual_call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_single_helper_104be7ae(void)

{
  uint32_t uVar1;
  
  uVar1 = update_array_flags_via_virtual_call(__frv_reg_unset(4));
  return uVar1;
}
