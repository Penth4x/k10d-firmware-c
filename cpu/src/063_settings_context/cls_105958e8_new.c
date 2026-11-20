/* @k10d cls_105958e8_new @ 0x103cbf20
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x105958e8; returns param_1)
 * unit: 063_settings_context (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105958e8 (vtable 0x105958e8, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x105958e8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int cls_105958e8_new(cls_105958e8 *param_1)

{
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (cls_105958e8 *)0x0) ||
     (param_1 = (cls_105958e8 *)heap_alloc((void *)0x24), param_1 != (cls_105958e8 *)0x0)) {
    cls_105956e0_new((cls_105956e0 *)param_1);
    param_1->field_0x10 = (uintptr_t)(&DAT_105958e8/*ROM*/);
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x21 = 0;
    param_1->field_0x22 = 0;
    param_1->field_0x23 = 0;
    (*_DAT_105958fc/*ROM*/)((int)&param_1->field_0x0 + (int)_DAT_105958f8/*ROM*/);
    (((vtbl_entry*)(param_1->field_0x10))[3].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x10))[3].adj);
    instantiate_and_link_object_graph_103c907e(param_1,extraout_r5,r6_in,r7_in);
  }
  return (int)param_1;
}
