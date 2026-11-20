/* @k10d cls_105a08e0_new @ 0x1043e30a
 * name: verified (structural evidence: heap_alloc(0x58) when NULL; stores vtable 0x105a08e0; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a08e0 (vtable 0x105a08e0, 0x58 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x58) when NULL; stores vtable 0x105a08e0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105a08e0_new(cls_105a08e0 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (cls_105a08e0 *)0x0) ||
     (param_1 = (cls_105a08e0 *)heap_alloc((void *)0x58), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uintptr_t)((void *)0x105a08e0/*ROM*/);
    cls_105a2be0_new((cls_105a2be0 *)&((cls_1059e380 *)param_1)->field13_0x34);
    cls_105a2be0_new((cls_105a2be0 *)&((cls_1059e380 *)param_1)->field15_0x3c);
    ((cls_1059e380 *)param_1)->field20_0x44 = 0;
    ((cls_1059e380 *)param_1)->field21_0x48 = 0;
    ((cls_1059e380 *)param_1)->field22_0x4c = 0;
    ((cls_1059e380 *)param_1)->field23_0x50 = 0;
    ((cls_1059e380 *)param_1)->field24_0x54 = 0;
    iVar2 = 2;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field1_0x4 + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field2_0x8 + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field3_0xc + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field4_0x10 + iVar1) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return (cls_1059e380 *)param_1;
}
