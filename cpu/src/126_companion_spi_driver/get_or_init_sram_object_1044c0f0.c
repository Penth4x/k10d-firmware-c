/* @k10d get_or_init_sram_object_1044c0f0 @ 0x1044c0f0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_1044c0f0(void)

{
  if (iRam8002eff4 == 0) {
    iRam8002eff4 = 1;
    cls_105a1c3c_new((cls_105a1c3c *)0x8002efec/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fe0c/*SDRAM*/);
  }
  return 0x8002efec/*SDRAM*/;
}
