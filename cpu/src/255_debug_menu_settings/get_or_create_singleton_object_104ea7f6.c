/* @k10d get_or_create_singleton_object_104ea7f6 @ 0x104ea7f6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_104ea7f6(void)

{
  if (iRam80059ff8 == 0) {
    iRam80059ff8 = 1;
    cls_105c26f0_new((void *)0x80059f5c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010c7c/*SDRAM*/);
  }
  return 0x80059f5c/*SDRAM*/;
}
