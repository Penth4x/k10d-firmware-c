/* @k10d cls_1059f3b4_new @ 0x1043396a
 * name: verified (structural evidence: heap_alloc(0x64) when NULL; stores vtable 0x1059f3b4; returns param_1)
 * unit: 119_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059f3b4 (vtable 0x1059f3b4, 0x64 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x64) when NULL; stores vtable 0x1059f3b4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059f3b4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)100), param_1 != (uint32_t *)0x0)) {
    cls_1059e100_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_1059e458_new(param_1 + 2);
    *param_1 = 0x1059f3b4/*ROM*/;
    param_1[1] = 0x1059f3f4/*ROM*/;
    param_1[2] = 0x1059f40c/*ROM*/;
    param_1[3] = 0;
    param_1[4] = 0;
    *(uint8_t *)(param_1 + 5) = 0;
    *(uint8_t *)((int)param_1 + 0x15) = 0;
    *(uint8_t *)((int)param_1 + 0x16) = 0;
    *(uint8_t *)((int)param_1 + 0x17) = 0;
    *(uint8_t *)(param_1 + 6) = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    cls_105a2af8_new(param_1 + 0xe);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    cls_105a2be0_new(param_1 + 0x12);
    *(uint8_t *)(param_1 + 0x14) = 0xff;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    *(uint8_t *)((int)param_1 + 0x51) = 0;
    *(uint8_t *)((int)param_1 + 0x52) = 0;
    *(uint8_t *)((int)param_1 + 0x53) = 0;
    *(uint8_t *)(param_1 + 0x15) = 0;
    *(uint8_t *)((int)param_1 + 0x55) = 0;
    *(uint8_t *)((int)param_1 + 0x56) = 0;
    *(uint8_t *)((int)param_1 + 0x57) = 0;
    *(uint8_t *)(param_1 + 0x16) = 0;
    *(uint8_t *)((int)param_1 + 0x59) = 0;
    *(uint8_t *)((int)param_1 + 0x5a) = 0;
  }
  return param_1;
}
