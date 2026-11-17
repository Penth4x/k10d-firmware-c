/* @k10d get_or_create_singleton_object_104d9012 @ 0x104d9012
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_104d9012(void)

{
  if (iRam80059e6c == 0) {
    iRam80059e6c = 1;
    cls_105bb0b8_new((void *)0x80059d20/*SDRAM*/);
    uRam80059d3c = 0x105ba238/*ROM*/;
    prepend_to_singly_linked_list((void *)0x80010834/*SDRAM*/);
  }
  return 0x80059d20/*SDRAM*/;
}
