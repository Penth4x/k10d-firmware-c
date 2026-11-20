/* @k10d get_or_init_sram_object_103c63a0 @ 0x103c63a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103c63a0(void)

{
  if (iRam8001bebc == 0) {
    iRam8001bebc = 1;
    cls_105953cc_new((cls_105953cc *)0x8001be98/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f628/*SDRAM*/);
  }
  return 0x8001be98/*SDRAM*/;
}
