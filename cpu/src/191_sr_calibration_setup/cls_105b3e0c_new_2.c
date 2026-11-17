/* @k10d cls_105b3e0c_new_2 @ 0x1048d7b0
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105b3e0c; returns param_1)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3e0c (vtable 0x105b3e0c, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105b3e0c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t *
cls_105b3e0c_new_2(uint16_t *param_1,int param_2,uint32_t param_3,uint32_t param_4,
                  uint32_t param_5,uint8_t param_6,uint8_t param_7)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t *puVar2;
  uint8_t auStack_20 [8];
  
  puVar1 = auStack_20;
  puVar2 = auStack_20;
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x28), puVar2 = puVar1, param_1 != (uint16_t *)0x0)) {
    puVar2[3] = param_6;
    puVar2[7] = param_7;
    cls_105b3cdc_new_2(param_1,param_2,param_3,param_4,puVar2[3],puVar2[7]);
    *(void **)(param_1 + 0x10) = &DAT_105b3e0c/*ROM*/;
    *(uint32_t *)(param_1 + 0x12) = param_5;
  }
  return param_1;
}
