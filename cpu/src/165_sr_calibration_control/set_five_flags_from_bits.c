/* @k10d set_five_flags_from_bits @ 0x10471ad0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_five_flags_from_bits(int param_1,uint param_2)

{
  set_bit_in_mmio_register(*(uint32_t *)(param_1 + 0x30),(param_2 & 1) != 0);
  set_bit_in_mmio_register(*(uint32_t *)(param_1 + 0x34),(param_2 & 2) != 0);
  set_bit_in_mmio_register(*(uint32_t *)(param_1 + 0x38),(param_2 & 4) != 0);
  set_bit_in_mmio_register(*(uint32_t *)(param_1 + 0x3c),(param_2 & 8) != 0);
  set_bit_in_mmio_register(*(uint32_t *)(param_1 + 0x40),(param_2 & 0x10) != 0);
  return;
}
