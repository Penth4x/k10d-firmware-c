/* @k10d get_or_create_singleton_object_103da4b4 @ 0x103da4b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 079_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_103da4b4(void)

{
  if (iRam8001c2ec == 0) {
    iRam8001c2ec = 1;
    cls_10596690_new((cls_10596690 *)0x8001c2c8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f830/*SDRAM*/);
  }
  return 0x8001c2c8/*SDRAM*/;
}
