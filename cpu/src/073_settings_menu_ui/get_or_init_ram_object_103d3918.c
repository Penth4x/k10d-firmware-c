/* @k10d get_or_init_ram_object_103d3918 @ 0x103d3918
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 073_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_ram_object_103d3918(void)

{
  if (iRam8001c1bc == 0) {
    iRam8001c1bc = 1;
    cls_10596278_new((uint32_t *)0x8001c198/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f7a4/*SDRAM*/);
  }
  return 0x8001c198/*SDRAM*/;
}
