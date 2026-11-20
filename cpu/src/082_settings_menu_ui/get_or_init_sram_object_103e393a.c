/* @k10d get_or_init_sram_object_103e393a @ 0x103e393a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103e393a(void)

{
  if (iRam8001c4fc == 0) {
    iRam8001c4fc = 1;
    cls_10596eec_new((cls_10596eec *)0x8001c4d8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f934/*SDRAM*/);
  }
  return 0x8001c4d8/*SDRAM*/;
}
