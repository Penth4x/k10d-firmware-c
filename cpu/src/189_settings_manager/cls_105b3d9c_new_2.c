/* @k10d cls_105b3d9c_new_2 @ 0x1048d300
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x105b3d9c; returns param_1)
 * unit: 189_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3d9c (vtable 0x105b3d9c, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x105b3d9c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b3d9c_new_2(int param_1,void *param_2,uint32_t param_3,uint32_t param_4,
                      uint16_t param_5,uint16_t param_6,uint16_t param_7,uint8_t param_8,
                      uint8_t param_9)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t *puVar2;
  uint8_t auStack_20 [8];
  
  puVar1 = auStack_20;
  puVar2 = auStack_20;
  if ((param_1 != 0) ||
     (param_1 = heap_alloc((void *)0x2c), puVar2 = puVar1, (uint16_t *)param_1 != (uint16_t *)0x0)) {
    puVar2[3] = param_8;
    puVar2[7] = param_9;
    cls_105b3cdc_new_2((uint16_t *)param_1,(int)param_2,param_3,param_4,puVar2[3],puVar2[7]);
    *(void **)(param_1 + 0x20) = &DAT_105b3d9c/*ROM*/;
    *(uint16_t *)(param_1 + 0x24) = param_7;
    *(uint16_t *)(param_1 + 0x26) = param_5;
    *(uint16_t *)(param_1 + 0x28) = param_6;
  }
  return (int)(uint16_t *)param_1;
}
