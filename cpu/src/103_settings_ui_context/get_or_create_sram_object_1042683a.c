/* @k10d get_or_create_sram_object_1042683a @ 0x1042683a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_sram_object_1042683a(void)

{
  if (iRam8001d220 == 0) {
    iRam8001d220 = 1;
    cls_1059e078_new((uint32_t *)0x8001d1fc/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fc18/*SDRAM*/);
  }
  return 0x8001d1fc/*SDRAM*/;
}
