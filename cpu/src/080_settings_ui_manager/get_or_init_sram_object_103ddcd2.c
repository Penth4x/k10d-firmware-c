/* @k10d get_or_init_sram_object_103ddcd2 @ 0x103ddcd2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 080_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103ddcd2(void)

{
  if (iRam8001c390 == 0) {
    iRam8001c390 = 1;
    cls_10596968_new((uint32_t *)0x8001c36c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f880/*SDRAM*/);
  }
  return 0x8001c36c/*SDRAM*/;
}
