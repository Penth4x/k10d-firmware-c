/* @k10d get_or_create_ram_object @ 0x10475980
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_ram_object(void)

{
  if (iRam80048798 == 0) {
    iRam80048798 = 1;
    cls_105aa448_new((void *)0x80048790/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000ff08/*SDRAM*/);
  }
  return 0x80048790/*SDRAM*/;
}
