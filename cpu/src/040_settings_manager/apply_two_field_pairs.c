/* @k10d apply_two_field_pairs @ 0x10397d92
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Applies two pairs of values from an object's fields to two helper functions.
 * summary:
 *   Reads four 32-bit values from offsets 0x54, 0x58, 0x5c, and 0x60 of the object pointed
 *   to by param_1. It calls call_helper_with_size_608 with the object and the value at
 *   0x60, then calls dispatch_virtual_then_call_helper with the object, the value at 0x5c,
 *   and the value at 0x60. It repeats this pattern for the values at 0x58 and 0x54. The
 *   specific roles of the fields and helper functions are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_two_field_pairs(int param_1)

{
  call_helper_with_size_608(param_1,*(uint32_t *)(param_1 + 0x60));
  dispatch_virtual_then_call_helper(param_1,*(uint32_t *)(param_1 + 0x5c),*(uint32_t *)(param_1 + 0x60));
  call_helper_with_size_608(param_1,*(uint32_t *)(param_1 + 0x58));
  dispatch_virtual_then_call_helper(param_1,*(uint32_t *)(param_1 + 0x54),*(uint32_t *)(param_1 + 0x58));
  return;
}
