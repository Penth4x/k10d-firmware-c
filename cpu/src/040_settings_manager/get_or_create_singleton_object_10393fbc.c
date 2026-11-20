/* @k10d get_or_create_singleton_object_10393fbc @ 0x10393fbc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_10393fbc(void)

{
  if (_DAT_80019c00/*SDRAM*/ == 0) {
    _DAT_80019c00/*SDRAM*/ = 1;
    cls_10562aa0_new((cls_10562aa0 *)0x80019bd0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004590/*SDRAM*/);
  }
  return 0x80019bd0/*SDRAM*/;
}
