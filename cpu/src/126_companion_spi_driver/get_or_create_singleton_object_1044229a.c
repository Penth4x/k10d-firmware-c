/* @k10d get_or_create_singleton_object_1044229a @ 0x1044229a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_1044229a(void)

{
  if (iRam8001ef50 == 0) {
    iRam8001ef50 = 1;
    cls_105a0d28_new((void *)0x8001ef3c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fd30/*SDRAM*/);
  }
  return 0x8001ef3c/*SDRAM*/;
}
