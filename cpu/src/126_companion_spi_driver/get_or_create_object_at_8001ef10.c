/* @k10d get_or_create_object_at_8001ef10 @ 0x104408e0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_object_at_8001ef10(void)

{
  if (iRam8001ef20 == 0) {
    iRam8001ef20 = 1;
    cls_105a0b64_new((void*)0x8001ef10/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x8000fcf4/*SDRAM*/);
  }
  return 0x8001ef10/*SDRAM*/;
}
