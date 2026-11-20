/* @k10d get_or_create_singleton_object_1049aca6 @ 0x1049aca6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_1049aca6(void)

{
  if (iRam80048fe4 == 0) {
    iRam80048fe4 = 1;
    cls_105b57ac_new((cls_105b57ac *)0x80048fb4/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8001054c/*SDRAM*/);
  }
  return 0x80048fb4/*SDRAM*/;
}
