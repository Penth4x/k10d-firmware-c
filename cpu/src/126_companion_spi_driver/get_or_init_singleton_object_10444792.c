/* @k10d get_or_init_singleton_object_10444792 @ 0x10444792
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_10444792(void)

{
  if (_DAT_8002ef88/*SDRAM*/ == 0) {
    _DAT_8002ef88/*SDRAM*/ = 1;
    cls_105a1418_new((cls_105a1418 *)0x8002ef80/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fd94/*SDRAM*/);
  }
  return 0x8002ef80/*SDRAM*/;
}
