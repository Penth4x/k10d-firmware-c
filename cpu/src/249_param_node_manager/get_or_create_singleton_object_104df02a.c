/* @k10d get_or_create_singleton_object_104df02a @ 0x104df02a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 249_param_node_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_104df02a(void)

{
  if (_DAT_80059ec0/*SDRAM*/ == 0) {
    _DAT_80059ec0/*SDRAM*/ = 1;
    cls_105bb2e4_new((void *)0x80059eb8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800108d8/*SDRAM*/);
  }
  return 0x80059eb8/*SDRAM*/;
}
