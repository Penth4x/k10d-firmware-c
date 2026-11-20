/* @k10d cls_105b3ec0_new @ 0x1048e9d6
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105b3ec0; returns param_1)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3ec0 (vtable 0x105b3ec0, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105b3ec0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b3cdc * cls_105b3ec0_new(cls_105b3ec0 *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t *puVar5;
  uint8_t auStack_28 [20];
  
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  if ((param_1 != (cls_105b3ec0 *)0x0) ||
     (param_1 = (cls_105b3ec0 *)heap_alloc((void *)0x30), puVar5 = puVar4,
     (cls_105b3cdc *)param_1 != (cls_105b3cdc *)0x0)) {
    cls_105b3cdc_new((cls_105b3cdc *)param_1);
    ((cls_105b3cdc *)param_1)->field_0x20 = (uintptr_t)(&DAT_105b3ec0/*ROM*/);
    ((cls_105b3cdc *)param_1)->field14_0x24 = 0;
    ((cls_105b3cdc *)param_1)->field15_0x26 = 0;
    ((cls_105b3cdc *)param_1)->field16_0x28 = 0;
    ((cls_105b3cdc *)param_1)->field17_0x2c = 0;
    uVar1 = ((cls_105b3cdc *)param_1)->field_0x0;
    uVar2 = ((cls_105b3cdc *)param_1)->field_0x2;
    *(uint16_t *)(puVar5 + 2) = 0x103;
    puVar5[7] = 1;
    puVar5[0xb] = 0;
    iVar3 = cls_105b3ea0_new_2(0,&((cls_105b3cdc *)param_1)->field_0x4,(uint)uVar1,(uint)uVar2,
                               *(uint16_t *)(puVar5 + 2),puVar5[7],puVar5[0xb]);
    ((cls_105b3cdc *)param_1)->field16_0x28 = iVar3;
    uVar1 = ((cls_105b3cdc *)param_1)->field_0x0;
    uVar2 = ((cls_105b3cdc *)param_1)->field_0x2;
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x18;
    *(uint16_t *)(puVar5 + 10) = 2;
    puVar5[0xf] = 1;
    puVar5[0x13] = 0;
    iVar3 = cls_105b3d9c_new_2(0,&((cls_105b3cdc *)param_1)->field_0x4,(uint)uVar1,(uint)uVar2,
                               *(uint16_t *)(puVar5 + 2),*(uint16_t *)(puVar5 + 6),
                               *(uint16_t *)(puVar5 + 10),puVar5[0xf],puVar5[0x13]);
    ((cls_105b3cdc *)param_1)->field17_0x2c = iVar3;
  }
  return (cls_105b3cdc *)param_1;
}
