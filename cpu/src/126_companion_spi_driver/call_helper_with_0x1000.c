/* @k10d call_helper_with_0x1000 @ 0x1043c654
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards its two arguments to update_status_word_bits_1043c816, appending a fixed
 *   0x1000 third argument.
 * summary:
 *   A one-line wrapper that calls update_status_word_bits_1043c816(param_1, param_2,
 *   0x1000). No local state is touched and no return value is used. The role of
 *   update_status_word_bits_1043c816 is unknown, so the camera subsystem cannot be
 *   inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0x1000(void *param_1,ushort param_2)

{
  update_status_word_bits_1043c816(param_1,param_2,0x1000);
  return;
}
