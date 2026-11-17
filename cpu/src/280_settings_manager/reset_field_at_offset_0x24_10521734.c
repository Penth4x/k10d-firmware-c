/* @k10d reset_field_at_offset_0x24_10521734 @ 0x10521734
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unknown function at 0x10521cba and zeroes the 4-byte field at offset 0x24 of
 *   the object.
 * summary:
 *   This is virtual slot 2 of cls_105d7b7c. It invokes a function pointer at 0x10521cba
 *   with no arguments, then writes 0 to the memory location param_1 + 0x24. The object is
 *   0x30 bytes, so this field is near the end of the structure. No other side effects are
 *   visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_field_at_offset_0x24_10521734(int param_1)

{
  (*(code *)0x10521cba/*ROM*/)();
  *(uint32_t *)(param_1 + 0x24) = 0;
  return;
}
