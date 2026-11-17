/* @k10d get_or_create_singleton_object_104fb12e @ 0x104fb12e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_104fb12e(void)

{
  if (_DAT_8005a08c/*SDRAM*/ == 0) {
    _DAT_8005a08c/*SDRAM*/ = 1;
    cls_105d436c_new((void *)0x8005a00c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010cc4/*SDRAM*/);
  }
  return 0x8005a00c/*SDRAM*/;
}
