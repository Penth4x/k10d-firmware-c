/* @k10d get_or_create_singleton_object_1043c90e @ 0x1043c90e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_1043c90e(void)

{
  if (iRam8001ee50 == 0) {
    iRam8001ee50 = 1;
    cls_105a06e8_new((cls_105a06e8 *)0x8001ee34/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fca4/*SDRAM*/);
  }
  return 0x8001ee34/*SDRAM*/;
}
