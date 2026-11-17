/* @k10d get_or_init_sram_object_104248cc @ 0x104248cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_object_104248cc(void)

{
  if (_DAT_8001d1d0/*SDRAM*/ == 0) {
    _DAT_8001d1d0/*SDRAM*/ = 1;
    cls_1059de3c_new((uint32_t *)0x8001d1ac/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fbf0/*SDRAM*/);
  }
  return 0x8001d1ac/*SDRAM*/;
}
