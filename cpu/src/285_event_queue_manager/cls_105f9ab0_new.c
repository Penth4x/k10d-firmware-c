/* @k10d cls_105f9ab0_new @ 0x1052b334
 * name: verified (structural evidence: heap_alloc(0x418) when NULL; stores vtable 0x105f9ab0; returns param_1)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105f9ab0 (vtable 0x105f9ab0, 0x418 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x418) when NULL; stores vtable 0x105f9ab0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105f9ab0_new(cls_105f9ab0 *param_1)

{
  int iVar1;
  uint32_t *puVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != (cls_105f9ab0 *)0x0) ||
     (param_1 = (cls_105f9ab0 *)heap_alloc((void *)0x418), param_1 != (cls_105f9ab0 *)0x0)) {
    param_1->field_0x414 = (uintptr_t)(&DAT_105f9ab0/*ROM*/);
    param_1->field_0x0 = 0;
    param_1->field_0x16c = 0;
    param_1->field_0x224 = 0;
    param_1->field_0x410 = 0;
    iVar3 = 0;
    iVar1 = 0;
    iVar4 = 0;
    do {
      puVar2 = (uint32_t *)(&param_1->field_0x4 + iVar1);
      *(uint8_t *)(puVar2 + 1) = 0;
      *puVar2 = 0xffff;
      *(uint8_t *)((int)puVar2 + iVar3 + 0x14) = 0;
      *(uint32_t *)((int)puVar2 + iVar4 + 8) = 0xffff;
      *(uint8_t *)((int)puVar2 + iVar3 + 0x14) = 0;
      *(uint32_t *)((int)puVar2 + iVar4 + 8) = 0xffff;
      *(uint8_t *)((int)puVar2 + iVar3 + 0x14) = 0;
      *(uint32_t *)((int)puVar2 + iVar4 + 8) = 0xffff;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x18;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 0xf);
    iVar3 = 2;
    iVar1 = 0;
    do {
      puVar2 = (uint32_t *)(&param_1->field_0x170 + iVar1);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2 = (uint32_t *)(&param_1->field_0x17c + iVar1);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2 = (uint32_t *)(&param_1->field_0x188 + iVar1);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2 = (uint32_t *)(&param_1->field_0x194 + iVar1);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2 = (uint32_t *)(&param_1->field_0x1a0 + iVar1);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      puVar2[2] = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 0x3c;
    } while (-1 < iVar3);
    iVar3 = 2;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)&param_1->field_0x228 + iVar1) = 0xffff;
      *(uint32_t *)((int)(&param_1->field_0x228 + iVar1) + 4) = 0;
      *(uint32_t *)((int)&param_1->field_0x230 + iVar1) = 0xffff;
      *(uint32_t *)((int)(&param_1->field_0x230 + iVar1) + 4) = 0;
      *(uint32_t *)((int)&param_1->field_0x238 + iVar1) = 0xffff;
      *(uint32_t *)((int)(&param_1->field_0x238 + iVar1) + 4) = 0;
      *(uint32_t *)((int)&param_1->field_0x240 + iVar1) = 0xffff;
      *(uint32_t *)((int)(&param_1->field_0x240 + iVar1) + 4) = 0;
      *(uint32_t *)((int)&param_1->field_0x248 + iVar1) = 0xffff;
      *(uint32_t *)((int)(&param_1->field_0x248 + iVar1) + 4) = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 0x28;
    } while (-1 < iVar3);
    iVar3 = 0x16;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)&param_1->field_0x2a0 + iVar1) = 0xffff;
      *(uint32_t *)((int)(&param_1->field_0x2a0 + iVar1) + 4) = 0;
      *(uint32_t *)((int)&param_1->field_0x2a8 + iVar1) = 0xffff;
      *(uint32_t *)((int)(&param_1->field_0x2a8 + iVar1) + 4) = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar3);
  }
  return;
}
