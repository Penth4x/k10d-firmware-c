/* @k10d get_or_init_singleton_object_104b50ec @ 0x104b50ec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 217_error_display_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_104b50ec(void)

{
  if (_DAT_8004929c/*SDRAM*/ == 0) {
    _DAT_8004929c/*SDRAM*/ = 1;
    cls_105b857c_new((cls_105b857c *)0x80049294/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010714/*SDRAM*/);
  }
  return 0x80049294/*SDRAM*/;
}
