/* @k10d get_or_create_singleton_object_104418f8 @ 0x104418f8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_104418f8(void)

{
  if (iRam8001ef38 == 0) {
    iRam8001ef38 = 1;
    cls_105a0c74_new((void *)0x8001ef30/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fd1c/*SDRAM*/);
  }
  return 0x8001ef30/*SDRAM*/;
}
