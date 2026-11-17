/* @k10d get_or_init_sram_object_103cd7a4 @ 0x103cd7a4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103cd7a4(void)

{
  if (iRam8001bfdc == 0) {
    iRam8001bfdc = 1;
    cls_10595b8c_new((uint32_t *)0x8001bfb8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f6b4/*SDRAM*/);
  }
  return 0x8001bfb8/*SDRAM*/;
}
