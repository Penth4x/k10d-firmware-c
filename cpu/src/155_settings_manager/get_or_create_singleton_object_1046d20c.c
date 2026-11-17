/* @k10d get_or_create_singleton_object_1046d20c @ 0x1046d20c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 155_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_1046d20c(void)

{
  if (_DAT_80048774/*SDRAM*/ == 0) {
    _DAT_80048774/*SDRAM*/ = 1;
    cls_105a9000_new((void *)0x8004876c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fec8/*SDRAM*/);
  }
  return 0x8004876c/*SDRAM*/;
}
