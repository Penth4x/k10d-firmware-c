/* @k10d get_or_init_singleton_104ace60 @ 0x104ace60
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_104ace60(void)

{
  if (_DAT_800491bc/*SDRAM*/ == 0) {
    _DAT_800491bc/*SDRAM*/ = 1;
    cls_105b7418_new((void *)0x800491b4/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010650/*SDRAM*/);
  }
  return 0x800491b4/*SDRAM*/;
}
