/* @k10d trigger_sr_cal_transfer_104867c0 @ 0x104867c0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Reads a value from an object field and writes it back with a flag set.
 * summary:
 *   The function takes an object pointer, reads the 4-byte field at offset 4, passes it to
 *   set_high_bit_of_read_value to compute a new value, and then calls sr_cal_transfer to
 *   write that value back to the same field with a third argument of 1. It acts as a simple
 *   getter-setter wrapper for a specific object member.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void trigger_sr_cal_transfer_104867c0(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = set_high_bit_of_read_value(*(uint32_t *)(param_1 + 4));
  sr_cal_transfer(*(uint32_t *)(param_1 + 4),uVar1,1);
  return;
}
