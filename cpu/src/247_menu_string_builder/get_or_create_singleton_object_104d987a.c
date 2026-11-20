/* @k10d get_or_create_singleton_object_104d987a @ 0x104d987a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_104d987a(void)

{
  if (iRam80059e70 == 0) {
    iRam80059e70 = 1;
    cls_105bb0b8_new((cls_105bb0b8 *)0x80059d40/*SDRAM*/);
    uRam80059d5c = 0x105ba258/*ROM*/;
    prepend_to_singly_linked_list((void *)0x80010844/*SDRAM*/);
  }
  return 0x80059d40/*SDRAM*/;
}
