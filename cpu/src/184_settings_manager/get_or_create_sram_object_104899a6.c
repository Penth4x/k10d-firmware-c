/* @k10d get_or_create_sram_object_104899a6 @ 0x104899a6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_sram_object_104899a6(void)

{
  if (iRam80048c40 == 0) {
    iRam80048c40 = 1;
    cls_105b3890_new((void *)0x80048c28/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800103c8/*SDRAM*/);
  }
  return 0x80048c28/*SDRAM*/;
}
