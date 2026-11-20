/* @k10d get_or_create_singleton_object_104d8cbe @ 0x104d8cbe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_104d8cbe(void)

{
  if (iRam80059e64 == 0) {
    iRam80059e64 = 1;
    cls_105bb0b8_new((cls_105bb0b8 *)0x80059ce0/*SDRAM*/);
    uRam80059cfc = 0x105ba1f8/*ROM*/;
    prepend_to_singly_linked_list((void *)0x80010814/*SDRAM*/);
  }
  return 0x80059ce0/*SDRAM*/;
}
