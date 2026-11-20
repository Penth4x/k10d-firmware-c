/* @k10d get_or_create_singleton_object_1046c502 @ 0x1046c502
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 152_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_1046c502(void)

{
  if (_DAT_80048760/*SDRAM*/ == 0) {
    _DAT_80048760/*SDRAM*/ = 1;
    cls_105a8e3c_new((cls_105a8e3c *)0x80048758/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000feb4/*SDRAM*/);
  }
  return 0x80048758/*SDRAM*/;
}
