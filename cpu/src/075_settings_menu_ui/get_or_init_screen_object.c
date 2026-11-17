/* @k10d get_or_init_screen_object @ 0x103d463c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 075_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_screen_object(void)

{
  if (_DAT_8001c220/*SDRAM*/ == 0) {
    _DAT_8001c220/*SDRAM*/ = 1;
    cls_1059639c_new((uint32_t *)0x8001c1e8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f7cc/*SDRAM*/);
  }
  return 0x8001c1e8/*SDRAM*/;
}
