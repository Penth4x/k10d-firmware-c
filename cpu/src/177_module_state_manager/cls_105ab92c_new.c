/* @k10d cls_105ab92c_new @ 0x10485460
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105ab92c; returns param_1)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ab92c (vtable 0x105ab92c, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105ab92c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105ab92c_new(cls_105ab92c *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (cls_105ab92c *)0x0) ||
     (param_1 = (cls_105ab92c *)heap_alloc((void *)0x28), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105ab92c/*ROM*/);
    iVar2 = 1;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field1_0x4 + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field2_0x8 + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field3_0xc + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field4_0x10 + iVar1) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
    ((cls_1059e380 *)param_1)->field9_0x24 = (uintptr_t)((void *)0x0);
  }
  return (cls_1059e380 *)param_1;
}
