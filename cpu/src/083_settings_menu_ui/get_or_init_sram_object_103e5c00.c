/* @k10d get_or_init_sram_object_103e5c00 @ 0x103e5c00
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103e5c00(void)

{
  if (iRam8001c5c8 == 0) {
    iRam8001c5c8 = 1;
    cls_1059717c_new((cls_1059717c *)0x8001c5a4/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f984/*SDRAM*/);
  }
  return 0x8001c5a4/*SDRAM*/;
}
