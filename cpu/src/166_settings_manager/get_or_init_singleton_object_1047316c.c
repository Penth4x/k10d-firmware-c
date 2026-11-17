/* @k10d get_or_init_singleton_object_1047316c @ 0x1047316c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 166_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_1047316c(void)

{
  if (_DAT_8004878c/*SDRAM*/ == 0) {
    _DAT_8004878c/*SDRAM*/ = 1;
    cls_105aa2f4_new((void *)0x80048784/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fef0/*SDRAM*/);
  }
  return 0x80048784/*SDRAM*/;
}
