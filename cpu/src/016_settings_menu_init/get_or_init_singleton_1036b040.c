/* @k10d get_or_init_singleton_1036b040 @ 0x1036b040
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 016_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_1036b040(void)

{
  if (_DAT_800158d0/*SDRAM*/ == 0) {
    _DAT_800158d0/*SDRAM*/ = 1;
    cls_10557c18_new((void *)0x80015894/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000438c/*SDRAM*/);
  }
  return 0x80015894/*SDRAM*/;
}
