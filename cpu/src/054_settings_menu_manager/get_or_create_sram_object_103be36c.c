/* @k10d get_or_create_sram_object_103be36c @ 0x103be36c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_sram_object_103be36c(void)

{
  if (iRam8001bdcc == 0) {
    iRam8001bdcc = 1;
    cls_10594f8c_new((uint32_t *)0x8001bd94/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f5b0/*SDRAM*/);
  }
  return 0x8001bd94/*SDRAM*/;
}
