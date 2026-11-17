/* @k10d get_or_create_singleton_object_104882d0 @ 0x104882d0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_104882d0(void)

{
  if (_DAT_80048b68/*SDRAM*/ == 0) {
    _DAT_80048b68/*SDRAM*/ = 1;
    cls_105b3370_new((uint32_t *)0x80048b14/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8001034c/*SDRAM*/);
  }
  return 0x80048b14/*SDRAM*/;
}
