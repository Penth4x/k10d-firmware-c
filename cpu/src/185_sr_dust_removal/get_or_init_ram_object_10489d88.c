/* @k10d get_or_init_ram_object_10489d88 @ 0x10489d88
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 185_sr_dust_removal (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_ram_object_10489d88(void)

{
  if (iRam80048d44 == 0) {
    iRam80048d44 = 1;
    cls_105b3998_new((uint32_t *)0x80048cbc/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010400/*SDRAM*/);
  }
  return 0x80048cbc/*SDRAM*/;
}
