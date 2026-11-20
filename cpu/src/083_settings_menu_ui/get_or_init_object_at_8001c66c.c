/* @k10d get_or_init_object_at_8001c66c @ 0x103e8516
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_object_at_8001c66c(void)

{
  if (_DAT_8001c6a0/*SDRAM*/ == 0) {
    _DAT_8001c6a0/*SDRAM*/ = 1;
    cls_10597680_new((cls_10597680 *)0x8001c66c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f9e8/*SDRAM*/);
  }
  return 0x8001c66c/*SDRAM*/;
}
