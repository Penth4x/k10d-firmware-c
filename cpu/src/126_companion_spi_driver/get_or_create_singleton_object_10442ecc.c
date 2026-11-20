/* @k10d get_or_create_singleton_object_10442ecc @ 0x10442ecc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_10442ecc(void)

{
  if (iRam8001ef68 == 0) {
    iRam8001ef68 = 1;
    cls_105a0e48_new((cls_105a0e48 *)0x8001ef60/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fd58/*SDRAM*/);
  }
  return 0x8001ef60/*SDRAM*/;
}
