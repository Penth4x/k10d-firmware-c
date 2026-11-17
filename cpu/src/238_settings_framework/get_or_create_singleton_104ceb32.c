/* @k10d get_or_create_singleton_104ceb32 @ 0x104ceb32
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 238_settings_framework (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_104ceb32(void)

{
  if (iRam80059ca0 == 0) {
    iRam80059ca0 = 1;
    cls_105b96e4_new((void *)0x80059c98/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800107dc/*SDRAM*/);
  }
  return 0x80059c98/*SDRAM*/;
}
