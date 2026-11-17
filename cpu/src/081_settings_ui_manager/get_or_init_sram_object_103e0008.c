/* @k10d get_or_init_sram_object_103e0008 @ 0x103e0008
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103e0008(void)

{
  if (iRam8001c430 == 0) {
    iRam8001c430 = 1;
    cls_10596bf0_new((uint32_t *)0x8001c40c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f8d0/*SDRAM*/);
  }
  return 0x8001c40c/*SDRAM*/;
}
