/* @k10d get_or_create_singleton_object_10533e2c @ 0x10533e2c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_10533e2c(void)

{
  if (iRam8005b138 == 0) {
    iRam8005b138 = 1;
    cls_1061e470_new((void*)0x8005b128/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x800148cc/*SDRAM*/);
  }
  return 0x8005b128/*SDRAM*/;
}
