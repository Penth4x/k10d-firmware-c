/* @k10d get_or_init_singleton_104aa272 @ 0x104aa272
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 208_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_104aa272(void)

{
  if (_DAT_800490a0/*SDRAM*/ == 0) {
    _DAT_800490a0/*SDRAM*/ = 1;
    cls_105b6e2c_new((cls_105b6e2c *)0x80049094/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010600/*SDRAM*/);
  }
  return 0x80049094/*SDRAM*/;
}
