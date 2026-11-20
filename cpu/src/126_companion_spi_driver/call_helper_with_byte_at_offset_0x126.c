/* @k10d call_helper_with_byte_at_offset_0x126 @ 0x1043d6c4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper with param_1, zero, and the byte at offset 0x126 of param_1.
 * summary:
 *   Reads a single byte from offset 0x126 of the object pointed to by param_1 and passes
 *   it, along with param_1 and a zero constant, to update_byte_field_in_object. The
 *   function acts as a thin wrapper around that callee. No other side effects are visible
 *   in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_byte_at_offset_0x126(cls_105a0828 *param_1)

{
  update_byte_field_in_object(param_1,0,param_1->field_0x126);
  return;
}
