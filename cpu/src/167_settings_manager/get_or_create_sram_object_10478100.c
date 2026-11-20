/* @k10d get_or_create_sram_object_10478100 @ 0x10478100
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_sram_object_10478100(void)

{
  if (iRam800487d0 == 0) {
    iRam800487d0 = 1;
    cls_105aa5b4_new((cls_105aa5b4 *)0x800487a8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000ff4c/*SDRAM*/);
  }
  return 0x800487a8/*SDRAM*/;
}
