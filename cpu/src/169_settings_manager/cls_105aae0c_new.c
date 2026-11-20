/* @k10d cls_105aae0c_new @ 0x1047dec8
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105aae0c; returns param_1)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aae0c (vtable 0x105aae0c, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105aae0c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105aae0c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    *param_1 = 0x105aae0c/*ROM*/;
    cls_105a5c2c_new((void *)(param_1 + 1), 0);
  }
  return param_1;
}
