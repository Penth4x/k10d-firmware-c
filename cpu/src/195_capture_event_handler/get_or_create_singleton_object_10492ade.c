/* @k10d get_or_create_singleton_object_10492ade @ 0x10492ade
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_10492ade(void)

{
  if (iRam80048f78 == 0) {
    iRam80048f78 = 1;
    cls_105b432c_new((void*)0x80048f38/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x800104dc/*SDRAM*/);
  }
  return 0x80048f38/*SDRAM*/;
}
