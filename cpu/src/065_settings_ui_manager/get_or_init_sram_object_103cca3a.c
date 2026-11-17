/* @k10d get_or_init_sram_object_103cca3a @ 0x103cca3a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103cca3a(void)

{
  if (iRam8001bf8c == 0) {
    iRam8001bf8c = 1;
    cls_10595a64_new((uint32_t *)0x8001bf68/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f68c/*SDRAM*/);
  }
  return 0x8001bf68/*SDRAM*/;
}
