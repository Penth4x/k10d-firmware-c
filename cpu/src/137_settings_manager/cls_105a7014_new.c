/* @k10d cls_105a7014_new @ 0x10460b32
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105a7014; returns param_1)
 * unit: 137_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a7014 (vtable 0x105a7014, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105a7014; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a7014_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    cls_105b5264_new(param_1);
    *param_1 = 0x105a7014/*ROM*/;
    *(uint8_t *)(param_1 + 1) = 0;
    *(uint8_t *)((int)param_1 + 5) = 0;
    *(uint8_t *)((int)param_1 + 6) = 0;
    *(uint8_t *)((int)param_1 + 7) = 0;
    *(uint8_t *)(param_1 + 2) = 0;
  }
  return param_1;
}
