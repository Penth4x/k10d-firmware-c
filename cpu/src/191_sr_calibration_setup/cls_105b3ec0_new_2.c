/* @k10d cls_105b3ec0_new_2 @ 0x1048ea7e
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

ushort * cls_105b3ec0_new_2(ushort *param_1,int param_2,uint32_t param_3,uint32_t param_4,
                           ushort param_5,ushort param_6,uint8_t param_7,uint8_t param_8)

{
  ushort uVar1;
  ushort uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  int iVar5;
  uintptr_t sp;
  uint8_t *puVar6;
  uint8_t *puVar7;
  uint8_t auStack_2c [20];
  
  puVar6 = auStack_2c;
  puVar7 = auStack_2c;
  if ((param_1 != (ushort *)0x0) ||
     (param_1 = (ushort *)heap_alloc((void *)0x30), puVar7 = puVar6, param_1 != (ushort *)0x0)) {
    puVar7[3] = param_7;
    puVar7[7] = param_8;
    cls_105b3cdc_new_2(param_1,param_2,param_3,param_4,puVar7[3],puVar7[7]);
    *(void **)(param_1 + 0x10) = &DAT_105b3ec0/*ROM*/;
    param_1[0x12] = param_5;
    param_1[0x13] = param_6;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    uVar2 = param_1[1];
    uVar3 = *(uint8_t *)(param_1 + 0xc);
    uVar4 = *(uint8_t *)((int)param_1 + 0x19);
    uVar1 = *param_1;
    *(uint16_t *)(puVar7 + 2) = 0x103;
    puVar7[7] = uVar3;
    puVar7[0xb] = uVar4;
    iVar5 = cls_105b3ea0_new_2(0,param_1 + 2,(uint)uVar1,(uint)uVar2,*(uint16_t *)(puVar7 + 2),
                               puVar7[7],puVar7[0xb]);
    *(int *)(param_1 + 0x14) = iVar5;
    uVar1 = *param_1;
    uVar2 = param_1[1];
    *(uint16_t *)(puVar7 + 2) = 8;
    *(uint16_t *)(puVar7 + 6) = 0x18;
    *(uint16_t *)(puVar7 + 10) = 2;
    puVar7[0xf] = 1;
    puVar7[0x13] = 0;
    iVar5 = cls_105b3d9c_new_2(0,param_1 + 2,(uint)uVar1,(uint)uVar2,*(uint16_t *)(puVar7 + 2),
                               *(uint16_t *)(puVar7 + 6),*(uint16_t *)(puVar7 + 10),puVar7[0xf],
                               puVar7[0x13]);
    *(int *)(param_1 + 0x16) = iVar5;
  }
  return param_1;
}
