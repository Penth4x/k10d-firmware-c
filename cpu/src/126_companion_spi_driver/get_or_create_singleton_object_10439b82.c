/* @k10d get_or_create_singleton_object_10439b82 @ 0x10439b82
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_10439b82(void)

{
  if (iRam8001ee30 == 0) {
    iRam8001ee30 = 1;
    cls_105a0468_new((void*)0x8001ebe8/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x8000fc90/*SDRAM*/);
  }
  return 0x8001ebe8/*SDRAM*/;
}
