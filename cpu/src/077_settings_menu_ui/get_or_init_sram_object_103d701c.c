/* @k10d get_or_init_sram_object_103d701c @ 0x103d701c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103d701c(void)

{
  if (iRam8001c248 == 0) {
    iRam8001c248 = 1;
    cls_10596430_new((uint32_t *)0x8001c224/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f7e0/*SDRAM*/);
  }
  return 0x8001c224/*SDRAM*/;
}
