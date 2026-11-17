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

void cls_105f9ab0_new(uint32_t *param_1)

{
  int iVar1;
  uint32_t *puVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x418), param_1 != (uint32_t *)0x0)) {
    param_1[0x105] = (uint32_t)&DAT_105f9ab0/*ROM*/;
    *param_1 = 0;
    param_1[0x5b] = 0;
    param_1[0x89] = 0;
    param_1[0x104] = 0;
    iVar3 = 0;
    iVar1 = 0;
    iVar4 = 0;
    do {
      puVar2 = (uint32_t *)((int)param_1 + iVar1 + 4);
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
      puVar2 = (uint32_t *)((int)param_1 + iVar1 + 0x170);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2 = (uint32_t *)((int)param_1 + iVar1 + 0x17c);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2 = (uint32_t *)((int)param_1 + iVar1 + 0x188);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2 = (uint32_t *)((int)param_1 + iVar1 + 0x194);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2 = (uint32_t *)((int)param_1 + iVar1 + 0x1a0);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      puVar2[2] = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 0x3c;
    } while (-1 < iVar3);
    iVar3 = 2;
    iVar1 = 0;
    do {
      puVar2 = (uint32_t *)((int)param_1 + iVar1 + 0x228);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      puVar2 = (uint32_t *)((int)param_1 + iVar1 + 0x230);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      puVar2 = (uint32_t *)((int)param_1 + iVar1 + 0x238);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      puVar2 = (uint32_t *)((int)param_1 + iVar1 + 0x240);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      puVar2 = (uint32_t *)((int)param_1 + iVar1 + 0x248);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 0x28;
    } while (-1 < iVar3);
    iVar3 = 0x16;
    iVar1 = 0;
    do {
      puVar2 = (uint32_t *)((int)param_1 + iVar1 + 0x2a0);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      puVar2 = (uint32_t *)((int)param_1 + iVar1 + 0x2a8);
      *puVar2 = 0xffff;
      puVar2[1] = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar3);
  }
  return;
}
