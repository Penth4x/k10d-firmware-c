/* @k10d get_or_create_singleton_object_1036c796 @ 0x1036c796
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 020_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_1036c796(void)

{
  if (_DAT_800180d4/*SDRAM*/ == 0) {
    _DAT_800180d4/*SDRAM*/ = 1;
    cls_10557d70_new((cls_10557d70 *)0x80018090/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004430/*SDRAM*/);
  }
  return 0x80018090/*SDRAM*/;
}
