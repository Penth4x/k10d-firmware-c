/* @k10d get_or_create_sram_object_1040a240 @ 0x1040a240
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_sram_object_1040a240(void)

{
  if (iRam8001cf4c == 0) {
    iRam8001cf4c = 1;
    cls_10599b14_new((cls_10599b14 *)0x8001ced8/*SDRAM*/);
    prepend_to_singly_linked_list((uint32_t *)(0x8000fb48/*SDRAM*/));
  }
  return 0x8001ced8/*SDRAM*/;
}
