/* @k10d get_or_init_sram_object_103ce9f8 @ 0x103ce9f8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103ce9f8(void)

{
  if (iRam8001c054 == 0) {
    iRam8001c054 = 1;
    cls_10595d4c_new((cls_10595d4c *)0x8001c030/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f6f0/*SDRAM*/);
  }
  return 0x8001c030/*SDRAM*/;
}
