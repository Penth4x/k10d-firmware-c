/* @k10d get_or_init_sram_object_103e78de @ 0x103e78de
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103e78de(void)

{
  if (iRam8001c640 == 0) {
    iRam8001c640 = 1;
    cls_1059733c_new((cls_1059733c *)0x8001c61c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f9c0/*SDRAM*/);
  }
  return 0x8001c61c/*SDRAM*/;
}
