/* @k10d get_or_create_singleton_object_1051f6ba @ 0x1051f6ba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_1051f6ba(void)

{
  if (iRam8005a2b8 == 0) {
    iRam8005a2b8 = 1;
    cls_105d6fa0_new((cls_105d6fa0 *)0x8005a230/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800133e4/*SDRAM*/);
  }
  return 0x8005a230/*SDRAM*/;
}
