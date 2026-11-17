/* @k10d call_helper_with_0xc00_flag @ 0x1043c684
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards its two arguments to update_status_word_bits_1043c816 with a third constant
 *   argument of 0xc00.
 * summary:
 *   A thin wrapper that invokes update_status_word_bits_1043c816(param_1, param_2, 0xc00).
 *   No local state is modified and no other side effects are visible. The role of
 *   update_status_word_bits_1043c816 is unknown, so the camera subsystem cannot be
 *   inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0xc00_flag(void *param_1,ushort param_2)

{
  update_status_word_bits_1043c816(param_1,param_2,0xc00);
  return;
}
