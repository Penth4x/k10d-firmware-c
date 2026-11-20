/* @k10d get_sensor_singleton @ 0x10490cfc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a lazily-initialized singleton object stored at 0x80048ee0.
 * summary:
 *   Checks the flag at 0x80048ee8; if zero, sets it to 1, calls cls_105b4094_new to
 *   construct an object at 0x80048ee0, and calls prepend_to_singly_linked_list with
 *   0x80010464. Returns the pointer 0x80048ee0. The specific subsystem (e.g., sensor) is
 *   not determinable from the provided callees or code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_sensor_singleton(void)

{
  if (_DAT_80048ee8/*SDRAM*/ == 0) {
    _DAT_80048ee8/*SDRAM*/ = 1;
    cls_105b4094_new((cls_105b4094 *)0x80048ee0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010464/*SDRAM*/);
  }
  return 0x80048ee0/*SDRAM*/;
}
