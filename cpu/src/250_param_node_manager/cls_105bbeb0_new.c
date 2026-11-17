/* @k10d cls_105bbeb0_new @ 0x104dfa4c
 * name: verified (structural evidence: heap_alloc(0x44) when NULL; stores vtable 0x105bbeb0; returns param_1)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bbeb0 (vtable 0x105bbeb0, 0x44 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x44) when NULL; stores vtable 0x105bbeb0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105bbeb0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x44), param_1 != (uint32_t *)0x0)) {
    param_1[0x10] = 0x105bbeb0/*ROM*/;
    *param_1 = 4;
    *(uint16_t *)(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  return;
}
