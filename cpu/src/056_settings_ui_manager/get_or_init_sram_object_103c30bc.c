/* @k10d get_or_init_sram_object_103c30bc @ 0x103c30bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103c30bc(void)

{
  if (iRam8001be44 == 0) {
    iRam8001be44 = 1;
    cls_105951ec_new((cls_105951ec *)0x8001be20/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f5ec/*SDRAM*/);
  }
  return 0x8001be20/*SDRAM*/;
}
