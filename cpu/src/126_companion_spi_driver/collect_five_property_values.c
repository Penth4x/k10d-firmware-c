/* @k10d collect_five_property_values @ 0x10436dce
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Fills a 5-element array with values returned by five consecutive getter functions.
 * summary:
 *   The function calls read_field_at_offset_four_10436d7e (no args) and four other
 *   functions (read_field_at_offset_8_10436d84, get_offset_c_from_struct,
 *   get_field_at_offset_0x10_10436d90, read_offset_0x14) that each take param_1 as an
 *   argument. It stores the return values sequentially into the array pointed to by param_2
 *   and returns the constant 5. The specific meaning of the values is unknown because the
 *   callees are not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t collect_five_property_values(uint32_t param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  
  uVar1 = read_field_at_offset_four_10436d7e((uint32_t)param_1);
  *param_2 = uVar1;
  uVar1 = read_field_at_offset_8_10436d84(param_1);
  param_2[1] = uVar1;
  uVar1 = get_offset_c_from_struct(param_1);
  param_2[2] = uVar1;
  uVar1 = get_field_at_offset_0x10_10436d90(param_1);
  param_2[3] = uVar1;
  uVar1 = read_offset_0x14(param_1);
  param_2[4] = uVar1;
  return 5;
}
