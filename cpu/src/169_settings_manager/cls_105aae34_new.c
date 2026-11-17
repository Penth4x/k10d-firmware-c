/* @k10d cls_105aae34_new @ 0x1047df4e
 * name: verified (structural evidence: heap_alloc(0x120) when NULL; stores vtable 0x105aae34; returns param_1)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aae34 (vtable 0x105aae34, 0x120 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x120) when NULL; stores vtable 0x105aae34; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aae34_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x120), param_1 != (uint32_t *)0x0)) {
    param_1[0x47] = 0x105aae34/*ROM*/;
    *param_1 = 0;
    param_1[1] = 0xffffffff;
    *(uint16_t *)(param_1 + 2) = 0;
    *(uint16_t *)((int)param_1 + 10) = 0;
    param_1[3] = 0xffffffff;
    param_1[4] = 0;
    param_1[5] = 0;
    *(uint8_t *)(param_1 + 6) = 0;
    *(uint8_t *)((int)param_1 + 0x19) = 0;
  }
  return;
}
