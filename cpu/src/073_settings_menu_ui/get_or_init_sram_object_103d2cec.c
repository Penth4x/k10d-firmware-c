/* @k10d get_or_init_sram_object_103d2cec @ 0x103d2cec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 073_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103d2cec(void)

{
  if (iRam8001c16c == 0) {
    iRam8001c16c = 1;
    cls_10596154_new((cls_10596154 *)0x8001c148/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f77c/*SDRAM*/);
  }
  return 0x8001c148/*SDRAM*/;
}
