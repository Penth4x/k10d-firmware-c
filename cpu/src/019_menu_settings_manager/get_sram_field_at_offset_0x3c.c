/* @k10d get_sram_field_at_offset_0x3c @ 0x1036c0bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_sram_field_at_offset_0x3c(uint32_t param_x0)

{
  return *(uint32_t *)(_DAT_8000439c/*SDRAM*/ + 0x3c);
}
