/* @k10d cls_105a7ea0_new @ 0x1046701a
 * name: verified (structural evidence: heap_alloc(0x54) when NULL; stores vtable 0x105a7ea0; returns param_1)
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a7ea0 (vtable 0x105a7ea0, 0x54 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x54) when NULL; stores vtable 0x105a7ea0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a7ea0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x54), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_1059e458_new(param_1 + 2);
    cls_105a2c1c_new(param_1 + 3);
    cls_1059e408_new(param_1 + 8);
    *param_1 = 0x105a7ea0/*ROM*/;
    param_1[1] = 0x105a7ef0/*ROM*/;
    param_1[2] = 0x105a7f08/*ROM*/;
    param_1[7] = 0x105a7f28/*ROM*/;
    param_1[8] = 0x105a7f40/*ROM*/;
    cls_105a2af8_new(param_1 + 10);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    cpucom_request_clone((void *)(param_1 + 0xf),0);
  }
  return param_1;
}
