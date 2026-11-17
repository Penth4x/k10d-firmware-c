/* @k10d get_or_init_singleton_object_10517512 @ 0x10517512
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_10517512(void)

{
  if (_DAT_8005a150/*SDRAM*/ == 0) {
    _DAT_8005a150/*SDRAM*/ = 1;
    cls_105d6524_new((void *)0x8005a148/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80013380/*SDRAM*/);
  }
  return 0x8005a148/*SDRAM*/;
}
