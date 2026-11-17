/* @k10d get_or_init_sram_object_103e205e @ 0x103e205e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103e205e(void)

{
  if (iRam8001c4ac == 0) {
    iRam8001c4ac = 1;
    cls_10596dc4_new((uint32_t *)0x8001c484/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f90c/*SDRAM*/);
  }
  return 0x8001c484/*SDRAM*/;
}
