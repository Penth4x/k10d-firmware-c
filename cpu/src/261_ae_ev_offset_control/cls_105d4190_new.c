/* @k10d cls_105d4190_new @ 0x104f91a4
 * name: verified (structural evidence: heap_alloc(0x120) when NULL; stores vtable 0x105d4190; returns param_1)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d4190 (vtable 0x105d4190, 0x120 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x120) when NULL; stores vtable 0x105d4190; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d4190_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x120), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e430_new(param_1 + 1);
    *param_1 = 0x105d4190/*ROM*/;
    param_1[1] = 0x105d41c0/*ROM*/;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    cls_105a2be0_new(param_1 + 0x46);
  }
  return param_1;
}
