/* @k10d get_or_init_sram_buffer_1049c3d6 @ 0x1049c3d6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_buffer_1049c3d6(void)

{
  if (_DAT_80049004/*SDRAM*/ == 0) {
    _DAT_80049004/*SDRAM*/ = 1;
    allocate_string_buffer((void *)0x80048fec/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010560/*SDRAM*/);
  }
  return 0x80048fec/*SDRAM*/;
}
