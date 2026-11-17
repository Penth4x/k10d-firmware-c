/* @k10d update_field_at_offset_0x20 @ 0x10470b04
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 162_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Reads a value from param_1+0x20, transforms it via set_high_bit_of_read_value, and
 *   writes the result back to the same location.
 * summary:
 *   The function extracts a 32-bit value from offset 0x20 of the object pointed to by
 *   param_1. It passes this value to set_high_bit_of_read_value to compute a new value. It
 *   then calls sr_cal_transfer with the original field address, the computed value, and the
 *   constant 1, likely to store or update the field. The specific roles of the callees are
 *   unknown, so the operation is described mechanically as a read-transform-write cycle on
 *   a specific struct member.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_field_at_offset_0x20(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = set_high_bit_of_read_value(*(uint32_t *)(param_1 + 0x20));
  sr_cal_transfer(*(uint32_t *)(param_1 + 0x20),uVar1,1);
  return;
}
