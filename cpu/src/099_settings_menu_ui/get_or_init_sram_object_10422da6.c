/* @k10d get_or_init_sram_object_10422da6 @ 0x10422da6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_10422da6(void)

{
  if (iRam8001d104 == 0) {
    iRam8001d104 = 1;
    cls_1059dc64_new((cls_1059dc64 *)0x8001d0ec/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fbb4/*SDRAM*/);
  }
  return 0x8001d0ec/*SDRAM*/;
}
