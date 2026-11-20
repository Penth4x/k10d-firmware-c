/* @k10d cls_105a06e8_new @ 0x1043cd32
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105a06e8; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a06e8 (vtable 0x105a06e8, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105a06e8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105a06e8_new(cls_105a06e8 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (cls_105a06e8 *)0x0) ||
     (param_1 = (cls_105a06e8 *)heap_alloc((void *)0x1c), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uintptr_t)((void *)0x105a06e8/*ROM*/);
    iVar2 = 1;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field1_0x4 + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field2_0x8 + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field3_0xc + iVar1) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0xc;
    } while (-1 < iVar2);
  }
  return (cls_1059e380 *)param_1;
}
