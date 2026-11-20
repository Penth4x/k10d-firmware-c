/* @k10d get_or_init_singleton_object_1039416c @ 0x1039416c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_1039416c(void)

{
  if (_DAT_80019c54/*SDRAM*/ == 0) {
    _DAT_80019c54/*SDRAM*/ = 1;
    cls_10562b1c_new((cls_10562b1c *)0x80019c04/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800045a4/*SDRAM*/);
  }
  return 0x80019c04/*SDRAM*/;
}
