/* @k10d get_or_init_sram_object_10443fc0 @ 0x10443fc0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_object_10443fc0(void)

{
  if (_DAT_8001ef7c/*SDRAM*/ == 0) {
    _DAT_8001ef7c/*SDRAM*/ = 1;
    cls_105a0f58_new((cls_105a0f58 *)0x8001ef74/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fd80/*SDRAM*/);
  }
  return 0x8001ef74/*SDRAM*/;
}
