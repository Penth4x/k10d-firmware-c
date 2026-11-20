/* @k10d init_composite_object_members_104fb166 @ 0x104fb166
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes approximately 30 member objects within a composite structure,
 *   linking them via pointers.
 * summary:
 *   The function acts as a complex initializer for a large object (likely cls_105d436c). It
 *   repeatedly calls heap_alloc to create numerous sub-objects of varying sizes (from 4 to
 *   0x330 bytes), initializes them with specific class constructors (e.g.,
 *   cls_105d4190_new, cls_105d4ce8_new), and stores their pointers into the parent object's
 *   memory layout. It also establishes cross-references between these sub-objects and
 *   copies values from helper functions like get_cls_105a7db4_singleton and
 *   get_or_create_sram_object_104ecffc into specific member fields.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_composite_object_members_104fb166(cls_105d436c *param_1,uint32_t param_2)

{
  int *piVar1;
  void *puVar2;
  int iVar3;
  int iVar4;
  cls_1059d9d0 *pcVar5;
  cls_1059d1d8 *pcVar6;
  cls_1059df50 *pcVar7;
  
  piVar1 = (int *)heap_alloc((void *)0x120);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105d4190_new(piVar1);
  }
  param_1->field_0x14 = (uintptr_t)((void *)piVar1);
  (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,0);
  puVar2 = (void *)heap_alloc((void *)8);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    cls_105d4ce8_new(puVar2);
  }
  param_1->field_0x28 = (uintptr_t)(puVar2);
  iVar3 = get_cls_105a7db4_singleton();
  *(uint32_t *)((char*)puVar2 + 4) = *(uint32_t *)(iVar3 + 8);
  iVar3 = *(int *)param_1->field_0x28;
  (((vtbl_entry*)(iVar3))[2].fn)((int)param_1->field_0x28 + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  iVar3 = heap_alloc((void *)0x24);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105d5104_new((uint32_t *)(iVar3));
  }
  param_1->field_0x48 = iVar3;
  iVar4 = get_cls_105a7db4_singleton();
  *(uint32_t *)(iVar3 + 0x18) = *(uint32_t *)(iVar4 + 8);
  iVar4 = param_1->field_0x48;
  iVar3 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)(iVar4 + 0x14) = *(uint32_t *)(iVar3 + 0x1c);
  iVar3 = *(int *)param_1->field_0x48;
  (((vtbl_entry*)(iVar3))[2].fn)((int)param_1->field_0x48 + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  piVar1 = (int *)heap_alloc((void *)0x4c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105c2e90_new(piVar1);
  }
  param_1->field_0x74 = (uintptr_t)(piVar1);
  (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,0);
  piVar1 = (int *)get_or_create_sram_object_104ecffc();
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,param_2);
  puVar2 = (void *)heap_alloc((void *)0x2c);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    cls_105c2e20_new(puVar2);
  }
  param_1->field_0x8 = (uintptr_t)(puVar2);
  *(void **)((char*)puVar2 + 0xc) = (void *)((uintptr_t)(param_1->field_0x14));
  iVar3 = *(int *)param_1->field_0x8;
  (((vtbl_entry*)(iVar3))[2].fn)((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  puVar2 = (void *)heap_alloc((void *)0x30);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    cls_105c3a34_new(puVar2);
  }
  param_1->field_0x10 = (uintptr_t)(puVar2);
  *(void **)((char*)puVar2 + 0x14) = (void *)((uintptr_t)(param_1->field_0x14));
  iVar3 = *(int *)param_1->field_0x10;
  (((vtbl_entry*)(iVar3))[2].fn)((int)param_1->field_0x10 + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  puVar2 = (void *)heap_alloc((void *)0x90);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    cls_105d48e4_new(puVar2);
  }
  param_1->field_0x1c = (uintptr_t)(puVar2);
  *(void **)((char*)puVar2 + 0x18) = (void *)((uintptr_t)(param_1->field_0x14));
  iVar3 = *(int *)param_1->field_0x1c;
  (((vtbl_entry*)(iVar3))[2].fn)
            ((void *)((int)param_1->field_0x1c + (int)((vtbl_entry*)(iVar3))[2].adj),0);
  puVar2 = (void *)heap_alloc((void *)0x44);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    cls_105d4c70_new(puVar2);
  }
  param_1->field_0x24 = (uintptr_t)(puVar2);
  *(void **)((char*)puVar2 + 0x18) = (void *)((uintptr_t)(param_1->field_0x14));
  iVar3 = *(int *)param_1->field_0x24;
  (((vtbl_entry*)(iVar3))[2].fn)
            ((void *)((int)param_1->field_0x24 + (int)((vtbl_entry*)(iVar3))[2].adj),0);
  puVar2 = (void *)heap_alloc((void *)0x2c);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    cls_105d4d10_new(puVar2);
  }
  param_1->field_0x2c = (uintptr_t)(puVar2);
  *(void **)((char*)puVar2 + 0x10) = (void *)((uintptr_t)(param_1->field_0x14));
  iVar3 = *(int *)param_1->field_0x2c;
  (((vtbl_entry*)(iVar3))[2].fn)
            ((void *)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[2].adj),0);
  puVar2 = (void *)heap_alloc((void *)0x44);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    cls_105d4d68_new(puVar2);
  }
  param_1->field_0x30 = (uintptr_t)(puVar2);
  *(void **)((char*)puVar2 + 0x10) = (void *)((uintptr_t)(param_1->field_0x14));
  iVar3 = *(int *)param_1->field_0x30;
  (((vtbl_entry*)(iVar3))[2].fn)
            ((void *)((int)param_1->field_0x30 + (int)((vtbl_entry*)(iVar3))[2].adj),0);
  piVar1 = (int *)heap_alloc((void *)0x1c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105d5370_new(piVar1);
  }
  param_1->field_0x58 = (uintptr_t)(piVar1);
  (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,0);
  pcVar5 = (cls_1059d9d0 *)heap_alloc((void *)0xc0);
  if (pcVar5 == (cls_1059d9d0 *)0x0) {
    pcVar5 = (cls_1059d9d0 *)0x0;
  }
  else {
    cls_1059d9d0_new(pcVar5);
  }
  param_1->field_0x70 = (uintptr_t)(pcVar5);
  pcVar6 = (cls_1059d1d8 *)heap_alloc((void *)0xf8);
  if (pcVar6 == (cls_1059d1d8 *)0x0) {
    pcVar6 = (cls_1059d1d8 *)0x0;
  }
  else {
    cls_1059d1d8_new(pcVar6);
  }
  param_1->field_0x6c = (uintptr_t)(pcVar6);
  pcVar6->field_0x24 = param_1->field_0x14;
  *(uint32_t *)(param_1->field_0x6c + 0x30) = param_1->field_0x70;
  *(void **)(param_1->field_0x6c + 0x28) = (void *)((uintptr_t)(param_1->field_0x30));
  *(void **)(param_1->field_0x6c + 0x38) = (void *)((uintptr_t)(param_1->field_0x28));
  *(uint32_t *)(param_1->field_0x6c + 0x3c) = param_1->field_0x48;
  iVar4 = param_1->field_0x6c;
  iVar3 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)(iVar4 + 0x34) = *(uint32_t *)(iVar3 + 8);
  *(uint32_t *)(param_1->field_0x6c + 0x40) = param_1->field_0x58;
  iVar3 = *(int *)param_1->field_0x6c;
  (((vtbl_entry*)(iVar3))[2].fn)((int)param_1->field_0x6c + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  puVar2 = (void *)heap_alloc((void *)0x2c);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    cls_105d4e80_new(puVar2);
  }
  param_1->field_0x38 = (uintptr_t)(puVar2);
  *(void **)((char*)puVar2 + 0x10) = (void *)((uintptr_t)(param_1->field_0x14));
  iVar3 = *(int *)param_1->field_0x38;
  (((vtbl_entry*)(iVar3))[2].fn)
            ((void *)((int)param_1->field_0x38 + (int)((vtbl_entry*)(iVar3))[2].adj),0);
  iVar3 = heap_alloc((void *)0x50);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105d4f74_new((uint32_t *)(iVar3));
  }
  param_1->field_0x40 = iVar3;
  *(void **)(iVar3 + 0x1c) = (void *)((uintptr_t)(param_1->field_0x14));
  iVar3 = *(int *)param_1->field_0x40;
  (((vtbl_entry*)(iVar3))[2].fn)((int)param_1->field_0x40 + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  piVar1 = (int *)heap_alloc((void *)4);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105d5398_new(piVar1);
  }
  param_1->field_0x5c = (uintptr_t)(piVar1);
  (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,0);
  iVar3 = heap_alloc((void *)0x2c);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105d518c_new((uint32_t *)(iVar3));
  }
  param_1->field_0x60 = iVar3;
  *(void **)(iVar3 + 0x10) = (void *)((uintptr_t)(param_1->field_0x14));
  iVar3 = *(int *)param_1->field_0x60;
  (((vtbl_entry*)(iVar3))[2].fn)((int)param_1->field_0x60 + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  piVar1 = (int *)heap_alloc((void *)0x60);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105f9a64_new(piVar1);
  }
  param_1->field_0x78 = (uintptr_t)(piVar1);
  (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,0);
  iVar3 = heap_alloc((void *)0x24);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_1061e0fc_new((uint32_t *)(iVar3));
  }
  param_1->field_0x7c = iVar3;
  *(uint32_t *)(iVar3 + 0x20) = param_1->field_0x78;
  iVar3 = *(int *)param_1->field_0x7c;
  (((vtbl_entry*)(iVar3))[2].fn)((int)param_1->field_0x7c + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  pcVar7 = (cls_1059df50 *)heap_alloc((void *)0x34);
  if (pcVar7 == (cls_1059df50 *)0x0) {
    pcVar7 = (cls_1059df50 *)0x0;
  }
  else {
    cls_1059df50_new(pcVar7);
  }
  param_1->field_0x4 = (uintptr_t)((void *)pcVar7);
  pcVar7->field_0x24 = param_1->field_0x8;
  iVar3 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar3))[2].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar3))[2].adj),0);
  puVar2 = (void *)heap_alloc((void *)0x40);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    cls_105c39a4_new(puVar2);
  }
  param_1->field_0xc = (uintptr_t)(puVar2);
  *(void **)((char*)puVar2 + 0x24) = (void *)((uintptr_t)(param_1->field_0x10));
  puVar2 = (void *)((uintptr_t)(param_1->field_0xc));
  iVar3 = get_or_create_sram_object_104ecffc();
  *(uint32_t *)((char*)puVar2 + 0x28) = *(uint32_t *)(iVar3 + 4);
  puVar2 = (void *)((uintptr_t)(param_1->field_0xc));
  iVar3 = get_or_create_sram_object_104ecffc();
  *(uint32_t *)((char*)puVar2 + 0x2c) = *(uint32_t *)(iVar3 + 8);
  *(uint32_t *)(param_1->field_0xc + 0x30) = param_1->field_0x5c;
  iVar3 = *(int *)param_1->field_0xc;
  (((vtbl_entry*)(iVar3))[2].fn)
            ((void *)((int)param_1->field_0xc + (int)((vtbl_entry*)(iVar3))[2].adj),0);
  puVar2 = (void *)heap_alloc((void *)0x34);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    cls_105d4ed8_new(puVar2);
  }
  param_1->field_0x3c = (uintptr_t)(puVar2);
  *(uint32_t *)((char*)puVar2 + 0x24) = param_1->field_0x40;
  *(void **)(param_1->field_0x3c + 0x28) = (void *)((uintptr_t)(param_1->field_0x1c));
  iVar3 = *(int *)param_1->field_0x3c;
  (((vtbl_entry*)(iVar3))[2].fn)
            ((void *)((int)param_1->field_0x3c + (int)((vtbl_entry*)(iVar3))[2].adj),0);
  puVar2 = (void *)heap_alloc((void *)0x44);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    cls_105d49dc_new(puVar2);
  }
  param_1->field_0x20 = (uintptr_t)(puVar2);
  *(void **)((char*)puVar2 + 0x30) = (void *)((uintptr_t)(param_1->field_0x24));
  iVar3 = *(int *)param_1->field_0x20;
  (((vtbl_entry*)(iVar3))[2].fn)
            ((void *)((int)param_1->field_0x20 + (int)((vtbl_entry*)(iVar3))[2].adj),0);
  iVar3 = heap_alloc((void *)0x330);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105d51fc_new((uint32_t *)(iVar3));
  }
  param_1->field_0x4c = iVar3;
  iVar4 = get_or_create_camera_object();
  *(uint32_t *)(iVar3 + 0x300) = *(uint32_t *)(iVar4 + 0xc);
  iVar4 = param_1->field_0x4c;
  iVar3 = get_or_create_camera_object();
  *(uint32_t *)(iVar4 + 0x2fc) = *(uint32_t *)(iVar3 + 4);
  iVar4 = param_1->field_0x4c;
  iVar3 = get_or_create_camera_object();
  *(uint32_t *)(iVar4 + 0x304) = *(uint32_t *)(iVar3 + 8);
  iVar3 = *(int *)param_1->field_0x4c;
  (((vtbl_entry*)(iVar3))[2].fn)((int)param_1->field_0x4c + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  puVar2 = (void *)heap_alloc((void *)0x34);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    cls_105d47d4_new(puVar2);
  }
  param_1->field_0x18 = (uintptr_t)(puVar2);
  *(void **)((char*)puVar2 + 0x24) = (void *)((uintptr_t)(param_1->field_0x1c));
  *(uint32_t *)(param_1->field_0x18 + 0x28) = param_1->field_0x40;
  iVar3 = *(int *)param_1->field_0x18;
  (((vtbl_entry*)(iVar3))[2].fn)
            ((void *)((int)param_1->field_0x18 + (int)((vtbl_entry*)(iVar3))[2].adj),0);
  iVar3 = heap_alloc((void *)0x34);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105d4108_new((uint32_t *)(iVar3));
  }
  param_1->field_0x64 = iVar3;
  *(uint32_t *)(iVar3 + 0x24) = param_1->field_0x40;
  *(uint32_t *)(param_1->field_0x64 + 0x28) = param_1->field_0x60;
  iVar3 = *(int *)param_1->field_0x64;
  (((vtbl_entry*)(iVar3))[2].fn)((int)param_1->field_0x64 + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  puVar2 = (void *)heap_alloc((void *)0x30);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    cls_105d4e10_new(puVar2);
  }
  param_1->field_0x34 = (uintptr_t)(puVar2);
  *(void **)((char*)puVar2 + 0x24) = (void *)((uintptr_t)(param_1->field_0x38));
  iVar3 = *(int *)param_1->field_0x34;
  (((vtbl_entry*)(iVar3))[2].fn)
            ((void *)((int)param_1->field_0x34 + (int)((vtbl_entry*)(iVar3))[2].adj),0);
  iVar3 = heap_alloc((void *)0x30);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105d5094_new((uint32_t *)(iVar3));
  }
  param_1->field_0x44 = iVar3;
  *(void **)(iVar3 + 0x24) = (void *)((uintptr_t)(param_1->field_0x1c));
  iVar3 = *(int *)param_1->field_0x44;
  (((vtbl_entry*)(iVar3))[2].fn)((int)param_1->field_0x44 + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  iVar3 = heap_alloc((void *)0x34);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105d5300_new((uint32_t *)(iVar3));
  }
  param_1->field_0x50 = iVar3;
  *(void **)(iVar3 + 0x24) = (void *)((uintptr_t)(param_1->field_0x1c));
  *(uint32_t *)(param_1->field_0x50 + 0x28) = param_1->field_0x40;
  iVar3 = *(int *)param_1->field_0x50;
  (((vtbl_entry*)(iVar3))[2].fn)((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  iVar3 = heap_alloc((void *)0x30);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105d5470_new((uint32_t *)(iVar3));
  }
  param_1->field_0x54 = iVar3;
  *(uint32_t *)(iVar3 + 0x24) = param_1->field_0x40;
  iVar3 = *(int *)param_1->field_0x54;
  (((vtbl_entry*)(iVar3))[2].fn)((int)param_1->field_0x54 + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  iVar3 = heap_alloc((void *)0x40);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105d3f20_new((uint32_t *)(iVar3));
  }
  param_1->field_0x68 = iVar3;
  *(void **)(iVar3 + 0x24) = (void *)((uintptr_t)(param_1->field_0x1c));
  *(uint32_t *)(param_1->field_0x68 + 0x28) = param_1->field_0x40;
  *(uint32_t *)(param_1->field_0x68 + 0x2c) = param_1->field_0x60;
  *(uint32_t *)(param_1->field_0x68 + 0x30) = param_1->field_0x54;
  *(uint32_t *)(param_1->field_0x68 + 0x34) = param_1->field_0x50;
  iVar3 = *(int *)param_1->field_0x68;
  (((vtbl_entry*)(iVar3))[2].fn)((int)param_1->field_0x68 + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  return;
}
