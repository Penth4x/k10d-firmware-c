/* @k10d get_or_init_singleton_104895da @ 0x104895da
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_104895da(void)

{
  if (_DAT_80048c30/*SDRAM*/ == 0) {
    _DAT_80048c30/*SDRAM*/ = 1;
    cls_105b3850_new((cls_105b3850 *)0x80048c18/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010388/*SDRAM*/);
  }
  return 0x80048c18/*SDRAM*/;
}
