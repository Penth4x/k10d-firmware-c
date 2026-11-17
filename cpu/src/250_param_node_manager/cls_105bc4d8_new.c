/* @k10d cls_105bc4d8_new @ 0x104dff0c
 * name: verified (structural evidence: heap_alloc(0x80) when NULL; stores vtable 0x105bc4d8; returns param_1)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bc4d8 (vtable 0x105bc4d8, 0x80 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x80) when NULL; stores vtable 0x105bc4d8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105bc4d8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x80), param_1 != (uint32_t *)0x0)) {
    cls_105bbeb0_new(param_1);
    param_1[0x10] = 0x105bc4d8/*ROM*/;
    *(uint8_t *)(param_1 + 0x11) = 0;
    param_1[0x12] = 3;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(uint8_t *)(param_1 + 0x17) = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  return (int)param_1;
}
