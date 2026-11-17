/* @k10d cls_105b3cdc_new @ 0x1048c43a
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x105b3cdc; returns param_1)
 * unit: 187_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3cdc (vtable 0x105b3cdc, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x105b3cdc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b3cdc_new(uint16_t *param_1)

{
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x24), param_1 != (uint16_t *)0x0)) {
    *(void **)(param_1 + 0x10) = &DAT_105b3cdc/*ROM*/;
    *param_1 = 0;
    param_1[1] = 0;
    *(uint8_t *)(param_1 + 0xc) = 1;
    *(uint8_t *)((int)param_1 + 0x19) = 0;
    *(uint32_t *)(param_1 + 0xe) = 0;
    *(uint32_t *)(param_1 + 8) = 0;
    *(uint32_t *)(param_1 + 4) = 0;
    *(uint32_t *)(param_1 + 6) = 0;
    *(uint32_t *)(param_1 + 2) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  return;
}
