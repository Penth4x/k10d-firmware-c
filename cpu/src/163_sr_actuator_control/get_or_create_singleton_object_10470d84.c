/* @k10d get_or_create_singleton_object_10470d84 @ 0x10470d84
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 163_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_10470d84(void)

{
  if (_DAT_80048780/*SDRAM*/ == 0) {
    _DAT_80048780/*SDRAM*/ = 1;
    cls_105a97bc_new((cls_105a97bc *)0x80048778/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fedc/*SDRAM*/);
  }
  return 0x80048778/*SDRAM*/;
}
