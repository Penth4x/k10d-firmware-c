/* @k10d cls_105b709c_new @ 0x104aab4c
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105b709c; returns param_1)
 * unit: 209_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b709c (vtable 0x105b709c, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105b709c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b709c_new(uint32_t *param_1,int param_2)

{
  void *pvVar1;
  uintptr_t sp;
  uint8_t *puVar2;
  uint *puVar3;
  uint8_t auStack_10 [4];
  
  puVar2 = auStack_10;
  puVar3 = (uint *)auStack_10;
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x20), puVar3 = (uint *)puVar2,
     param_1 != (uint32_t *)0x0)) {
    pvVar1 = *(void **)(&DAT_800490b8/*SDRAM*/ + param_2 * 4);
    param_2 = param_2 * 0x10;
    *puVar3 = *(uint *)(param_2 + 0x105b7054/*ROM*/) | *(uint *)(param_2 + 0x105b7058/*ROM*/);
    cls_105b7448_new(param_1,pvVar1,0,0,*puVar3);
    param_1[4] = 0x105b709c/*ROM*/;
    param_1[5] = *(uint32_t *)(param_2 + 0x105b704c/*ROM*/);
    param_1[6] = *(uint32_t *)(param_2 + 0x105b7050/*ROM*/);
    param_1[7] = *(uint32_t *)(param_2 + 0x105b7054/*ROM*/);
  }
  return param_1;
}
