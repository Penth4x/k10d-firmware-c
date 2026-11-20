/* @k10d get_or_init_singleton_object_10368f62 @ 0x10368f62
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 013_ae_bracketing_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_10368f62(void)

{
  if (_DAT_800157f4/*SDRAM*/ == 0) {
    _DAT_800157f4/*SDRAM*/ = 1;
    cls_10557b38_new((cls_10557b38 *)0x80015530/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004364/*SDRAM*/);
  }
  return 0x80015530/*SDRAM*/;
}
