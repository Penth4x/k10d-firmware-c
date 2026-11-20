/* @k10d get_or_init_singleton_1036e58a @ 0x1036e58a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_1036e58a(void)

{
  if (_DAT_800186b4/*SDRAM*/ == 0) {
    _DAT_800186b4/*SDRAM*/ = 1;
    cls_10557f3c_new((cls_10557f3c *)0x800185ec/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000446c/*SDRAM*/);
  }
  return 0x800185ec/*SDRAM*/;
}
