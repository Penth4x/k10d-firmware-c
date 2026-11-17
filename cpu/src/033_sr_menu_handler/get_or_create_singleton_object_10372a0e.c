/* @k10d get_or_create_singleton_object_10372a0e @ 0x10372a0e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_10372a0e(void)

{
  if (_DAT_80019328/*SDRAM*/ == 0) {
    _DAT_80019328/*SDRAM*/ = 1;
    cls_105584bc_new((void *)0x80018e98/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800044a8/*SDRAM*/);
  }
  return 0x80018e98/*SDRAM*/;
}
