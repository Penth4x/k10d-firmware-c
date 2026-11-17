/* @k10d cls_105bde1c_new @ 0x104e173e
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x105bde1c; returns param_1)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bde1c (vtable 0x105bde1c, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x105bde1c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105bde1c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x24), param_1 != (uint32_t *)0x0)) {
    cls_105bd93c_new(param_1);
    param_1[2] = (uint32_t)&DAT_105bde1c/*ROM*/;
    *(uint16_t *)(param_1 + 3) = 0;
    param_1[8] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return (int)param_1;
}
