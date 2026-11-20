/* @k10d cls_105b46cc_new @ 0x10493ede
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105b46cc; returns param_1)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b46cc (vtable 0x105b46cc, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105b46cc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b49ec * cls_105b46cc_new(cls_105b46cc *param_1)

{
  int iVar1;
  
  if ((param_1 != (cls_105b46cc *)0x0) ||
     (param_1 = (cls_105b46cc *)heap_alloc((void *)0x18), (cls_105b49ec *)param_1 != (cls_105b49ec *)0x0)) {
    cls_105b49ec_new((cls_105b49ec *)param_1);
    ((cls_105b49ec *)param_1)->field_0xc = (uintptr_t)(&DAT_105b46cc/*ROM*/);
    iVar1 = heap_alloc_2(0x280);
    ((cls_105b49ec *)param_1)->field_0x10 = iVar1;
    ((cls_105b49ec *)param_1)->field_0x16 = 0;
    ((cls_105b49ec *)param_1)->field_0x14 = 0;
    ((cls_105b49ec *)param_1)->field_0x15 = 0;
  }
  return (cls_105b49ec *)param_1;
}
