/* @k10d cls_105a0468_new @ 0x1043b9bc
 * name: verified (structural evidence: heap_alloc(0x248) when NULL; stores vtable 0x105a0468; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0468 (vtable 0x105a0468, 0x248 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x248) when NULL; stores vtable 0x105a0468; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105a0468_new(cls_105a0468 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (cls_105a0468 *)0x0) ||
     (param_1 = (cls_105a0468 *)heap_alloc((void *)0x248), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0))
  {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uintptr_t)((void *)0x105a0468/*ROM*/);
    cls_105a2be0_new((cls_105a2be0 *)&((cls_1059e380 *)param_1)->field366_0x1e0);
    cls_105a2be0_new((cls_105a2be0 *)&((cls_1059e380 *)param_1)->field371_0x1e8);
    cls_105a2be0_new((cls_105a2be0 *)&((cls_1059e380 *)param_1)->field376_0x1f0);
    cls_105a2be0_new((cls_105a2be0 *)&((cls_1059e380 *)param_1)->field381_0x1f8);
    cls_105a2be0_new((cls_105a2be0 *)&((cls_1059e380 *)param_1)->field_0x200);
    cls_105a2be0_new((cls_105a2be0 *)&((cls_1059e380 *)param_1)->field394_0x208);
    cls_105a2be0_new((cls_105a2be0 *)&((cls_1059e380 *)param_1)->field399_0x210);
    cls_105a2be0_new((cls_105a2be0 *)&((cls_1059e380 *)param_1)->field404_0x218);
    cls_105a2be0_new((cls_105a2be0 *)&((cls_1059e380 *)param_1)->field409_0x220);
    iVar1 = 0;
    iVar2 = 0x74;
    do {
      iVar3 = iVar2;
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field1_0x4 + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field2_0x8 + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field3_0xc + iVar1) = 0;
      iVar2 = iVar3 + -3;
      iVar1 = iVar1 + 0xc;
    } while (-1 < iVar2);
    iVar3 = iVar3 + -1;
    do {
      *(uint32_t *)((int)&((cls_1059e380 *)param_1)->field1_0x4 + iVar1) = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar3);
    ((cls_1059e380 *)param_1)->field414_0x228 = 0;
    ((cls_1059e380 *)param_1)->field415_0x229 = 0x70;
    ((cls_1059e380 *)param_1)->field416_0x22a = 0xef;
    ((cls_1059e380 *)param_1)->field417_0x22b = 0xff;
    ((cls_1059e380 *)param_1)->field418_0x22c = 0x7f;
    ((cls_1059e380 *)param_1)->field419_0x22d = 0xfe;
    ((cls_1059e380 *)param_1)->field420_0x22e = 0xe0;
    ((cls_1059e380 *)param_1)->field421_0x22f = 0x1f;
    ((cls_1059e380 *)param_1)->field422_0x230 = 0x7e;
    ((cls_1059e380 *)param_1)->field423_0x231 = 5;
    ((cls_1059e380 *)param_1)->field424_0x232 = 0xff;
    ((cls_1059e380 *)param_1)->field425_0x233 = 0xff;
    ((cls_1059e380 *)param_1)->field426_0x234 = 0xf3;
    ((cls_1059e380 *)param_1)->field427_0x235 = 0xff;
    ((cls_1059e380 *)param_1)->field428_0x236 = 0xff;
    ((cls_1059e380 *)param_1)->field429_0x237 = 1;
    ((cls_1059e380 *)param_1)->field430_0x238 = 0;
    ((cls_1059e380 *)param_1)->field431_0x239 = 0xf;
    ((cls_1059e380 *)param_1)->field432_0x23a = 0xf7;
    ((cls_1059e380 *)param_1)->field433_0x23b = 0;
    ((cls_1059e380 *)param_1)->field434_0x23c = 0;
    ((cls_1059e380 *)param_1)->field435_0x23d = 0xec;
    ((cls_1059e380 *)param_1)->field436_0x23e = 0x10;
    ((cls_1059e380 *)param_1)->field437_0x23f = 0;
    ((cls_1059e380 *)param_1)->field438_0x240 = 0xfe;
    ((cls_1059e380 *)param_1)->field439_0x241 = 4;
    ((cls_1059e380 *)param_1)->field440_0x242 = 0;
    ((cls_1059e380 *)param_1)->field441_0x243 = 0;
    ((cls_1059e380 *)param_1)->field442_0x244 = 0;
    ((cls_1059e380 *)param_1)->field443_0x245 = 0;
    ((cls_1059e380 *)param_1)->field444_0x246 = 0;
    ((cls_1059e380 *)param_1)->field445_0x247 = 0;
  }
  return (cls_1059e380 *)param_1;
}
