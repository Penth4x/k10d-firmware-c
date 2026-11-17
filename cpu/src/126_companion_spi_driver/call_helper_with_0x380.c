/* @k10d call_helper_with_0x380 @ 0x1043c676
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards its two arguments to update_status_word_bits_1043c816 with a fixed third
 *   argument of 0x380.
 * summary:
 *   A one-line wrapper that calls update_status_word_bits_1043c816(param_1, param_2, 0x380)
 *   and returns. The callee's role is unknown, so the subsystem cannot be inferred; the
 *   only observable behavior is the fixed 0x380 constant passed as the third parameter.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0x380(void *param_1,ushort param_2)

{
  update_status_word_bits_1043c816(param_1,param_2,0x380);
  return;
}
