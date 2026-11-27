/* @k10d collect_four_status_values @ 0x10436fa0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls four small getter functions and stores their return values into a four-element
 *   output array.
 * summary:
 *   The function invokes get_field_at_offset_four_10436f5e (no args),
 *   get_field_at_offset_8_10436f64, get_field_at_offset_0xc, and
 *   get_field_at_offset_0x10_10436f70 (each taking param_1), writing the results
 *   sequentially into param_2[0] through param_2[3]. It returns the constant 4, likely
 *   indicating the number of values populated. The specific meaning of the four values is
 *   unknown because the callees are unnamed and their behavior is not provided.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t collect_four_status_values(uint32_t param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  
  uVar1 = get_field_at_offset_four_10436f5e((uint32_t)param_1);
  *param_2 = uVar1;
  uVar1 = get_field_at_offset_8_10436f64(param_1);
  param_2[1] = uVar1;
  uVar1 = get_field_at_offset_0xc(param_1);
  param_2[2] = uVar1;
  uVar1 = get_field_at_offset_0x10_10436f70(param_1);
  param_2[3] = uVar1;
  return 4;
}
