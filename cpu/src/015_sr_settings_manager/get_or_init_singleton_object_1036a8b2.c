/* @k10d get_or_init_singleton_object_1036a8b2 @ 0x1036a8b2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 015_sr_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_1036a8b2(void)

{
  if (_DAT_80015890/*SDRAM*/ == 0) {
    _DAT_80015890/*SDRAM*/ = 1;
    cls_10557ba8_new((cls_10557ba8 *)0x800157f8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004378/*SDRAM*/);
  }
  return 0x800157f8/*SDRAM*/;
}
