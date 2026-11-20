/* @k10d get_or_init_sram_object_104a7cf2 @ 0x104a7cf2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_104a7cf2(void)

{
  if (iRam80049074 == 0) {
    iRam80049074 = 1;
    cls_105b69b0_new((cls_105b69b0 *)0x8004906c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800105d8/*SDRAM*/);
  }
  return 0x8004906c/*SDRAM*/;
}
