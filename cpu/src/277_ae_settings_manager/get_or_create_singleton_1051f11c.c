/* @k10d get_or_create_singleton_1051f11c @ 0x1051f11c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_1051f11c(void)

{
  if (_DAT_8005a22c/*SDRAM*/ == 0) {
    _DAT_8005a22c/*SDRAM*/ = 1;
    cls_105d6e14_new((cls_105d6e14 *)0x8005a1d8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800133d0/*SDRAM*/);
  }
  return 0x8005a1d8/*SDRAM*/;
}
