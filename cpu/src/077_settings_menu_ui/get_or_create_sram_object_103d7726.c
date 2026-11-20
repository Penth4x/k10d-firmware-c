/* @k10d get_or_create_sram_object_103d7726 @ 0x103d7726
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_sram_object_103d7726(void)

{
  if (iRam8001c270 == 0) {
    iRam8001c270 = 1;
    cls_105964c4_new((cls_105964c4 *)0x8001c24c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f7f4/*SDRAM*/);
  }
  return 0x8001c24c/*SDRAM*/;
}
