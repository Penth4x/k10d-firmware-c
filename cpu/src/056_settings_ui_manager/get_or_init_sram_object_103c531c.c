/* @k10d get_or_init_sram_object_103c531c @ 0x103c531c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103c531c(void)

{
  if (iRam8001be94 == 0) {
    iRam8001be94 = 1;
    cls_10595334_new((cls_10595334 *)0x8001be70/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f614/*SDRAM*/);
  }
  return 0x8001be70/*SDRAM*/;
}
