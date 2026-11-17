/* @k10d get_or_init_sram_object_103d1cda @ 0x103d1cda
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 071_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103d1cda(void)

{
  if (iRam8001c11c == 0) {
    iRam8001c11c = 1;
    cls_10596030_new((uint32_t *)0x8001c0f8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f754/*SDRAM*/);
  }
  return 0x8001c0f8/*SDRAM*/;
}
