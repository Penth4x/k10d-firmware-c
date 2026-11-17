/* @k10d get_or_create_singleton_object_103ebe9e @ 0x103ebe9e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 085_sr_settings_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_103ebe9e(void)

{
  if (_DAT_8001c790/*SDRAM*/ == 0) {
    _DAT_8001c790/*SDRAM*/ = 1;
    cls_10597b5c_new((uint32_t *)0x8001c76c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fa60/*SDRAM*/);
  }
  return 0x8001c76c/*SDRAM*/;
}
