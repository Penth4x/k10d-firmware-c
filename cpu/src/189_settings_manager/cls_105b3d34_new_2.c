/* @k10d cls_105b3d34_new_2 @ 0x1048d094
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105b3d34; returns param_1)
 * unit: 189_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3d34 (vtable 0x105b3d34, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105b3d34; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t *
cls_105b3d34_new_2(uint16_t *param_1,int param_2,uint32_t param_3,uint32_t param_4,
                  uint32_t param_5,uint16_t param_6,uint16_t param_7,uint16_t param_8,
                  uint8_t param_9,uint8_t param_10)

{
  uint16_t *puVar1;
  uintptr_t sp;
  uint8_t *puVar2;
  uint8_t *puVar3;
  uint8_t auStack_20 [8];
  
  puVar2 = auStack_20;
  puVar3 = auStack_20;
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x34), puVar3 = puVar2, param_1 != (uint16_t *)0x0)) {
    puVar3[3] = param_9;
    puVar3[7] = param_10;
    cls_105b3cdc_new_2(param_1,param_2,param_3,param_4,puVar3[3],puVar3[7]);
    *(void **)(param_1 + 0x10) = &DAT_105b3d34/*ROM*/;
    *(uint32_t *)(param_1 + 0x12) = param_5;
    param_1[0x14] = param_6;
    param_1[0x15] = param_7;
    param_1[0x16] = param_8;
    puVar1 = (uint16_t *)heap_alloc((void *)0x2c);
    if (puVar1 == (uint16_t *)0x0) {
      puVar1 = (uint16_t *)0x0;
    }
    else {
      cls_105b3d9c_new(puVar1);
    }
    *(uint16_t **)(param_1 + 0x18) = puVar1;
  }
  return param_1;
}
