/* @k10d get_or_init_sram_object_103eb2e8 @ 0x103eb2e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103eb2e8(void)

{
  if (iRam8001c768 == 0) {
    iRam8001c768 = 1;
    cls_1059796c_new((cls_1059796c *)0x8001c744/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fa4c/*SDRAM*/);
  }
  return 0x8001c744/*SDRAM*/;
}
