/* @k10d get_or_init_global_object_1037032a @ 0x1037032a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 028_sr_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_global_object_1037032a(void)

{
  if (_DAT_80018790/*SDRAM*/ == 0) {
    _DAT_80018790/*SDRAM*/ = 1;
    cls_10557fec_new((cls_10557fec *)0x800186b8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004480/*SDRAM*/);
  }
  return 0x800186b8/*SDRAM*/;
}
