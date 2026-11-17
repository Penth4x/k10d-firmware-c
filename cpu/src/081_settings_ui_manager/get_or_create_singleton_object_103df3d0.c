/* @k10d get_or_create_singleton_object_103df3d0 @ 0x103df3d0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_103df3d0(void)

{
  if (iRam8001c3e0 == 0) {
    iRam8001c3e0 = 1;
    cls_10596ac4_new((uint32_t *)0x8001c3bc/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f8a8/*SDRAM*/);
  }
  return 0x8001c3bc/*SDRAM*/;
}
