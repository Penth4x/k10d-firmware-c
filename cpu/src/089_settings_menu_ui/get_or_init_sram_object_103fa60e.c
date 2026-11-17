/* @k10d get_or_init_sram_object_103fa60e @ 0x103fa60e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103fa60e(void)

{
  if (iRam8001c864 == 0) {
    iRam8001c864 = 1;
    cls_10597dcc_new((uint32_t *)0x8001c830/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fab0/*SDRAM*/);
  }
  return 0x8001c830/*SDRAM*/;
}
