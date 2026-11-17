/* @k10d read_byte_at_offset_0x2f @ 0x100f1f12
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t read_byte_at_offset_0x2f(void)

{
  return *(uint8_t *)(_DAT_800482d4/*SDRAM*/ + 0x2f);
}
