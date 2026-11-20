/* @k10d get_or_init_ram_object_103df9ec @ 0x103df9ec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_ram_object_103df9ec(void)

{
  if (iRam8001c408 == 0) {
    iRam8001c408 = 1;
    cls_10596b58_new((cls_10596b58 *)0x8001c3e4/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f8bc/*SDRAM*/);
  }
  return 0x8001c3e4/*SDRAM*/;
}
