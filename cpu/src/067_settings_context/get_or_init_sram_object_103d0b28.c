/* @k10d get_or_init_sram_object_103d0b28 @ 0x103d0b28
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 067_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_object_103d0b28(void)

{
  if (_DAT_8001c0cc/*SDRAM*/ == 0) {
    _DAT_8001c0cc/*SDRAM*/ = 1;
    cls_10595f08_new((cls_10595f08 *)0x8001c0a8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f72c/*SDRAM*/);
  }
  return 0x8001c0a8/*SDRAM*/;
}
