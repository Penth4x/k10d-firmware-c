/* @k10d init_singleton_object_104d8bac @ 0x104d8bac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_singleton_object_104d8bac(void)

{
  if (iRam80059e60 == 0) {
    iRam80059e60 = 1;
    cls_105bb0b8_new((void *)0x80059cc0/*SDRAM*/);
    uRam80059cdc = 0x105ba1d8/*ROM*/;
    prepend_to_singly_linked_list((void *)0x80010804/*SDRAM*/);
  }
  return 0x80059cc0/*SDRAM*/;
}
