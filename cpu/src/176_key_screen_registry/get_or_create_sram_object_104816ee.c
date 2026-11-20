/* @k10d get_or_create_sram_object_104816ee @ 0x104816ee
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_sram_object_104816ee(void)

{
  if (iRam80048854 == 0) {
    iRam80048854 = 1;
    cls_105ab50c_new((cls_105ab50c *)0x8004883c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010040/*SDRAM*/);
  }
  return 0x8004883c/*SDRAM*/;
}
