/* @k10d store_value_at_offset_0x214 @ 0x104cb5e2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores the result of a helper call into a struct field and sets an adjacent field to a
 *   constant.
 * summary:
 *   The function reads a pointer from offset 0x48 of the input object, passes it to
 *   compute_offset_and_call_helper, and stores the return value at offset 0x214. It also
 *   writes the constant 0xc0009 to offset 0x210. The specific role of the object or the
 *   helper function is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_0x214(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = compute_offset_and_call_helper(*(int *)(param_1 + 0x48));
  *(uint32_t *)(param_1 + 0x214) = uVar1;
  *(uint32_t *)(param_1 + 0x210) = 0xc0009;
  return;
}
