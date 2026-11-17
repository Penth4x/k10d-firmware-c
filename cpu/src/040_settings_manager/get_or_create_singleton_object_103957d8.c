/* @k10d get_or_create_singleton_object_103957d8 @ 0x103957d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_103957d8(uint32_t param_1)

{
  if (_DAT_8001a570/*SDRAM*/ == 0) {
    _DAT_8001a570/*SDRAM*/ = 1;
    cls_10562d94_new((void *)0x8001a530/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004624/*SDRAM*/);
  }
  write_byte_to_offset_0x3c(0x8001a530/*SDRAM*/,param_1);
  return 0x8001a530/*SDRAM*/;
}
