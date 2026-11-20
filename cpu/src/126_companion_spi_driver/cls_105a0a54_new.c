/* @k10d cls_105a0a54_new @ 0x1043fa18
 * name: verified (structural evidence: heap_alloc(0x50) when NULL; stores vtable 0x105a0a54; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0a54 (vtable 0x105a0a54, 0x50 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x50) when NULL; stores vtable 0x105a0a54; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105a0a54_new(cls_105a0a54 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (cls_105a0a54 *)0x0) ||
     (param_1 = (cls_105a0a54 *)heap_alloc((void *)0x50), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uintptr_t)((void *)0x105a0a54/*ROM*/);
    cls_105a2be0_new((cls_105a2be0 *)&((cls_1059e380 *)param_1)->field14_0x38);
    cls_105a2be0_new((cls_105a2be0 *)&((cls_1059e380 *)param_1)->field16_0x40);
    cls_105a2be0_new((cls_105a2be0 *)&((cls_1059e380 *)param_1)->field21_0x48);
    iVar3 = 3;
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field1_0x4 + iVar2) = 0;
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field2_0x8 + iVar2) = 0;
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field3_0xc + iVar2) = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar2 + 0xc;
    } while (-1 < iVar3);
    *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field4_0x10 + iVar2) = 0;
  }
  return (cls_1059e380 *)param_1;
}
