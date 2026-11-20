/* @k10d get_or_init_singleton_object_103f21a6 @ 0x103f21a6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 088_capture_settings_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_103f21a6(void)

{
  if (_DAT_8001c7f0/*SDRAM*/ == 0) {
    _DAT_8001c7f0/*SDRAM*/ = 1;
    cls_10597c80_new((cls_10597c80 *)0x8001c7bc/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fa88/*SDRAM*/);
  }
  return 0x8001c7bc/*SDRAM*/;
}
