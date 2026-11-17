/* @k10d get_or_init_singleton_1036541a @ 0x1036541a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_1036541a(void)

{
  if (_DAT_80014e9c/*SDRAM*/ == 0) {
    _DAT_80014e9c/*SDRAM*/ = 1;
    cls_105576e0_new((void *)0x80014db8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004304/*SDRAM*/);
  }
  return 0x80014db8/*SDRAM*/;
}
