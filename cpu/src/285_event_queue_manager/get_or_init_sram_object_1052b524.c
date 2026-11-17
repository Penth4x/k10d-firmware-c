/* @k10d get_or_init_sram_object_1052b524 @ 0x1052b524
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_1052b524(void)

{
  if (iRam8005a814 == 0) {
    iRam8005a814 = 1;
    cls_105f9bb0_new((void *)0x8005a804/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80013618/*SDRAM*/);
  }
  return 0x8005a804/*SDRAM*/;
}
