/* @k10d get_or_init_singleton_object_103c8200 @ 0x103c8200
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 059_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_103c8200(void)

{
  if (_DAT_8001bf10/*SDRAM*/ == 0) {
    _DAT_8001bf10/*SDRAM*/ = 1;
    cls_10595818_new((cls_10595818 *)0x8001bee8/*SDRAM*/);
    prepend_to_singly_linked_list((uint32_t *)(0x8000f650/*SDRAM*/));
  }
  return 0x8001bee8/*SDRAM*/;
}
