/* @k10d get_or_create_singleton_object_1047d890 @ 0x1047d890
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 169_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_1047d890(void)

{
  if (iRam80048810 == 0) {
    iRam80048810 = 1;
    cls_105aadb0_new((cls_105aadb0 *)0x80048804/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000ffec/*SDRAM*/);
  }
  return 0x80048804/*SDRAM*/;
}
