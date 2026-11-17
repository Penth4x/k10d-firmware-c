/* @k10d get_or_create_singleton_object_10521e8e @ 0x10521e8e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_10521e8e(void)

{
  if (iRam8005a3d8 == 0) {
    iRam8005a3d8 = 1;
    cls_105d8830_new((void*)0x8005a3c4/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x800134b8/*SDRAM*/);
  }
  return 0x8005a3c4/*SDRAM*/;
}
