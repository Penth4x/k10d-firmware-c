/* @k10d get_or_init_singleton_object_103676f8 @ 0x103676f8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_103676f8(void)

{
  if (_DAT_800153e8/*SDRAM*/ == 0) {
    _DAT_800153e8/*SDRAM*/ = 1;
    cls_105579a8_new((cls_105579a8 *)0x8001533c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000432c/*SDRAM*/);
  }
  return 0x8001533c/*SDRAM*/;
}
