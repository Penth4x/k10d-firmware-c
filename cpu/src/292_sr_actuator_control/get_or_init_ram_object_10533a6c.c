/* @k10d get_or_init_ram_object_10533a6c @ 0x10533a6c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_ram_object_10533a6c(void)

{
  if (iRam8005b11c == 0) {
    iRam8005b11c = 1;
    cls_1061e3d0_new((void*)0x8005b114/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x800148a4/*SDRAM*/);
  }
  return 0x8005b114/*SDRAM*/;
}
