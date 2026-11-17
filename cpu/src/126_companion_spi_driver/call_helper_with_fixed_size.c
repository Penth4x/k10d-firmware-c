/* @k10d call_helper_with_fixed_size @ 0x1043c748
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls update_status_word_bits_1043c816 with the given parameters and a fixed third
 *   argument of 0x380.
 * summary:
 *   This function is a thin wrapper that forwards its two arguments to
 *   update_status_word_bits_1043c816, adding a constant third parameter of 0x380 (896
 *   decimal). It is called by configure_object_with_five_params. The specific role of
 *   update_status_word_bits_1043c816 is unknown, so the camera subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_size(void *param_1,ushort param_2)

{
  update_status_word_bits_1043c816(param_1,param_2,0x380);
  return;
}
