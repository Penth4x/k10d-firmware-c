/* @k10d cls_1059df50_new @ 0x104260b0
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x1059df50; returns param_1)
 * unit: 101_parameter_event_handler (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059df50 (vtable 0x1059df50, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x1059df50; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059df50_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x34), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_105a2b50_new((void *)(param_1 + 2));
    *param_1 = 0x1059df50/*ROM*/;
    param_1[1] = 0x1059df88/*ROM*/;
    param_1[6] = 0x1059dfa0/*ROM*/;
    param_1[9] = 0;
    param_1[10] = 0;
    cls_105a2af8_new((void *)(param_1 + 0xb));
  }
  return param_1;
}
