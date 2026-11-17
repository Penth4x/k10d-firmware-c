/* @k10d get_or_init_singleton_10392e96 @ 0x10392e96
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_10392e96(void)

{
  if (_DAT_80019b08/*SDRAM*/ == 0) {
    _DAT_80019b08/*SDRAM*/ = 1;
    cls_105628cc_new((void *)0x80019a10/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004554/*SDRAM*/);
  }
  return 0x80019a10/*SDRAM*/;
}
