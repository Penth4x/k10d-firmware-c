/* @k10d wait_for_bit16_clear @ 0x100f0b1c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t wait_for_bit16_clear(void)

{
  uint uVar1;
  
  uVar1 = get_sram_field_at_offset_0x24();
  while ((uVar1 & 0x10000) != 0) {
    uVar1 = get_sram_field_at_offset_0x24();
  }
  return 1;
}
