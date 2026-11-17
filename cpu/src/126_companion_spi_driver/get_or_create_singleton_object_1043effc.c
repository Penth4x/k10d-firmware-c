/* @k10d get_or_create_singleton_object_1043effc @ 0x1043effc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_1043effc(void)

{
  if (iRam8001ef00 == 0) {
    iRam8001ef00 = 1;
    cls_105a0a54_new((void *)0x8001eeb0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fccc/*SDRAM*/);
  }
  return 0x8001eeb0/*SDRAM*/;
}
