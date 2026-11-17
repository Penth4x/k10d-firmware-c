/* @k10d call_helper_with_seven_and_ff @ 0x1046781e
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Forwards its single argument to read_and_mask_byte_1046786c with fixed constants 7 and
 *   0xff.
 * summary:
 *   A one-line wrapper that invokes read_and_mask_byte_1046786c(param_1, 7, 0xff) and
 *   returns. The callee's role is not yet named, so the specific subsystem cannot be
 *   determined from this function alone. The module is firmware_update (references
 *   KBCHG.BIN), but the code itself only shows a pass-through call with two constant
 *   arguments.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_seven_and_ff(uint32_t param_1)

{
  read_and_mask_byte_1046786c(param_1,7,0xff);
  return;
}
