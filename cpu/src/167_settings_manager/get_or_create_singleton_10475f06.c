/* @k10d get_or_create_singleton_10475f06 @ 0x10475f06
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_10475f06(void)

{
  if (iRam800487a4 == 0) {
    iRam800487a4 = 1;
    cls_105aa470_new((uint32_t *)(0x8004879c/*SDRAM*/));
    prepend_to_singly_linked_list((uint32_t *)(0x8000ff1c/*SDRAM*/));
  }
  return 0x8004879c/*SDRAM*/;
}
