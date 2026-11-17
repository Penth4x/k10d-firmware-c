/* @k10d cls_1055a4d4_new @ 0x10390fea
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x1055a4d4; returns param_1)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1055a4d4 (vtable 0x1055a4d4, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x1055a4d4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1055a4d4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    cls_1059e380_new(param_1);
    *param_1 = (uint32_t)&DAT_1055a4d4/*ROM*/;
    param_1[1] = 0;
  }
  return param_1;
}
