/* @k10d get_or_create_singleton_object_104da20c @ 0x104da20c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_104da20c(void)

{
  if (iRam80059e74 == 0) {
    iRam80059e74 = 1;
    cls_105bb0b8_new((void *)0x80059d60/*SDRAM*/);
    uRam80059d7c = 0x105ba278/*ROM*/;
    prepend_to_singly_linked_list((void *)0x80010854/*SDRAM*/);
  }
  return 0x80059d60/*SDRAM*/;
}
