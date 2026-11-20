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

cls_105b709c * cls_105b709c_new(cls_105b709c *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  uint *puVar4;
  uint8_t auStack_10 [4];
  
  puVar3 = auStack_10;
  puVar4 = (uint *)auStack_10;
  if ((param_1 != (cls_105b709c *)0x0) ||
     (param_1 = (cls_105b709c *)heap_alloc((void *)0x20), puVar4 = (uint *)puVar3,
     param_1 != (cls_105b709c *)0x0)) {
    pvVar2 = *(void **)(&DAT_800490b8/*SDRAM*/ + param_2 * 4);
    iVar1 = param_2 * 0x10;
    *puVar4 = *(uint *)(iVar1 + 0x105b7054/*ROM*/) | *(uint *)(iVar1 + 0x105b7058/*ROM*/);
    cls_105b7448_new((cls_105b7448 *)param_1,pvVar2,0,0,*puVar4);
    param_1->field_0x10 = 0x105b709c/*ROM*/;
    param_1->field_0x14 = *(uint32_t *)(iVar1 + 0x105b704c/*ROM*/);
    param_1->field_0x18 = *(uint32_t *)(iVar1 + 0x105b7050/*ROM*/);
    param_1->field_0x1c = *(uint32_t *)(iVar1 + 0x105b7054/*ROM*/);
  }
  return param_1;
}
