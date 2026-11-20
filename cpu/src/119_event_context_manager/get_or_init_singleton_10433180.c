/* @k10d get_or_init_singleton_10433180 @ 0x10433180
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 119_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_10433180(void)

{
  if (_DAT_8001e29c/*SDRAM*/ == 0) {
    _DAT_8001e29c/*SDRAM*/ = 1;
    cls_1059f284_new((cls_1059f284 *)0x8001e25c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fc68/*SDRAM*/);
  }
  return 0x8001e25c/*SDRAM*/;
}
