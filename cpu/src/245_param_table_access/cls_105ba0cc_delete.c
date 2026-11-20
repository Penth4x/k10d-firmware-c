/* @k10d cls_105ba0cc_delete @ 0x104d66b8
 * name: verified (structural evidence: stores vtable 0x105ba0cc to *this; heap_free(this) under (param_2 & 1))
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105ba0cc (vtable 0x105ba0cc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105ba0cc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105ba0cc_delete(cls_105ba0cc *param_1,uint param_2)

{
  if (param_1 != (cls_105ba0cc *)0x0) {
    *(uint32_t *)&param_1[2].field_0xde0 = 0x105ba0cc/*ROM*/;
    free_heap_if_flagged_104d60a6((int)(&param_1[2].field_0x63c),(uint)(2));
    free_heap_if_flagged_104d79ba((int)(&param_1[2].field_0x52c),(uint)(2));
    free_heap_if_flagged_104d51d8((int)(&param_1[2].field_0x51c),(uint)(2));
    destroy_class_members_104d89dc((int)(&param_1[1].field_0xaf4),(uint)(2));
    free_heap_if_flagged_104d7e8e((int)(&param_1[1].field_0xacc),(uint)(2));
    free_heap_if_flagged_104d7e8e((int)(&param_1[1].field_0xaa4),(uint)(2));
    free_heap_if_flagged_104d7a8e((int)(&param_1[1].field_0x988),(uint)(2));
    destroy_class_members_104d78aa((int)(&param_1[1].field_0x8a4),(uint)(2));
    destroy_class_members_104d64de((int)(&param_1->field_0xe98),(uint)(2));
    destroy_class_members_104d64de((int)(&param_1->field_0x5f0),(uint)(2));
    free_heap_if_flagged_104d7c40((int)(&param_1->field_0x2f8),(uint)(2));
    free_heap_if_flagged_104d7c40((int)(param_1),(uint)(2));
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
