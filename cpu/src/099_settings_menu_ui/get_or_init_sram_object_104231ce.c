/* @k10d get_or_init_sram_object_104231ce @ 0x104231ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_104231ce(void)

{
  if (iRam8001d168 == 0) {
    iRam8001d168 = 1;
    cls_1059dd24_new((uint32_t *)0x8001d108/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fbc8/*SDRAM*/);
  }
  return 0x8001d108/*SDRAM*/;
}
