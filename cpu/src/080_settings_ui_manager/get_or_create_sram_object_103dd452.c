/* @k10d get_or_create_sram_object_103dd452 @ 0x103dd452
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 080_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_sram_object_103dd452(void)

{
  if (iRam8001c368 == 0) {
    iRam8001c368 = 1;
    cls_105968d4_new((uint32_t *)0x8001c344/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f86c/*SDRAM*/);
  }
  return 0x8001c344/*SDRAM*/;
}
