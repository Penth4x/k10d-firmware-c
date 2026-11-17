/* @k10d get_or_init_sram_object_103f6d14 @ 0x103f6d14
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103f6d14(void)

{
  if (iRam8001c82c == 0) {
    iRam8001c82c = 1;
    cls_10597d1c_new((uint32_t *)0x8001c7f4/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fa9c/*SDRAM*/);
  }
  return 0x8001c7f4/*SDRAM*/;
}
