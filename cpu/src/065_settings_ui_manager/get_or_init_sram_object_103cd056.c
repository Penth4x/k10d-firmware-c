/* @k10d get_or_init_sram_object_103cd056 @ 0x103cd056
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103cd056(uint32_t param_x0)

{
  if (iRam8001bfb4 == 0) {
    iRam8001bfb4 = 1;
    cls_10595af8_new((uint32_t *)0x8001bf90/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f6a0/*SDRAM*/);
  }
  return 0x8001bf90/*SDRAM*/;
}
