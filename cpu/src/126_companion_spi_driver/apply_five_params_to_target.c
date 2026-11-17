/* @k10d apply_five_params_to_target @ 0x10436d9c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes five consecutive values from an array to five small helper functions, each
 *   receiving the first argument and one array element.
 * summary:
 *   The function takes an identifier (param_1) and a pointer to an array (param_2). It
 *   sequentially calls five adjacent helper functions (store_value_at_offset_four_10436d60
 *   through store_value_at_offset_0x14), passing param_1 and param_2[0] through param_2[4]
 *   respectively. The helpers are unnamed and their specific roles are unknown, but the
 *   pattern suggests applying a set of five parameters to a target object or context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_five_params_to_target(uint32_t param_1,uint32_t *param_2)

{
  store_value_at_offset_four_10436d60(param_1,*param_2);
  store_value_at_offset_8_10436d66(param_1,param_2[1]);
  store_value_at_offset_0xc_10436d6c(param_1,param_2[2]);
  store_value_at_offset_0x10_10436d72(param_1,param_2[3]);
  store_value_at_offset_0x14(param_1,param_2[4]);
  return;
}
