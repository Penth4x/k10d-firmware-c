/* @k10d cls_1059e430_new @ 0x10427d7a
 * name: verified (structural evidence: heap_alloc(0x104) when NULL; stores vtable 0x1059e430; returns param_1)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e430 (vtable 0x1059e430, 0x104 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x104) when NULL; stores vtable 0x1059e430; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e3e0 * cls_1059e430_new(cls_1059e430 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (cls_1059e430 *)0x0) ||
     (param_1 = (cls_1059e430 *)heap_alloc((void *)0x104), (cls_1059e3e0 *)param_1 != (cls_1059e3e0 *)0x0))
  {
    cls_1059e3e0_new((cls_1059e3e0 *)param_1);
    ((cls_1059e3e0 *)param_1)->field_0x0 = (uintptr_t)((void *)0x1059e430/*ROM*/);
    iVar2 = 7;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)&((cls_1059e3e0 *)param_1)->field1_0x4 + iVar1) = 0;
      *(uint32_t *)(&((cls_1059e3e0 *)param_1)->field_0x84 + iVar1) = 0;
      *(uint32_t *)(&((cls_1059e3e0 *)param_1)->field_0x8 + iVar1) = 0;
      *(uint32_t *)(&((cls_1059e3e0 *)param_1)->field_0x88 + iVar1) = 0;
      *(uint32_t *)(&((cls_1059e3e0 *)param_1)->field_0xc + iVar1) = 0;
      *(uint32_t *)(&((cls_1059e3e0 *)param_1)->field_0x8c + iVar1) = 0;
      *(uint32_t *)(&((cls_1059e3e0 *)param_1)->field_0x10 + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e3e0 *)((int)param_1 + 0x90))->field_0x0 + iVar1) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return (cls_1059e3e0 *)param_1;
}
