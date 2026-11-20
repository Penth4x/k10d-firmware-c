/* @k10d get_or_create_sram_object_104dc2a4 @ 0x104dc2a4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_sram_object_104dc2a4(void)

{
  if (iRam80059e84 == 0) {
    iRam80059e84 = 1;
    cls_105bb0b8_new((cls_105bb0b8 *)0x80059de0/*SDRAM*/);
    uRam80059dfc = 0x105ba2f8/*ROM*/;
    prepend_to_singly_linked_list((void *)0x80010894/*SDRAM*/);
  }
  return 0x80059de0/*SDRAM*/;
}
