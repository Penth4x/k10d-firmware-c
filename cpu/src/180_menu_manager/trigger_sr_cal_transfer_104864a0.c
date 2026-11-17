/* @k10d trigger_sr_cal_transfer_104864a0 @ 0x104864a0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Reads a value from an object field at offset 0xa0, transforms it, and writes the result
 *   back to the same field.
 * summary:
 *   The function dereferences the pointer at param_1 + 0xa0 and passes it to
 *   set_high_bit_of_read_value to compute a new value. It then calls sr_cal_transfer with
 *   the original pointer, the computed value, and the constant 1, likely to store or update
 *   the field. The specific roles of the callees and the object structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void trigger_sr_cal_transfer_104864a0(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = set_high_bit_of_read_value(*(uint32_t *)(param_1 + 0xa0));
  sr_cal_transfer(*(uint32_t *)(param_1 + 0xa0),uVar1,1);
  return;
}
