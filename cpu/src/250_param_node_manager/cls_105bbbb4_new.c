/* @k10d cls_105bbbb4_new @ 0x104df8c0
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105bbbb4; returns param_1)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bbbb4 (vtable 0x105bbbb4, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105bbbb4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105bbbb4_new(cls_105bbbb4 *param_1)

{
  if ((param_1 != (cls_105bbbb4 *)0x0) ||
     (param_1 = (cls_105bbbb4 *)heap_alloc((void *)0x18), param_1 != (cls_105bbbb4 *)0x0)) {
    param_1->field_0x14 = (uint32_t)&DAT_105bbbb4/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
  }
  return;
}
