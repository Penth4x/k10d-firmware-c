/* @k10d get_or_create_sram_object_103e331e @ 0x103e331e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_sram_object_103e331e(void)

{
  if (iRam8001c4d4 == 0) {
    iRam8001c4d4 = 1;
    cls_10596e58_new((uint32_t *)0x8001c4b0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f920/*SDRAM*/);
  }
  return 0x8001c4b0/*SDRAM*/;
}
