/* @k10d get_or_create_singleton_object_104a93d0 @ 0x104a93d0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 207_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_104a93d0(void)

{
  if (iRam80049090 == 0) {
    iRam80049090 = 1;
    cls_105b6ac8_new((cls_105b6ac8 *)0x80049084/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800105ec/*SDRAM*/);
  }
  return 0x80049084/*SDRAM*/;
}
