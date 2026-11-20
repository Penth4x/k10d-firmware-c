/* @k10d get_or_init_ram_object_103b95ee @ 0x103b95ee
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_ram_object_103b95ee(void)

{
  if (iRam8001bd90 == 0) {
    iRam8001bd90 = 1;
    cls_10594e70_new((cls_10594e70 *)0x8001bd54/*SDRAM*/);
    prepend_to_singly_linked_list((uint32_t *)(0x8000f59c/*SDRAM*/));
  }
  return 0x8001bd54/*SDRAM*/;
}
