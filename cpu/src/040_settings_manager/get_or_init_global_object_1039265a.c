/* @k10d get_or_init_global_object_1039265a @ 0x1039265a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_global_object_1039265a(void)

{
  if (_DAT_80019984/*SDRAM*/ == 0) {
    _DAT_80019984/*SDRAM*/ = 1;
    cls_105627d4_new((cls_105627d4 *)0x80019948/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000452c/*SDRAM*/);
  }
  return 0x80019948/*SDRAM*/;
}
