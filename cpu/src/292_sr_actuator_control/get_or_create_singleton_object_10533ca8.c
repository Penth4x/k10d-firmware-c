/* @k10d get_or_create_singleton_object_10533ca8 @ 0x10533ca8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_10533ca8(void)

{
  if (iRam8005b124 == 0) {
    iRam8005b124 = 1;
    cls_1061e420_new((void*)0x8005b120/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x800148b8/*SDRAM*/);
  }
  return 0x8005b120/*SDRAM*/;
}
