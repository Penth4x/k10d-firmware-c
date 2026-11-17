/* @k10d get_or_create_sram_object_104a79b2 @ 0x104a79b2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_sram_object_104a79b2(void)

{
  if (iRam80049068 == 0) {
    iRam80049068 = 1;
    cls_105b6980_new((void*)0x80049060/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x800105c4/*SDRAM*/);
  }
  return 0x80049060/*SDRAM*/;
}
