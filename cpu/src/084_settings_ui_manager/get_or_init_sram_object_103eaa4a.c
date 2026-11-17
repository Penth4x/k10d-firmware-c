/* @k10d get_or_init_sram_object_103eaa4a @ 0x103eaa4a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103eaa4a(void)

{
  if (iRam8001c740 == 0) {
    iRam8001c740 = 1;
    cls_105978d4_new((uint32_t *)0x8001c71c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fa38/*SDRAM*/);
  }
  return 0x8001c71c/*SDRAM*/;
}
