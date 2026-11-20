/* @k10d get_or_init_sram_object_10408f34 @ 0x10408f34
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_10408f34(void)

{
  if (iRam8001cea4 == 0) {
    iRam8001cea4 = 1;
    cls_105999ec_new((cls_105999ec *)0x8001ce80/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fb0c/*SDRAM*/);
  }
  return 0x8001ce80/*SDRAM*/;
}
