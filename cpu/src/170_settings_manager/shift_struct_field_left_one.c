/* @k10d shift_struct_field_left_one @ 0x1047ee7c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 32-bit field at offset 0x24 of the given structure shifted left by one bit.
 * summary:
 *   Reads the int at param_1 + 0x24 and returns it left-shifted by 1. No callees, no side
 *   effects, no MMIO. The caller is sum_five_values_into_offset_0x2c, whose role is not
 *   established, so the camera subsystem cannot be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int shift_struct_field_left_one(int param_1)

{
  return *(int *)(param_1 + 0x24) << 1;
}
