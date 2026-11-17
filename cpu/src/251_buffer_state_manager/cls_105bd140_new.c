/* @k10d cls_105bd140_new @ 0x104e0c8e
 * name: verified (structural evidence: heap_alloc(0x44) when NULL; stores vtable 0x105bd140; returns param_1)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bd140 (vtable 0x105bd140, 0x44 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x44) when NULL; stores vtable 0x105bd140; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105bd140_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x44), param_1 != (uint32_t *)0x0)) {
    cls_105bd93c_new(param_1);
    param_1[2] = 0x105bd140/*ROM*/;
    param_1[3] = 0;
    *(uint16_t *)(param_1 + 4) = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  return (int)param_1;
}
