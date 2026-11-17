/* @k10d get_or_create_singleton_object_10485138 @ 0x10485138
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_10485138(void)

{
  if (_DAT_80048930/*SDRAM*/ == 0) {
    _DAT_80048930/*SDRAM*/ = 1;
    cls_105ab92c_new((void *)0x80048908/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010290/*SDRAM*/);
  }
  return 0x80048908/*SDRAM*/;
}
