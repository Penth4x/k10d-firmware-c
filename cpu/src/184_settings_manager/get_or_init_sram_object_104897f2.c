/* @k10d get_or_init_sram_object_104897f2 @ 0x104897f2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_104897f2(void)

{
  if (iRam80048c38 == 0) {
    iRam80048c38 = 1;
    cls_105b38b0_new((cls_105b38b0 *)0x80048c20/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800103a8/*SDRAM*/);
  }
  return 0x80048c20/*SDRAM*/;
}
