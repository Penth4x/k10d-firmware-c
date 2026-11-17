/* @k10d store_value_and_constant_in_struct @ 0x104cb538
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores the result of a helper call and a fixed constant into two adjacent fields of a
 *   struct.
 * summary:
 *   The function reads a 32-bit value from offset 0x48 of the object pointed to by param_1
 *   and passes it to evaluate_startup_error_code. The return value is written to offset
 *   0x214 of the same object. Immediately after, the constant 0xc0006 is written to offset
 *   0x210. The caller is dispatch_pending_event_flags_104c4ca8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_and_constant_in_struct(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = evaluate_startup_error_code(*(uint32_t *)(param_1 + 0x48));
  *(uint32_t *)(param_1 + 0x214) = uVar1;
  *(uint32_t *)(param_1 + 0x210) = 0xc0006;
  return;
}
