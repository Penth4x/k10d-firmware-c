/* @k10d call_two_helpers_and_return_10394a0c @ 0x10394a0c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions in sequence and returns the second helper's
 *   result.
 * summary:
 *   The function performs no local computation. It calls
 *   get_or_create_sram_object_1040a240, discards its return value, then calls
 *   init_object_with_virtual_call_1040a676 and returns that value in r4. Without known
 *   roles for the callees, the specific subsystem or operation cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_and_return_10394a0c(void)

{
  uint32_t uVar1;
  
  get_or_create_sram_object_1040a240();
  uVar1 = init_object_with_virtual_call_1040a676(__frv_reg_unset(4));
  return uVar1;
}
