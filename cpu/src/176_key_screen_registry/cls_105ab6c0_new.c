/* @k10d cls_105ab6c0_new @ 0x104824cc
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105ab6c0; returns param_1)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ab6c0 (vtable 0x105ab6c0, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105ab6c0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105ab6c0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x34), param_1 != (uint32_t *)0x0)) {
    cls_105aaf18_new(param_1);
    param_1[0xc] = 0x105ab6c0/*ROM*/;
  }
  return (int)param_1;
}
