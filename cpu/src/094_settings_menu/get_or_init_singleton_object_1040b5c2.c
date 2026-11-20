/* @k10d get_or_init_singleton_object_1040b5c2 @ 0x1040b5c2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 094_settings_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_1040b5c2(void)

{
  if (_DAT_8001cf90/*SDRAM*/ == 0) {
    _DAT_8001cf90/*SDRAM*/ = 1;
    cls_10599c24_new((cls_10599c24 *)0x8001cf78/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fb70/*SDRAM*/);
  }
  return 0x8001cf78/*SDRAM*/;
}
