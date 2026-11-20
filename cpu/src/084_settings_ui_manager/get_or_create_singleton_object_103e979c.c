/* @k10d get_or_create_singleton_object_103e979c @ 0x103e979c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_103e979c(void)

{
  if (iRam8001c6f0 == 0) {
    iRam8001c6f0 = 1;
    cls_105977ac_new((cls_105977ac *)0x8001c6cc/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fa10/*SDRAM*/);
  }
  return 0x8001c6cc/*SDRAM*/;
}
