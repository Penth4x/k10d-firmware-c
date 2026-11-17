/* @k10d get_or_init_sram_object_103e49e6 @ 0x103e49e6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103e49e6(void)

{
  if (iRam8001c578 == 0) {
    iRam8001c578 = 1;
    cls_10597054_new((uint32_t *)0x8001c554/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f95c/*SDRAM*/);
  }
  return 0x8001c554/*SDRAM*/;
}
