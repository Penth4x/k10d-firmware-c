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

int cls_105bc4d8_new(cls_105bc4d8 *param_1)

{
  if ((param_1 != (cls_105bc4d8 *)0x0) ||
     (param_1 = (cls_105bc4d8 *)heap_alloc((void *)0x80), param_1 != (cls_105bc4d8 *)0x0)) {
    cls_105bbeb0_new((cls_105bbeb0 *)param_1);
    param_1->field_0x40 = 0x105bc4d8/*ROM*/;
    param_1->field_0x44 = 0;
    param_1->field_0x48 = 3;
    param_1->field_0x4c = 0;
    param_1->field_0x50 = 0;
    param_1->field_0x54 = 0;
    param_1->field_0x58 = 0;
    param_1->field_0x5c = 0;
    param_1->field_0x60 = 0;
    *(uint32_t *)&param_1->field_0x64 = 0;
    param_1->field_0x68 = 0;
    param_1->field_0x6c = 0;
    param_1->field_0x70 = 0;
    param_1->field_0x74 = 0;
    param_1->field_0x78 = 0;
    param_1->field_0x7c = 0;
  }
  return (int)param_1;
}
