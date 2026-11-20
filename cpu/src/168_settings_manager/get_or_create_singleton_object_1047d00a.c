/* @k10d get_or_create_singleton_object_1047d00a @ 0x1047d00a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_1047d00a(void)

{
  if (iRam80048800 == 0) {
    iRam80048800 = 1;
    cls_105aabd0_new((cls_105aabd0 *)0x800487f8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000ffd8/*SDRAM*/);
  }
  return 0x800487f8/*SDRAM*/;
}
