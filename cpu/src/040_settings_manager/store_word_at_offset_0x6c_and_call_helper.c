/* @k10d store_word_at_offset_0x6c_and_call_helper @ 0x10397c9a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value into a struct at offset 0x6c and then calls an unknown helper.
 * summary:
 *   The function stores param_2 into the memory location param_1 + 0x6c, then invokes
 *   clamp_product_to_999_and_notify with no arguments. The role of the struct field and the
 *   helper function are not determinable from the provided pseudocode and callee list.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_word_at_offset_0x6c_and_call_helper(int param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 0x6c) = param_2;
  clamp_product_to_999_and_notify((void *)__frv_reg_unset(4));
  return;
}
