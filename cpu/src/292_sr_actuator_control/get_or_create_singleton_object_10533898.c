/* @k10d get_or_create_singleton_object_10533898 @ 0x10533898
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_10533898(void)

{
  if (iRam8005b110 == 0) {
    iRam8005b110 = 1;
    cls_1061e380_new((void *)0x8005b108/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80014890/*SDRAM*/);
  }
  return 0x8005b108/*SDRAM*/;
}
