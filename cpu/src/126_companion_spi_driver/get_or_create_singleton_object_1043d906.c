/* @k10d get_or_create_singleton_object_1043d906 @ 0x1043d906
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_1043d906(void)

{
  if (iRam8001eeac == 0) {
    iRam8001eeac = 1;
    cls_105a08e0_new((void *)0x8001ee54/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fcb8/*SDRAM*/);
  }
  return 0x8001ee54/*SDRAM*/;
}
