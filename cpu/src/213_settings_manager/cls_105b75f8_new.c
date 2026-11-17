/* @k10d cls_105b75f8_new @ 0x104ada68
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105b75f8; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b75f8 (vtable 0x105b75f8, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105b75f8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b75f8_new(uint32_t *param_1,int param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x28), param_1 != (uint32_t *)0x0)) {
    cls_105b7748_new(param_1);
    param_1[6] = 0x105b75f8/*ROM*/;
    *(uint8_t *)(param_1 + 8) = *(uint8_t *)(param_2 + 0x105b75f0/*ROM*/);
    *(uint8_t *)((int)param_1 + 0x21) = *(uint8_t *)(param_2 + 0x105b75f3/*ROM*/);
    param_1[9] = 0;
  }
  return param_1;
}
