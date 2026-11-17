/* @k10d get_or_create_singleton_object_1050b118 @ 0x1050b118
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_1050b118(void)

{
  if (_DAT_8005a114/*SDRAM*/ == 0) {
    _DAT_8005a114/*SDRAM*/ = 1;
    cls_105d5584_new((void *)0x8005a090/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80013330/*SDRAM*/);
  }
  return 0x8005a090/*SDRAM*/;
}
