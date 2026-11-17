/* @k10d cls_105f9ac8_new @ 0x1052b4ba
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105f9ac8; returns param_1)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105f9ac8 (vtable 0x105f9ac8, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105f9ac8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105f9ac8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    cls_105b40c4_new(param_1);
    *param_1 = 0x105f9ac8/*ROM*/;
  }
  return param_1;
}
