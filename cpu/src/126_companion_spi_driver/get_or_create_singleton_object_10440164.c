/* @k10d get_or_create_singleton_object_10440164 @ 0x10440164
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_10440164(void)

{
  if (iRam8001ef0c == 0) {
    iRam8001ef0c = 1;
    cls_105a0adc_new((void *)0x8001ef04/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fce0/*SDRAM*/);
  }
  return 0x8001ef04/*SDRAM*/;
}
