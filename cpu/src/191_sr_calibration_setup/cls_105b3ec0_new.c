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

ushort * cls_105b3ec0_new(ushort *param_1)

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
  if ((param_1 != (ushort *)0x0) ||
     (param_1 = (ushort *)heap_alloc((void *)0x30), puVar5 = puVar4, param_1 != (ushort *)0x0)) {
    cls_105b3cdc_new(param_1);
    *(void **)(param_1 + 0x10) = &DAT_105b3ec0/*ROM*/;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    uVar1 = *param_1;
    uVar2 = param_1[1];
    *(uint16_t *)(puVar5 + 2) = 0x103;
    puVar5[7] = 1;
    puVar5[0xb] = 0;
    iVar3 = cls_105b3ea0_new_2(0,param_1 + 2,(uint)uVar1,(uint)uVar2,*(uint16_t *)(puVar5 + 2),
                               puVar5[7],puVar5[0xb]);
    *(int *)(param_1 + 0x14) = iVar3;
    uVar1 = *param_1;
    uVar2 = param_1[1];
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x18;
    *(uint16_t *)(puVar5 + 10) = 2;
    puVar5[0xf] = 1;
    puVar5[0x13] = 0;
    iVar3 = cls_105b3d9c_new_2(0,param_1 + 2,(uint)uVar1,(uint)uVar2,*(uint16_t *)(puVar5 + 2),
                               *(uint16_t *)(puVar5 + 6),*(uint16_t *)(puVar5 + 10),puVar5[0xf],
                               puVar5[0x13]);
    *(int *)(param_1 + 0x16) = iVar3;
  }
  return param_1;
}
