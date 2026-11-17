/* @k10d get_or_create_singleton_object_1047c910 @ 0x1047c910
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_1047c910(void)

{
  if (iRam800487f4 == 0) {
    iRam800487f4 = 1;
    cls_105aa9dc_new((void *)0x800487ec/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000ffc4/*SDRAM*/);
  }
  return 0x800487ec/*SDRAM*/;
}
