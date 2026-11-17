/* @k10d get_or_init_sram_object_103dac02 @ 0x103dac02
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 079_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103dac02(void)

{
  if (iRam8001c314 == 0) {
    iRam8001c314 = 1;
    cls_10596724_new((uint32_t *)0x8001c2f0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f844/*SDRAM*/);
  }
  return 0x8001c2f0/*SDRAM*/;
}
