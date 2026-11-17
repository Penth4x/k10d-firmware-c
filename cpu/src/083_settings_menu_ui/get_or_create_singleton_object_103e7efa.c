/* @k10d get_or_create_singleton_object_103e7efa @ 0x103e7efa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_103e7efa(void)

{
  if (iRam8001c668 == 0) {
    iRam8001c668 = 1;
    cls_105973d0_new((uint32_t *)0x8001c644/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f9d4/*SDRAM*/);
  }
  return 0x8001c644/*SDRAM*/;
}
