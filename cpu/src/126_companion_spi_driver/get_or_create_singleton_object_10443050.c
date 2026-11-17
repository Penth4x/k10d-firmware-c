/* @k10d get_or_create_singleton_object_10443050 @ 0x10443050
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_10443050(void)

{
  if (_DAT_8001ef70/*SDRAM*/ == 0) {
    _DAT_8001ef70/*SDRAM*/ = 1;
    cls_105a0e78_new((void *)0x8001ef6c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fd6c/*SDRAM*/);
  }
  return 0x8001ef6c/*SDRAM*/;
}
