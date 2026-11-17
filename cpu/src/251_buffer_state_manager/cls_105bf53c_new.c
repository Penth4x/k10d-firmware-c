/* @k10d cls_105bf53c_new @ 0x104e2cfc
 * name: verified (structural evidence: heap_alloc(0x3c) when NULL; stores vtable 0x105bf53c; returns param_1)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bf53c (vtable 0x105bf53c, 0x3c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x3c) when NULL; stores vtable 0x105bf53c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105bf53c_new(uint32_t *param_1)

{
  int iVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x3c), param_1 != (uint32_t *)0x0)) {
    cls_105bbbb4_new(param_1);
    param_1[5] = 0x105bf53c/*ROM*/;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    iVar1 = heap_alloc((void *)0x10);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      init_or_alloc_zeroed_block((void *)iVar1);
    }
    param_1[6] = iVar1;
  }
  return (int)param_1;
}
