/* @k10d get_value_and_store_in_out_param @ 0x10436380
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper to get a value, stores it in the pointer argument, and returns 1.
 * summary:
 *   The function calls read_field_at_offset_four_10436370 with no arguments. It stores the
 *   return value of that call into the memory location pointed to by param_2. It then
 *   returns the constant 1. The specific role of read_field_at_offset_four_10436370 is
 *   unknown, so the mechanical behavior is a wrapper that retrieves a value and writes it
 *   to an output parameter.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_value_and_store_in_out_param(uint32_t param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  
  uVar1 = read_field_at_offset_four_10436370((uint32_t)param_1);
  *param_2 = uVar1;
  return 1;
}
