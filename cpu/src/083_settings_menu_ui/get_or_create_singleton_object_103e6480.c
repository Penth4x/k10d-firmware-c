/* @k10d get_or_create_singleton_object_103e6480 @ 0x103e6480
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_103e6480(void)

{
  if (iRam8001c5f0 == 0) {
    iRam8001c5f0 = 1;
    cls_10597214_new((cls_10597214 *)0x8001c5cc/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f998/*SDRAM*/);
  }
  return 0x8001c5cc/*SDRAM*/;
}
