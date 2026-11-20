/* @k10d get_or_init_sram_object_103973c4 @ 0x103973c4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_object_103973c4(void)

{
  if (_DAT_8001a77c/*SDRAM*/ == 0) {
    _DAT_8001a77c/*SDRAM*/ = 1;
    cls_10563098_new((cls_10563098 *)0x8001a730/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004688/*SDRAM*/);
  }
  return 0x8001a730/*SDRAM*/;
}
