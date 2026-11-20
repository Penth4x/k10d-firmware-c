/* @k10d get_or_create_sram_object_103e55e4 @ 0x103e55e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_sram_object_103e55e4(void)

{
  if (iRam8001c5a0 == 0) {
    iRam8001c5a0 = 1;
    cls_105970e8_new((cls_105970e8 *)0x8001c57c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f970/*SDRAM*/);
  }
  return 0x8001c57c/*SDRAM*/;
}
