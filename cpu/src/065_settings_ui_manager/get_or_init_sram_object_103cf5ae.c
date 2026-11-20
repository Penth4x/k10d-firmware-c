/* @k10d get_or_init_sram_object_103cf5ae @ 0x103cf5ae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103cf5ae(void)

{
  if (iRam8001c07c == 0) {
    iRam8001c07c = 1;
    cls_10595de0_new((cls_10595de0 *)0x8001c058/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f704/*SDRAM*/);
  }
  return 0x8001c058/*SDRAM*/;
}
