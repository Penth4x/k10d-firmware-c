/* @k10d get_or_init_sram_object_104daf88 @ 0x104daf88
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_104daf88(void)

{
  if (iRam80059e78 == 0) {
    iRam80059e78 = 1;
    cls_105bb0b8_new((void*)0x80059d80/*SDRAM*/);
    uRam80059d9c = 0x105ba298/*ROM*/;
    prepend_to_singly_linked_list((void*)0x80010864/*SDRAM*/);
  }
  return 0x80059d80/*SDRAM*/;
}
