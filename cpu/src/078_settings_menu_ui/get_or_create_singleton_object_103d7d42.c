/* @k10d get_or_create_singleton_object_103d7d42 @ 0x103d7d42
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_103d7d42(void)

{
  if (iRam8001c29c == 0) {
    iRam8001c29c = 1;
    cls_1059656c_new((cls_1059656c *)0x8001c274/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f808/*SDRAM*/);
  }
  return 0x8001c274/*SDRAM*/;
}
