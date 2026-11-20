/* @k10d get_singleton_object_ptr @ 0x1048a9fc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 187_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_singleton_object_ptr(void)

{
  if (_DAT_80048edc/*SDRAM*/ == 0) {
    _DAT_80048edc/*SDRAM*/ = 1;
    cls_105b3ae4_new((cls_105b3ae4 *)0x80048db8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010428/*SDRAM*/);
  }
  return 0x80048db8/*SDRAM*/;
}
