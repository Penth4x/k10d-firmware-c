/* @k10d trigger_sr_cal_transfer_1047142a @ 0x1047142a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 164_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Reads a value from param_1+0x54, transforms it via set_high_bit_of_read_value, and
 *   writes the result back through sr_cal_transfer.
 * summary:
 *   The function dereferences the pointer at offset 0x54 of the object in param_1, passes
 *   it to set_high_bit_of_read_value to compute a new value, and then calls sr_cal_transfer
 *   with the original pointer, the computed value, and the constant 1. It acts as a small
 *   accessor/updater for a specific field within a larger structure. The callees are not
 *   named, so the specific subsystem role is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void trigger_sr_cal_transfer_1047142a(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = set_high_bit_of_read_value(*(uint32_t *)(param_1 + 0x54));
  sr_cal_transfer(*(uint32_t *)(param_1 + 0x54),uVar1,1);
  return;
}
