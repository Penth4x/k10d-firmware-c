/* @k10d get_or_create_singleton_object_1036db70 @ 0x1036db70
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 023_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_1036db70(void)

{
  if (_DAT_800185e8/*SDRAM*/ == 0) {
    _DAT_800185e8/*SDRAM*/ = 1;
    cls_10557ecc_new((cls_10557ecc *)0x80018330/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004458/*SDRAM*/);
  }
  return 0x80018330/*SDRAM*/;
}
