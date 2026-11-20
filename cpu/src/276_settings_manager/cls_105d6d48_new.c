/* @k10d cls_105d6d48_new @ 0x1051d1f6
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105d6d48; returns param_1)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6d48 (vtable 0x105d6d48, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105d6d48; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e458 * cls_105d6d48_new(cls_105d6d48 *param_1)

{
  cls_105d6d68 *pcVar1;
  
  if ((param_1 != (cls_105d6d48 *)0x0) ||
     (param_1 = (cls_105d6d48 *)heap_alloc((void *)0xc), (cls_1059e458 *)param_1 != (cls_1059e458 *)0x0)) {
    cls_1059e458_new((cls_1059e458 *)param_1);
    ((cls_1059e458 *)param_1)->field_0x0 = (uintptr_t)((void *)0x105d6d48/*ROM*/);
    ((cls_1059e458 *)param_1)->field1_0x4 = (uintptr_t)((void *)0x0);
    ((cls_1059e458 *)param_1)->field2_0x8 = (uintptr_t)((void *)0x0);
    pcVar1 = (cls_105d6d68 *)heap_alloc((void *)0x10);
    if (pcVar1 == (cls_105d6d68 *)0x0) {
      pcVar1 = (cls_105d6d68 *)0x0;
    }
    else {
      cls_105d6d68_new(pcVar1);
    }
    ((cls_1059e458 *)param_1)->field1_0x4 = (uintptr_t)((void *)pcVar1);
    pcVar1->field_0xc = (uintptr_t)((void *)param_1);
  }
  return (cls_1059e458 *)param_1;
}
