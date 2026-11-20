/* @k10d get_or_init_singleton_object_103938e2 @ 0x103938e2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_103938e2(void)

{
  if (_DAT_80019b44/*SDRAM*/ == 0) {
    _DAT_80019b44/*SDRAM*/ = 1;
    cls_105629a8_new((cls_105629a8 *)0x80019b0c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004568/*SDRAM*/);
  }
  return 0x80019b0c/*SDRAM*/;
}
