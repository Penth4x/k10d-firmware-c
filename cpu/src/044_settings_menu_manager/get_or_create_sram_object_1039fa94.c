/* @k10d get_or_create_sram_object_1039fa94 @ 0x1039fa94
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_sram_object_1039fa94(void)

{
  if (iRam8001a788 == 0) {
    iRam8001a788 = 1;
    cls_105642d8_new((void *)0x8001a780/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800046ac/*SDRAM*/);
  }
  return 0x8001a780/*SDRAM*/;
}
