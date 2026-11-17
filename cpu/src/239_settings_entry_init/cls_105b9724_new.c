/* @k10d cls_105b9724_new @ 0x104cedb6
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105b9724; returns param_1)
 * unit: 239_settings_entry_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9724 (vtable 0x105b9724, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105b9724; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b9724_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    cls_105b9714_new(param_1);
    param_1[1] = (uint32_t)&DAT_105b9724/*ROM*/;
    param_1[2] = 0;
    param_1[3] = 0;
    *(uint8_t *)(param_1 + 4) = 0;
    param_1[5] = 0;
  }
  return (int)param_1;
}
