/* @k10d get_or_init_sram_object_104dcc9a @ 0x104dcc9a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_104dcc9a(void)

{
  if (iRam80059e88 == 0) {
    iRam80059e88 = 1;
    cls_105bb0b8_new((void *)0x80059e00/*SDRAM*/);
    uRam80059e1c = 0x105ba318/*ROM*/;
    prepend_to_singly_linked_list((void *)0x800108a4/*SDRAM*/);
  }
  return 0x80059e00/*SDRAM*/;
}
