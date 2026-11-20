/* @k10d get_or_init_global_object_10368304 @ 0x10368304
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 010_capture_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_global_object_10368304(void)

{
  if (_DAT_8001552c/*SDRAM*/ == 0) {
    _DAT_8001552c/*SDRAM*/ = 1;
    cls_10557a18_new((cls_10557a18 *)0x800153ec/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004340/*SDRAM*/);
  }
  return 0x800153ec/*SDRAM*/;
}
