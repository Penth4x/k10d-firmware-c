/* @k10d get_or_create_singleton_object_104db97e @ 0x104db97e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_104db97e(void)

{
  if (iRam80059e7c == 0) {
    iRam80059e7c = 1;
    cls_105bb0b8_new((cls_105bb0b8 *)0x80059da0/*SDRAM*/);
    uRam80059dbc = 0x105ba2b8/*ROM*/;
    prepend_to_singly_linked_list((void *)0x80010874/*SDRAM*/);
  }
  return 0x80059da0/*SDRAM*/;
}
