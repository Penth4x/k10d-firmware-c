/* @k10d call_helper_with_field_0x58 @ 0x104b4a3e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 216_settings_validation (unit names are model-proposed)
 * purpose:
 *   Reads the 32-bit value at offset 0x58 of the object in param_1 and passes it to a
 *   single callee.
 * summary:
 *   The function dereferences param_1 + 0x58 and forwards that value as the sole argument
 *   to clear_byte_at_offset_0x40. No other operations, loops, or side effects are visible.
 *   The role of the callee and the meaning of the 0x58 field are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105b8354": ignoring overlapping field "field_0x8" */

void call_helper_with_field_0x58(cls_105b8354 *param_1)

{
  clear_byte_at_offset_0x40(param_1->field_0x58);
  return;
}
