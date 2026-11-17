/* @k10d cls_105f9bb0_new @ 0x1052b5b8
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105f9bb0; returns param_1)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105f9bb0 (vtable 0x105f9bb0, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105f9bb0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105f9bb0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    cls_1059e478_new(param_1);
    *param_1 = 0x105f9bb0/*ROM*/;
    cls_105a2bf8_new(param_1 + 1);
    param_1[3] = 0;
    forward_three_args_to_helper_10459edc(param_1 + 1,0,1);
  }
  return param_1;
}
