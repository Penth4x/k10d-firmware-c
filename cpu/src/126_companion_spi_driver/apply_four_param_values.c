/* @k10d apply_four_param_values @ 0x10436f76
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Applies four consecutive values from a parameter array to an object via four helper
 *   calls.
 * summary:
 *   The function takes an object pointer (param_1) and a pointer to an array of four 32-bit
 *   values (param_2). It sequentially calls four distinct helper functions
 *   (store_value_at_offset_four_10436f46, store_value_at_offset_eight_10436f4c,
 *   store_value_at_offset_0xc_10436f52, store_value_at_offset_0x10_10436f58), passing the
 *   object and each successive array element as arguments. This pattern suggests a batch
 *   update or configuration routine where multiple properties are set at once.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_four_param_values(uint32_t param_1,uint32_t *param_2)

{
  store_value_at_offset_four_10436f46(param_1,*param_2);
  store_value_at_offset_eight_10436f4c(param_1,param_2[1]);
  store_value_at_offset_0xc_10436f52(param_1,param_2[2]);
  store_value_at_offset_0x10_10436f58(param_1,param_2[3]);
  return;
}
