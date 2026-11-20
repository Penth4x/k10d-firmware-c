/* @k10d get_or_init_sram_object_103e09d0 @ 0x103e09d0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103e09d0(void)

{
  if (iRam8001c458 == 0) {
    iRam8001c458 = 1;
    cls_10596c84_new((cls_10596c84 *)0x8001c434/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f8e4/*SDRAM*/);
  }
  return 0x8001c434/*SDRAM*/;
}
