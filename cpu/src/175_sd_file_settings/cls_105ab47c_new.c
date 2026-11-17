/* @k10d cls_105ab47c_new @ 0x10480c00
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105ab47c; returns param_1)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ab47c (vtable 0x105ab47c, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105ab47c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105ab47c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_105ab430_new(param_1 + 1);
    *param_1 = 0x105ab47c/*ROM*/;
    param_1[1] = 0x105ab4cc/*ROM*/;
    param_1[2] = 0;
    cls_105a2be0_new(param_1 + 3);
  }
  return param_1;
}
