/* @k10d get_or_init_sram_object_103c0f94 @ 0x103c0f94
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_object_103c0f94(void)

{
  if (_DAT_8001bdf4/*SDRAM*/ == 0) {
    _DAT_8001bdf4/*SDRAM*/ = 1;
    cls_105950ac_new((uint32_t *)0x8001bdd0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f5c4/*SDRAM*/);
  }
  return 0x8001bdd0/*SDRAM*/;
}
