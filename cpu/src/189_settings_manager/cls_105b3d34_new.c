/* @k10d cls_105b3d34_new @ 0x1048d026
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105b3d34; returns param_1)
 * unit: 189_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3d34 (vtable 0x105b3d34, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105b3d34; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b3d34_new(uint16_t *param_1)

{
  uint16_t *puVar1;
  
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x34), param_1 != (uint16_t *)0x0)) {
    cls_105b3cdc_new(param_1);
    *(void **)(param_1 + 0x10) = &DAT_105b3d34/*ROM*/;
    *(uint32_t *)(param_1 + 0x12) = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 7;
    puVar1 = (uint16_t *)heap_alloc((void *)0x2c);
    if (puVar1 == (uint16_t *)0x0) {
      puVar1 = (uint16_t *)0x0;
    }
    else {
      cls_105b3d9c_new(puVar1);
    }
    *(uint16_t **)(param_1 + 0x18) = puVar1;
  }
  return (int)param_1;
}
