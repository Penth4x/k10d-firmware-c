/* @k10d get_or_init_sram_object_103c40b8 @ 0x103c40b8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103c40b8(void)

{
  if (iRam8001be6c == 0) {
    iRam8001be6c = 1;
    cls_10595294_new((uint32_t *)0x8001be48/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f600/*SDRAM*/);
  }
  return 0x8001be48/*SDRAM*/;
}
