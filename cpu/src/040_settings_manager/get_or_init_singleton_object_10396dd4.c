/* @k10d get_or_init_singleton_object_10396dd4 @ 0x10396dd4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_10396dd4(void)

{
  if (_DAT_8001a72c/*SDRAM*/ == 0) {
    _DAT_8001a72c/*SDRAM*/ = 1;
    cls_10562fec_new((void *)0x8001a6fc/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004674/*SDRAM*/);
  }
  return 0x8001a6fc/*SDRAM*/;
}
