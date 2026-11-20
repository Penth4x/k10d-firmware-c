/* @k10d get_or_create_singleton_103631bc @ 0x103631bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 002_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_103631bc(void)

{
  if (_DAT_80014db4/*SDRAM*/ == 0) {
    _DAT_80014db4/*SDRAM*/ = 1;
    cls_105575b0_new((cls_105575b0 *)0x80014b1c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800042f0/*SDRAM*/);
  }
  return 0x80014b1c/*SDRAM*/;
}
