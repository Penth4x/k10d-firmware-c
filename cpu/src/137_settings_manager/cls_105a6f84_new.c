/* @k10d cls_105a6f84_new @ 0x104606de
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105a6f84; returns param_1)
 * unit: 137_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6f84 (vtable 0x105a6f84, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105a6f84; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105a6f84 * cls_105a6f84_new(cls_105a6f84 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (cls_105a6f84 *)0x0) ||
     (param_1 = (cls_105a6f84 *)heap_alloc((void *)0xc), param_1 != (cls_105a6f84 *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)param_1);
    param_1->field_0x0 = (uintptr_t)(&DAT_105a6f84/*ROM*/);
    iVar1 = 0;
    iVar2 = 1;
    do {
      (&param_1->field_0x4)[iVar1] = 0;
      (&param_1->field_0x5)[iVar1] = 0;
      (&param_1->field_0x6)[iVar1] = 0;
      (&param_1->field_0x7)[iVar1] = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar2);
  }
  return param_1;
}
