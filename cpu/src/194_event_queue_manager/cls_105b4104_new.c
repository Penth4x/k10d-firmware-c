/* @k10d cls_105b4104_new @ 0x10491554
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105b4104; returns param_1)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b4104 (vtable 0x105b4104, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105b4104; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b4104_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    param_1[6] = (uint32_t)&DAT_105b4104/*ROM*/;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    alloc_and_zero_two_words_1045c3bc(param_1 + 4);
  }
  return param_1;
}
