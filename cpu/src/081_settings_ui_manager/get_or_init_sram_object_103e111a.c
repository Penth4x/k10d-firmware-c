/* @k10d get_or_init_sram_object_103e111a @ 0x103e111a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103e111a(void)

{
  if (iRam8001c480 == 0) {
    iRam8001c480 = 1;
    cls_10596d20_new((uint32_t *)0x8001c45c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f8f8/*SDRAM*/);
  }
  return 0x8001c45c/*SDRAM*/;
}
