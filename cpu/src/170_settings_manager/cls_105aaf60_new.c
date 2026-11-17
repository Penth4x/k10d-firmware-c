/* @k10d cls_105aaf60_new @ 0x1047f532
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105aaf60; returns param_1)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aaf60 (vtable 0x105aaf60, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105aaf60; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aaf60_new(uint32_t *param_1,uint32_t param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    param_1[1] = 0x105aaf60/*ROM*/;
    *param_1 = param_2;
  }
  return;
}
