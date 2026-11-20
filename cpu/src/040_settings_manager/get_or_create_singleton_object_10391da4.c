/* @k10d get_or_create_singleton_object_10391da4 @ 0x10391da4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_10391da4(void)

{
  if (_DAT_800198b4/*SDRAM*/ == 0) {
    _DAT_800198b4/*SDRAM*/ = 1;
    cls_105626dc_new((cls_105626dc *)0x80019884/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004504/*SDRAM*/);
  }
  return 0x80019884/*SDRAM*/;
}
