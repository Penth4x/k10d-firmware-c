/* @k10d get_or_create_sram_object_10424eda @ 0x10424eda
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 100_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_sram_object_10424eda(void)

{
  if (iRam8001d1f8 == 0) {
    iRam8001d1f8 = 1;
    cls_1059dec8_new((cls_1059dec8 *)0x8001d1d4/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fc04/*SDRAM*/);
  }
  return 0x8001d1d4/*SDRAM*/;
}
