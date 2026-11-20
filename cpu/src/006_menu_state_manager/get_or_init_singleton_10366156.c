/* @k10d get_or_init_singleton_10366156 @ 0x10366156
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 006_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_10366156(void)

{
  if (_DAT_80015338/*SDRAM*/ == 0) {
    _DAT_80015338/*SDRAM*/ = 1;
    cls_105577f8_new((cls_105577f8 *)0x80014ea0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004318/*SDRAM*/);
  }
  return 0x80014ea0/*SDRAM*/;
}
