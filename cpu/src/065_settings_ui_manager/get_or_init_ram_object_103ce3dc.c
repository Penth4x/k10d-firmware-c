/* @k10d get_or_init_ram_object_103ce3dc @ 0x103ce3dc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_ram_object_103ce3dc(uint32_t param_x0)

{
  if (iRam8001c02c == 0) {
    iRam8001c02c = 1;
    cls_10595cb4_new((cls_10595cb4 *)0x8001c008/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f6dc/*SDRAM*/);
  }
  return 0x8001c008/*SDRAM*/;
}
