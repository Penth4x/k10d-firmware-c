/* @k10d cls_105b9afc_new @ 0x104cfea2
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105b9afc; returns param_1)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9afc (vtable 0x105b9afc, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105b9afc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105b9afc_new(cls_105b9afc *param_1)

{
  if ((param_1 != (cls_105b9afc *)0x0) ||
     (param_1 = (cls_105b9afc *)heap_alloc((void *)0x18), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uintptr_t)((void *)0x105b9afc/*ROM*/);
    ((cls_1059e380 *)param_1)->field1_0x4 = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field2_0x8 = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field3_0xc = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field4_0x10 = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field5_0x14 = (uintptr_t)((void *)0x0);
  }
  return (cls_1059e380 *)param_1;
}
