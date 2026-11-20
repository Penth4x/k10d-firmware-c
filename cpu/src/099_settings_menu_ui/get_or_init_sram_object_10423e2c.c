/* @k10d get_or_init_sram_object_10423e2c @ 0x10423e2c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_10423e2c(uint32_t param_x0)

{
  if (iRam8001d1a8 == 0) {
    iRam8001d1a8 = 1;
    cls_1059ddb0_new((cls_1059ddb0 *)0x8001d170/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fbdc/*SDRAM*/);
  }
  return 0x8001d170/*SDRAM*/;
}
