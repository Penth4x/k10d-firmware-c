/* @k10d get_or_init_singleton_object_10516bf2 @ 0x10516bf2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_10516bf2(void)

{
  if (_DAT_8005a128/*SDRAM*/ == 0) {
    _DAT_8005a128/*SDRAM*/ = 1;
    cls_105d6450_new((void *)0x8005a118/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80013344/*SDRAM*/);
  }
  return 0x8005a118/*SDRAM*/;
}
