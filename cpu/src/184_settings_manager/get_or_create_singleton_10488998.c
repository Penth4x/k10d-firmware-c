/* @k10d get_or_create_singleton_10488998 @ 0x10488998
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_10488998(void)

{
  if (_DAT_80048bbc/*SDRAM*/ == 0) {
    _DAT_80048bbc/*SDRAM*/ = 1;
    cls_105b34ec_new((uint32_t *)0x80048b6c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010360/*SDRAM*/);
  }
  return 0x80048b6c/*SDRAM*/;
}
