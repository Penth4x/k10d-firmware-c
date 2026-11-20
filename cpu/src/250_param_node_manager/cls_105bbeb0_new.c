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

void cls_105bbeb0_new(cls_105bbeb0 *param_1)

{
  if ((param_1 != (cls_105bbeb0 *)0x0) ||
     (param_1 = (cls_105bbeb0 *)heap_alloc((void *)0x44), param_1 != (cls_105bbeb0 *)0x0)) {
    param_1->field_0x40 = 0x105bbeb0/*ROM*/;
    param_1->field_0x0 = 4;
    param_1->field_0x4 = 0;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x2c = 0;
    param_1->field_0x30 = 0;
    param_1->field_0x34 = 0;
    param_1->field_0x38 = 0;
    param_1->field_0x3c = 0;
    param_1->field_0x10 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
  }
  return;
}
