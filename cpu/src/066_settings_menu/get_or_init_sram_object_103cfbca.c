/* @k10d get_or_init_sram_object_103cfbca @ 0x103cfbca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 066_settings_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_object_103cfbca(void)

{
  if (_DAT_8001c0a4/*SDRAM*/ == 0) {
    _DAT_8001c0a4/*SDRAM*/ = 1;
    cls_10595e74_new((cls_10595e74 *)0x8001c080/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f718/*SDRAM*/);
  }
  return 0x8001c080/*SDRAM*/;
}
