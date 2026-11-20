/* @k10d read_two_byte_from_struct @ 0x104284cc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit value from a struct at an offset computed from two index parameters.
 * summary:
 *   The function takes a base pointer (param_1) and two indices (param_2, param_3). It
 *   calculates an offset of 0x38 + (param_3 * 2) + (param_2 * 8) and returns the 16-bit
 *   value stored at that location. This suggests accessing an array of 16-bit elements
 *   (stride 2) within a larger structure or array of 8-byte elements (stride 8), starting
 *   at offset 0x38. No callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_two_byte_from_struct(int param_1,int param_2,int param_3)

{
  return *(uint16_t *)(param_1 + 0x38 + param_3 * 2 + param_2 * 8);
}
