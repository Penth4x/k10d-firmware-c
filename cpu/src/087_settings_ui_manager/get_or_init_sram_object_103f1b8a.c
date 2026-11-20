/* @k10d get_or_init_sram_object_103f1b8a @ 0x103f1b8a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 087_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103f1b8a(void)

{
  if (iRam8001c7b8 == 0) {
    iRam8001c7b8 = 1;
    cls_10597bf0_new((cls_10597bf0 *)0x8001c794/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fa74/*SDRAM*/);
  }
  return 0x8001c794/*SDRAM*/;
}
