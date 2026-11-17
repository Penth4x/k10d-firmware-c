/* @k10d get_or_init_singleton_object_104dd452 @ 0x104dd452
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_singleton_object_104dd452(void)

{
  if (iRam80059e8c == 0) {
    iRam80059e8c = 1;
    cls_105bb0b8_new((void*)0x80059e20/*SDRAM*/);
    uRam80059e3c = 0x105ba338/*ROM*/;
    prepend_to_singly_linked_list((void*)0x800108b4/*SDRAM*/);
  }
  return 0x80059e20/*SDRAM*/;
}
