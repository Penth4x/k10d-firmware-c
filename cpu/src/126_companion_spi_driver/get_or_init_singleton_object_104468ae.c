/* @k10d get_or_init_singleton_object_104468ae @ 0x104468ae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_104468ae(void)

{
  if (_DAT_8002efcc/*SDRAM*/ == 0) {
    _DAT_8002efcc/*SDRAM*/ = 1;
    cls_105a18b4_new((cls_105a18b4 *)0x8002efa8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fdd0/*SDRAM*/);
  }
  return 0x8002efa8/*SDRAM*/;
}
