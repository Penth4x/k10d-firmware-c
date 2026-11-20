/* @k10d get_or_init_sram_object_103e3f56 @ 0x103e3f56
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103e3f56(void)

{
  if (iRam8001c550 == 0) {
    iRam8001c550 = 1;
    cls_10596f7c_new((cls_10596f7c *)0x8001c500/*SDRAM*/);
    prepend_to_singly_linked_list((uint32_t *)(0x8000f948/*SDRAM*/));
  }
  return 0x8001c500/*SDRAM*/;
}
