/* @k10d get_or_init_singleton_10489b4e @ 0x10489b4e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_10489b4e(void)

{
  if (_DAT_80048cb8/*SDRAM*/ == 0) {
    _DAT_80048cb8/*SDRAM*/ = 1;
    cls_105b3928_new((uint32_t *)0x80048c48/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800103ec/*SDRAM*/);
  }
  return 0x80048c48/*SDRAM*/;
}
