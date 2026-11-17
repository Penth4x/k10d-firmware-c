/* @k10d get_or_create_singleton_object_103e9180 @ 0x103e9180
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_103e9180(void)

{
  if (iRam8001c6c8 == 0) {
    iRam8001c6c8 = 1;
    cls_10597714_new((uint32_t *)0x8001c6a4/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f9fc/*SDRAM*/);
  }
  return 0x8001c6a4/*SDRAM*/;
}
