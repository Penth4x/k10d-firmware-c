/* @k10d get_or_init_sram_object_103e72c2 @ 0x103e72c2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103e72c2(uint32_t param_x0)

{
  if (iRam8001c618 == 0) {
    iRam8001c618 = 1;
    cls_105972a8_new((uint32_t *)0x8001c5f4/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f9ac/*SDRAM*/);
  }
  return 0x8001c5f4/*SDRAM*/;
}
