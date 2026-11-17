/* @k10d cls_105d6d48_new @ 0x1051d1f6
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105d6d48; returns param_1)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6d48 (vtable 0x105d6d48, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105d6d48; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d6d48_new(uint32_t *param_1)

{
  int iVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    cls_1059e458_new(param_1);
    *param_1 = 0x105d6d48/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    iVar1 = (int)heap_alloc((void *)0x10);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      cls_105d6d68_new((void *)iVar1);
    }
    param_1[1] = iVar1;
    *(uint32_t **)(iVar1 + 0xc) = param_1;
  }
  return param_1;
}
