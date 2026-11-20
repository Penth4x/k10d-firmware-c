/* @k10d get_or_create_singleton_object_103fdafa @ 0x103fdafa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_103fdafa(void)

{
  if (iRam8001cc98 == 0) {
    iRam8001cc98 = 1;
    cls_10597e5c_new((cls_10597e5c *)0x8001c868/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fac4/*SDRAM*/);
  }
  return 0x8001c868/*SDRAM*/;
}
