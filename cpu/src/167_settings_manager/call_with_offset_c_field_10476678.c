/* @k10d call_with_offset_c_field_10476678 @ 0x10476678
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte field at offset 0xc of the object in param_1 and passes it to
 *   clamp_counter_to_range, returning the result.
 * summary:
 *   A one-line wrapper that dereferences param_1 + 0xc and forwards that value as the sole
 *   argument to clamp_counter_to_range, returning whatever that callee returns. No other
 *   side effects or globals are touched. The role of clamp_counter_to_range is unknown, so
 *   the higher-level meaning cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_with_offset_c_field_10476678(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = clamp_counter_to_range(*(uint32_t *)(param_1 + 0xc));
  return uVar1;
}
