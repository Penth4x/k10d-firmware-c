/* @k10d init_camera_pipeline_objects @ 0x104ea82e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a suite of subsystem objects and buffers, storing pointers in
 *   the object structure.
 * summary:
 *   Allocates multiple heap objects (sizes 0xc8, 0x30, 0x102c, 0x18, 0x28, 0x44, 0x80,
 *   0x54) and two 0x20000-byte memory pool blocks. Initializes these objects via
 *   constructors and virtual calls, linking them together by storing pointers in the
 *   object's fields (offsets 0x4 to 0x3c). Finally, calls three helper functions
 *   (allocate_and_register_subobjects, initialize_object_subsystems_104eb426,
 *   initialize_object_subsystem_104eb5da) passing the object and its newly allocated
 *   components.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_camera_pipeline_objects(cls_105c26f0 *param_1)

{
  void *puVar1;
  void *puVar2;
  cls_105bce58 *pcVar3;
  cls_105bca40 *pcVar4;
  int iVar5;
  void *pvVar6;
  cls_105bd140 *pcVar7;
  cls_105bc4d8 *pcVar8;
  cls_105bc1c4 *pcVar9;
  void *puVar10;
  void *puVar11;
  void *puVar12;
  void *puVar13;
  void *puVar14;
  uintptr_t sp;
  uint32_t *puVar15;
  uint8_t auStack_34 [20];
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  puVar15 = (uint32_t *)auStack_34;
  uStack_10 = 1;
  puVar2 = (void *)heap_alloc((void *)200);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    alloc_and_zero_struct_104e3164(puVar2);
  }
  param_1->field_0x4 = (uintptr_t)(puVar2);
  pcVar3 = (cls_105bce58 *)heap_alloc((void *)0x30);
  if (pcVar3 == (cls_105bce58 *)0x0) {
    pcVar3 = (cls_105bce58 *)0x0;
  }
  else {
    cls_105bce58_new(pcVar3);
  }
  param_1->field_0x8 = (uintptr_t)((void *)pcVar3);
  if (pcVar3 != (cls_105bce58 *)0x0) {
    (*(code *)0x104e07f0/*ROM*/)(pcVar3,param_1->field_0x4);
  }
  pcVar4 = (cls_105bca40 *)heap_alloc((void *)0x102c);
  if (pcVar4 == (cls_105bca40 *)0x0) {
    pcVar4 = (cls_105bca40 *)0x0;
  }
  else {
    cls_105bca40_new(pcVar4);
  }
  param_1->field_0xc = (uintptr_t)((void *)pcVar4);
  if (pcVar4 != (cls_105bca40 *)0x0) {
    pcVar4[0x101].field_0x4 = param_1->field_0x4;
  }
  puVar2 = (void *)get_shared_sram_buffer();
  param_1->field_0x10 = (uintptr_t)(puVar2);
  if (puVar2 != 0) {
    if (param_1->field_0xc == 0) {
      puVar1 = (void *)0x0;
    }
    else {
      puVar1 = (void *)((uintptr_t)(param_1->field_0xc + 8));
    }
    *(void **)((char*)puVar2 + 0x80) = puVar1;
  }
  iVar5 = get_or_init_sram_block_104b3d52();
  if (iVar5 == 0) {
    uStack_c = 0;
  }
  else {
    uStack_c = call_two_helpers_and_return_104b3df8();
  }
  pvVar6 = (void *)get_system_heap();
  puVar2 = (void *)heap_alloc((void *)0x18);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    alloc_and_zero_small_struct_104e125e(puVar2);
  }
  param_1->field_0x14 = (uintptr_t)(puVar2);
  if (pvVar6 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = mempool_get_block(pvVar6,(void *)0x20000,3);
  }
  puVar2 = (void *)((uintptr_t)(param_1->field_0x14));
  if (puVar2 != 0) {
    *(uint8_t *)((int)puVar15 + 3) = 1;
    uStack_10 = (*(code *)0x104e1294/*ROM*/)(puVar2,iVar5,iVar5 + 0x10000,0x10000);
  }
  puVar2 = (void *)heap_alloc((void *)0x18);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    alloc_and_zero_small_struct_104e125e(puVar2);
  }
  param_1->field_0x18 = (uintptr_t)(puVar2);
  if (pvVar6 != 0) {
    iVar5 = mempool_get_block(pvVar6,(void *)0x20000,3);
  }
  puVar2 = (void *)((uintptr_t)(param_1->field_0x18));
  if (puVar2 != 0) {
    *(uint8_t *)((int)puVar15 + 3) = 1;
    uStack_10 = (*(code *)0x104e1294/*ROM*/)(puVar2,iVar5,iVar5 + 0x10000,0x10000);
  }
  puVar2 = (void *)heap_alloc((void *)0x28);
  if (puVar2 == 0) {
    puVar2 = (void *)0x0;
  }
  else {
    allocate_and_zero_struct_104e0340(puVar2);
  }
  param_1->field_0x30 = (uintptr_t)(puVar2);
  pcVar7 = (cls_105bd140 *)heap_alloc((void *)0x44);
  if (pcVar7 == (cls_105bd140 *)0x0) {
    pcVar7 = (cls_105bd140 *)0x0;
  }
  else {
    cls_105bd140_new(pcVar7);
  }
  param_1->field_0x34 = (uintptr_t)((void *)pcVar7);
  if (pcVar7 != (cls_105bd140 *)0x0) {
    (*(code *)0x104e0d3a/*ROM*/)(pcVar7,param_1->field_0x18,uStack_c);
  }
  puVar2 = (void *)((uintptr_t)(param_1->field_0x8));
  if (puVar2 != 0) {
    puVar10 = (void *)((uintptr_t)(param_1->field_0x30));
    puVar11 = (void *)((uintptr_t)(param_1->field_0x14));
    puVar1 = (void *)((uintptr_t)(param_1->field_0x34));
    puVar13 = (void *)((uintptr_t)(param_1->field_0xc));
    *puVar15 = param_1->field_0x10;
    puVar15[1] = (uintptr_t)(puVar1);
    puVar15[2] = (uintptr_t)(puVar13);
    (*(code *)0x104e07ca/*ROM*/)(puVar2,uStack_c,puVar10,puVar11);
  }
  if (param_1->field_0xc != 0) {
    (*(code *)0x104e0620/*ROM*/)(param_1->field_0xc,param_1->field_0x10);
  }
  pcVar8 = (cls_105bc4d8 *)heap_alloc((void *)0x80);
  if (pcVar8 == (cls_105bc4d8 *)0x0) {
    pcVar8 = (cls_105bc4d8 *)0x0;
  }
  else {
    cls_105bc4d8_new(pcVar8);
  }
  param_1->field_0x38 = (uintptr_t)((void *)pcVar8);
  if (pcVar8 != (cls_105bc4d8 *)0x0) {
    puVar2 = (void *)((uintptr_t)(param_1->field_0x18));
    puVar1 = (void *)((uintptr_t)(param_1->field_0x30));
    puVar10 = (void *)((uintptr_t)(param_1->field_0x10));
    puVar11 = (void *)((uintptr_t)(param_1->field_0x34));
    *puVar15 = uStack_c;
    puVar15[1] = (uintptr_t)(puVar11);
    uStack_10 = (*(code *)0x104dfad6/*ROM*/)(pcVar8,puVar2,puVar1,puVar10);
  }
  if (param_1->field_0x4 != 0) {
    uStack_10 = (*(code *)0x104e32d6/*ROM*/)(param_1->field_0x4,param_1->field_0x38);
  }
  pcVar9 = (cls_105bc1c4 *)heap_alloc((void *)0x54);
  if (pcVar9 == (cls_105bc1c4 *)0x0) {
    pcVar9 = (cls_105bc1c4 *)0x0;
  }
  else {
    cls_105bc1c4_new(pcVar9);
  }
  param_1->field_0x3c = (uintptr_t)((void *)pcVar9);
  if (pcVar9 != (cls_105bc1c4 *)0x0) {
    puVar2 = (void *)((uintptr_t)(param_1->field_0x14));
    puVar1 = (void *)((uintptr_t)(param_1->field_0x30));
    puVar10 = (void *)((uintptr_t)(param_1->field_0x10));
    puVar11 = (void *)((uintptr_t)(param_1->field_0x34));
    *puVar15 = uStack_c;
    puVar15[1] = (uintptr_t)(puVar11);
    uStack_10 = (*(code *)0x104dfad6/*ROM*/)(pcVar9,puVar2,puVar1,puVar10);
  }
  if (param_1->field_0x4 != 0) {
    uStack_10 = (*(code *)0x104e32e6/*ROM*/)(param_1->field_0x4,param_1->field_0x3c);
  }
  puVar11 = (void *)((uintptr_t)(param_1->field_0x4));
  puVar13 = (void *)((uintptr_t)(param_1->field_0x14));
  puVar12 = (void *)((uintptr_t)(param_1->field_0x18));
  puVar1 = (void *)((uintptr_t)(param_1->field_0x30));
  puVar10 = (void *)((uintptr_t)(param_1->field_0x10));
  puVar2 = (void *)((uintptr_t)(param_1->field_0x3c));
  puVar14 = (void *)((uintptr_t)(param_1->field_0x38));
  *puVar15 = param_1->field_0x34;
  puVar15[1] = (uintptr_t)(puVar1);
  puVar15[2] = (uintptr_t)(puVar10);
  puVar15[3] = (uintptr_t)(puVar2);
  puVar15[4] = (uintptr_t)(puVar14);
  allocate_and_register_subobjects((int)param_1,(uint32_t)(puVar11),(uint32_t)(puVar13),(uint32_t)(puVar12),(uint32_t)(*puVar15),(uint32_t)(puVar15[1]),(uint32_t)(puVar15[2]),(uint32_t)(puVar15[3]), (uint32_t)(puVar15[4]));
  initialize_object_subsystems_104eb426((int)(param_1),(uint32_t)(param_1->field_0x4),(uint32_t)(uStack_c));
  initialize_object_subsystem_104eb5da((int)(param_1));
  return uStack_10;
}
