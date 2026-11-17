/* @k10d get_or_init_sram_object_103c21d0 @ 0x103c21d0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103c21d0(void)

{
  if (iRam8001be1c == 0) {
    iRam8001be1c = 1;
    cls_1059514c_new((uint32_t *)0x8001bdf8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f5d8/*SDRAM*/);
  }
  return 0x8001bdf8/*SDRAM*/;
}
