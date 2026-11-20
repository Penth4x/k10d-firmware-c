/* @k10d get_or_init_sram_object_103cddc0 @ 0x103cddc0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103cddc0(void)

{
  if (iRam8001c004 == 0) {
    iRam8001c004 = 1;
    cls_10595c20_new((cls_10595c20 *)0x8001bfe0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f6c8/*SDRAM*/);
  }
  return 0x8001bfe0/*SDRAM*/;
}
