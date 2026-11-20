/* @k10d get_or_create_singleton_object_10396af8 @ 0x10396af8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_10396af8(void)

{
  if (_DAT_8001a6f8/*SDRAM*/ == 0) {
    _DAT_8001a6f8/*SDRAM*/ = 1;
    cls_10562f68_new((cls_10562f68 *)0x8001a6c8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004660/*SDRAM*/);
  }
  return 0x8001a6c8/*SDRAM*/;
}
