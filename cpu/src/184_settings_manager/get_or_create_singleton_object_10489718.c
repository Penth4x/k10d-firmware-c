/* @k10d get_or_create_singleton_object_10489718 @ 0x10489718
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_10489718(void)

{
  if (iRam80048c34 == 0) {
    iRam80048c34 = 1;
    cls_105b3870_new((void *)0x80048c1c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010398/*SDRAM*/);
  }
  return 0x80048c1c/*SDRAM*/;
}
