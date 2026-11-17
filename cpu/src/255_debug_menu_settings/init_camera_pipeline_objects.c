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

uint32_t init_camera_pipeline_objects(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t *puVar4;
  void *pvVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uintptr_t sp;
  uint32_t *puVar12;
  uint8_t auStack_34 [20];
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  puVar12 = (uint32_t *)auStack_34;
  uStack_10 = 1;
  iVar3 = heap_alloc((void *)200);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    alloc_and_zero_struct_104e3164((void *)iVar3);
  }
  *(int *)(param_1 + 4) = iVar3;
  puVar4 = (uint32_t *)heap_alloc((void *)0x30);
  if (puVar4 == (uint32_t *)0x0) {
    puVar4 = (uint32_t *)0x0;
  }
  else {
    cls_105bce58_new(puVar4);
  }
  *(uint32_t **)(param_1 + 8) = puVar4;
  if (puVar4 != (uint32_t *)0x0) {
    (*(code *)0x104e07f0/*ROM*/)(puVar4,*(uint32_t *)(param_1 + 4));
  }
  iVar3 = heap_alloc((void *)0x102c);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105bca40_new((void *)iVar3);
  }
  *(int *)(param_1 + 0xc) = iVar3;
  if (iVar3 != 0) {
    *(uint32_t *)(iVar3 + 0x1014) = *(uint32_t *)(param_1 + 4);
  }
  iVar3 = get_shared_sram_buffer();
  *(int *)(param_1 + 0x10) = iVar3;
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xc) + 8;
    }
    *(int *)(iVar3 + 0x80) = iVar1;
  }
  iVar3 = get_or_init_sram_block_104b3d52();
  if (iVar3 == 0) {
    uStack_c = 0;
  }
  else {
    uStack_c = call_two_helpers_and_return_104b3df8();
  }
  pvVar5 = (void *)get_system_heap();
  iVar3 = heap_alloc((void *)0x18);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    alloc_and_zero_small_struct_104e125e((void *)iVar3);
  }
  *(int *)(param_1 + 0x14) = iVar3;
  if (pvVar5 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = mempool_get_block(pvVar5,(void *)0x20000,3);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    *(uint8_t *)((int)puVar12 + 3) = 1;
    uStack_10 = (*(code *)0x104e1294/*ROM*/)(iVar1,iVar3,iVar3 + 0x10000,0x10000);
  }
  iVar1 = heap_alloc((void *)0x18);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    alloc_and_zero_small_struct_104e125e((void *)iVar1);
  }
  *(int *)(param_1 + 0x18) = iVar1;
  if (pvVar5 != (void *)0x0) {
    iVar3 = mempool_get_block(pvVar5,(void *)0x20000,3);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    *(uint8_t *)((int)puVar12 + 3) = 1;
    uStack_10 = (*(code *)0x104e1294/*ROM*/)(iVar1,iVar3,iVar3 + 0x10000,0x10000);
  }
  iVar3 = heap_alloc((void *)0x28);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    allocate_and_zero_struct_104e0340((void *)iVar3);
  }
  *(int *)(param_1 + 0x30) = iVar3;
  puVar4 = (uint32_t *)heap_alloc((void *)0x44);
  if (puVar4 == (uint32_t *)0x0) {
    puVar4 = (uint32_t *)0x0;
  }
  else {
    cls_105bd140_new(puVar4);
  }
  *(uint32_t **)(param_1 + 0x34) = puVar4;
  if (puVar4 != (uint32_t *)0x0) {
    (*(code *)0x104e0d3a/*ROM*/)(puVar4,*(uint32_t *)(param_1 + 0x18),uStack_c);
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != 0) {
    uVar6 = *(uint32_t *)(param_1 + 0x30);
    uVar8 = *(uint32_t *)(param_1 + 0x14);
    uVar2 = *(uint32_t *)(param_1 + 0x34);
    uVar10 = *(uint32_t *)(param_1 + 0xc);
    *puVar12 = *(uint32_t *)(param_1 + 0x10);
    puVar12[1] = uVar2;
    puVar12[2] = uVar10;
    (*(code *)0x104e07ca/*ROM*/)(iVar3,uStack_c,uVar6,uVar8);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*(code *)0x104e0620/*ROM*/)(*(int *)(param_1 + 0xc),*(uint32_t *)(param_1 + 0x10));
  }
  puVar4 = (uint32_t *)heap_alloc((void *)0x80);
  if (puVar4 == (uint32_t *)0x0) {
    puVar4 = (uint32_t *)0x0;
  }
  else {
    cls_105bc4d8_new(puVar4);
  }
  *(uint32_t **)(param_1 + 0x38) = puVar4;
  if (puVar4 != (uint32_t *)0x0) {
    uVar2 = *(uint32_t *)(param_1 + 0x18);
    uVar6 = *(uint32_t *)(param_1 + 0x30);
    uVar8 = *(uint32_t *)(param_1 + 0x10);
    uVar10 = *(uint32_t *)(param_1 + 0x34);
    *puVar12 = uStack_c;
    puVar12[1] = uVar10;
    uStack_10 = (*(code *)0x104dfad6/*ROM*/)(puVar4,uVar2,uVar6,uVar8);
  }
  if (*(int *)(param_1 + 4) != 0) {
    uStack_10 = (*(code *)0x104e32d6/*ROM*/)(*(int *)(param_1 + 4),*(uint32_t *)(param_1 + 0x38));
  }
  puVar4 = (uint32_t *)heap_alloc((void *)0x54);
  if (puVar4 == (uint32_t *)0x0) {
    puVar4 = (uint32_t *)0x0;
  }
  else {
    cls_105bc1c4_new(puVar4);
  }
  *(uint32_t **)(param_1 + 0x3c) = puVar4;
  if (puVar4 != (uint32_t *)0x0) {
    uVar2 = *(uint32_t *)(param_1 + 0x14);
    uVar6 = *(uint32_t *)(param_1 + 0x30);
    uVar8 = *(uint32_t *)(param_1 + 0x10);
    uVar10 = *(uint32_t *)(param_1 + 0x34);
    *puVar12 = uStack_c;
    puVar12[1] = uVar10;
    uStack_10 = (*(code *)0x104dfad6/*ROM*/)(puVar4,uVar2,uVar6,uVar8);
  }
  if (*(int *)(param_1 + 4) != 0) {
    uStack_10 = (*(code *)0x104e32e6/*ROM*/)(*(int *)(param_1 + 4),*(uint32_t *)(param_1 + 0x3c));
  }
  uVar10 = *(uint32_t *)(param_1 + 4);
  uVar7 = *(uint32_t *)(param_1 + 0x14);
  uVar9 = *(uint32_t *)(param_1 + 0x18);
  uVar6 = *(uint32_t *)(param_1 + 0x30);
  uVar8 = *(uint32_t *)(param_1 + 0x10);
  uVar2 = *(uint32_t *)(param_1 + 0x3c);
  uVar11 = *(uint32_t *)(param_1 + 0x38);
  *puVar12 = *(uint32_t *)(param_1 + 0x34);
  puVar12[1] = uVar6;
  puVar12[2] = uVar8;
  puVar12[3] = uVar2;
  puVar12[4] = uVar11;
  allocate_and_register_subobjects(param_1,uVar10,uVar7,uVar9,*puVar12,puVar12[1],puVar12[2],puVar12[3],puVar12[4]);
  initialize_object_subsystems_104eb426(param_1,*(uint32_t *)(param_1 + 4),uStack_c);
  initialize_object_subsystem_104eb5da(param_1);
  return uStack_10;
}
