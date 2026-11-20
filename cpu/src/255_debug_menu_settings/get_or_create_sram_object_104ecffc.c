/* @k10d get_or_create_sram_object_104ecffc @ 0x104ecffc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_sram_object_104ecffc(void)

{
  if (iRam8005a008 == 0) {
    iRam8005a008 = 1;
    cls_105c2b94_new((cls_105c2b94 *)0x80059ffc/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010c9c/*SDRAM*/);
  }
  return 0x80059ffc/*SDRAM*/;
}
