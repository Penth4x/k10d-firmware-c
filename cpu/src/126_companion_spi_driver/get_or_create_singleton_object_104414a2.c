/* @k10d get_or_create_singleton_object_104414a2 @ 0x104414a2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_104414a2(void)

{
  if (iRam8001ef2c == 0) {
    iRam8001ef2c = 1;
    cls_105a0bec_new((cls_105a0bec *)0x8001ef24/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fd08/*SDRAM*/);
  }
  return 0x8001ef24/*SDRAM*/;
}
