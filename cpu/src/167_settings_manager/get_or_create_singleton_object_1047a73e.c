/* @k10d get_or_create_singleton_object_1047a73e @ 0x1047a73e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_1047a73e(void)

{
  if (iRam800487e8 == 0) {
    iRam800487e8 = 1;
    cls_105aa710_new((void*)0x800487dc/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x8000ffb0/*SDRAM*/);
  }
  return 0x800487dc/*SDRAM*/;
}
