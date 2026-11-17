/* @k10d get_or_init_global_object_10395354 @ 0x10395354
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_global_object_10395354(void)

{
  if (_DAT_8001a52c/*SDRAM*/ == 0) {
    _DAT_8001a52c/*SDRAM*/ = 1;
    cls_10562cbc_new((void *)0x8001a4b0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004610/*SDRAM*/);
  }
  return 0x8001a4b0/*SDRAM*/;
}
