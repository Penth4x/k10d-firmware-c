/* @k10d get_or_create_singleton_object_1048a800 @ 0x1048a800
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 186_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_1048a800(void)

{
  if (_DAT_80048db4/*SDRAM*/ == 0) {
    _DAT_80048db4/*SDRAM*/ = 1;
    cls_105b3a84_new((cls_105b3a84 *)0x80048d48/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010414/*SDRAM*/);
  }
  return 0x80048d48/*SDRAM*/;
}
