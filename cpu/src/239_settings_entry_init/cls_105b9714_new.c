/* @k10d cls_105b9714_new @ 0x104ced6c
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105b9714; returns param_1)
 * unit: 239_settings_entry_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9714 (vtable 0x105b9714, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105b9714; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9714_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    param_1[1] = (uint32_t)&DAT_105b9714/*ROM*/;
    *param_1 = 0xffffffff;
  }
  return;
}
