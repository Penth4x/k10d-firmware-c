/* @k10d get_or_create_singleton_object_10489a38 @ 0x10489a38
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_10489a38(void)

{
  if (iRam80048c44 == 0) {
    iRam80048c44 = 1;
    cls_105b38f0_new((cls_105b38f0 *)0x80048c2c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800103d8/*SDRAM*/);
  }
  return 0x80048c2c/*SDRAM*/;
}
