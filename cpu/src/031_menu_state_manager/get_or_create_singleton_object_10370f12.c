/* @k10d get_or_create_singleton_object_10370f12 @ 0x10370f12
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 031_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_10370f12(void)

{
  if (_DAT_80018e94/*SDRAM*/ == 0) {
    _DAT_80018e94/*SDRAM*/ = 1;
    cls_10558104_new((void *)0x80018794/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004494/*SDRAM*/);
  }
  return 0x80018794/*SDRAM*/;
}
