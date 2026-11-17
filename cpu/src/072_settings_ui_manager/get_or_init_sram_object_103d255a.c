/* @k10d get_or_init_sram_object_103d255a @ 0x103d255a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 072_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_object_103d255a(void)

{
  if (_DAT_8001c144/*SDRAM*/ == 0) {
    _DAT_8001c144/*SDRAM*/ = 1;
    cls_105960c0_new((uint32_t *)0x8001c120/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f768/*SDRAM*/);
  }
  return 0x8001c120/*SDRAM*/;
}
