/* @k10d get_or_create_singleton_object_10442b98 @ 0x10442b98
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_10442b98(void)

{
  if (iRam8001ef5c == 0) {
    iRam8001ef5c = 1;
    cls_105a0db4_new((cls_105a0db4 *)0x8001ef54/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fd44/*SDRAM*/);
  }
  return 0x8001ef54/*SDRAM*/;
}
