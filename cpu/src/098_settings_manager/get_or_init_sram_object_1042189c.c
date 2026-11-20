/* @k10d get_or_init_sram_object_1042189c @ 0x1042189c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 098_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_object_1042189c(void)

{
  if (_DAT_8001d0e8/*SDRAM*/ == 0) {
    _DAT_8001d0e8/*SDRAM*/ = 1;
    cls_1059d568_new((cls_1059d568 *)0x8001d098/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fba0/*SDRAM*/);
  }
  return 0x8001d098/*SDRAM*/;
}
