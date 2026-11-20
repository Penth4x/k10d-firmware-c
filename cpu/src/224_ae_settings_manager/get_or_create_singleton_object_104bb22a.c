/* @k10d get_or_create_singleton_object_104bb22a @ 0x104bb22a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_104bb22a(void)

{
  if (_DAT_80049e44/*SDRAM*/ == 0) {
    _DAT_80049e44/*SDRAM*/ = 1;
    cls_105b931c_new((cls_105b931c *)0x80049e38/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8001078c/*SDRAM*/);
  }
  return 0x80049e38/*SDRAM*/;
}
