/* @k10d init_twelve_subobjects @ 0x1039d936
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 041_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_twelve_subobjects(cls_10564150 *param_1)

{
  uint32_t *puVar1;
  int iVar2;
  cls_10564e90 *pcVar3;
  cls_10565468 *pcVar4;
  cls_1056482c *pcVar5;
  cls_10566478 *pcVar6;
  cls_10564530 *pcVar7;
  cls_105649cc *pcVar8;
  cls_10566724 *pcVar9;
  cls_10565040 *pcVar10;
  cls_10564c80 *pcVar11;
  cls_105992d4 *pcVar12;
  cls_10565d08 *pcVar13;
  cls_10565770 *pcVar14;
  cls_1056ac8c *pcVar15;
  uint32_t *puVar16;
  
  iVar2 = get_or_create_singleton_object_104fb12e();
  param_1->field_0xbc = *(uint32_t *)(iVar2 + 0x74);
  pcVar3 = (cls_10564e90 *)heap_alloc((void *)0x40);
  if (pcVar3 == (cls_10564e90 *)0x0) {
    pcVar3 = (cls_10564e90 *)0x0;
  }
  else {
    cls_10564e90_new(pcVar3);
  }
  param_1->field_0x60 = (uintptr_t)(pcVar3);
  puVar1 = &param_1->field_0xa0;
  pcVar3->field_0x38 = param_1->field_0x9c;
  pcVar3->field_0x3c = (int)puVar1;
  *(uint32_t *)(param_1->field_0x60 + 0x28) = param_1->field_0xbc;
  puVar16 = &param_1->field_0x1c;
  *(uint32_t **)(param_1->field_0x60 + 0x2c) = puVar16;
  iVar2 = *(int *)param_1->field_0x60;
  (((vtbl_entry*)(iVar2))[9].fn)((int)param_1->field_0x60 + (int)((vtbl_entry*)(iVar2))[9].adj);
  pcVar4 = (cls_10565468 *)heap_alloc((void *)0x44);
  if (pcVar4 == (cls_10565468 *)0x0) {
    pcVar4 = (cls_10565468 *)0x0;
  }
  else {
    cls_10565468_new(pcVar4);
  }
  param_1->field_0x68 = (uintptr_t)(pcVar4);
  pcVar4->field_0x38 = param_1->field_0x9c;
  pcVar4->field_0x3c = (int)puVar1;
  *(uint32_t *)(param_1->field_0x68 + 0x28) = param_1->field_0xbc;
  *(uint32_t **)(param_1->field_0x68 + 0x2c) = puVar16;
  iVar2 = *(int *)param_1->field_0x68;
  (((vtbl_entry*)(iVar2))[9].fn)((int)param_1->field_0x68 + (int)((vtbl_entry*)(iVar2))[9].adj);
  pcVar5 = (cls_1056482c *)heap_alloc((void *)0x48);
  if (pcVar5 == (cls_1056482c *)0x0) {
    pcVar5 = (cls_1056482c *)0x0;
  }
  else {
    cls_1056482c_new(pcVar5);
  }
  param_1->field_0x70 = (uintptr_t)(pcVar5);
  pcVar5->field_0x38 = param_1->field_0x9c;
  pcVar5->field_0x3c = (uintptr_t)(puVar1);
  *(uint32_t *)(param_1->field_0x70 + 0x28) = param_1->field_0xbc;
  *(uint32_t **)(param_1->field_0x70 + 0x2c) = puVar16;
  iVar2 = *(int *)param_1->field_0x70;
  (((vtbl_entry*)(iVar2))[9].fn)((int)param_1->field_0x70 + (int)((vtbl_entry*)(iVar2))[9].adj);
  pcVar6 = (cls_10566478 *)heap_alloc((void *)0x6c);
  if (pcVar6 == (cls_10566478 *)0x0) {
    pcVar6 = (cls_10566478 *)0x0;
  }
  else {
    cls_10566478_new(pcVar6);
  }
  param_1->field_0x7c = (uintptr_t)(pcVar6);
  pcVar6->field_0x38 = param_1->field_0x9c;
  pcVar6->field_0x3c = (int)puVar1;
  *(uint32_t *)(param_1->field_0x7c + 0x28) = param_1->field_0xbc;
  *(uint32_t **)(param_1->field_0x7c + 0x2c) = puVar16;
  iVar2 = *(int *)param_1->field_0x7c;
  (((vtbl_entry*)(iVar2))[9].fn)((int)param_1->field_0x7c + (int)((vtbl_entry*)(iVar2))[9].adj);
  pcVar7 = (cls_10564530 *)heap_alloc((void *)0xa0);
  if (pcVar7 == (cls_10564530 *)0x0) {
    pcVar7 = (cls_10564530 *)0x0;
  }
  else {
    cls_10564530_new(pcVar7);
  }
  param_1->field_0x88 = (uintptr_t)(pcVar7);
  pcVar7->field_0x38 = param_1->field_0x9c;
  pcVar7->field_0x3c = (uintptr_t)(puVar1);
  *(uint32_t *)(param_1->field_0x88 + 0x28) = param_1->field_0xbc;
  *(uint32_t **)(param_1->field_0x88 + 0x2c) = puVar16;
  iVar2 = *(int *)param_1->field_0x88;
  (((vtbl_entry*)(iVar2))[9].fn)((int)param_1->field_0x88 + (int)((vtbl_entry*)(iVar2))[9].adj);
  pcVar8 = (cls_105649cc *)heap_alloc((void *)0x11c);
  if (pcVar8 == (cls_105649cc *)0x0) {
    pcVar8 = (cls_105649cc *)0x0;
  }
  else {
    cls_105649cc_new(pcVar8);
  }
  param_1->field_0x6c = (uintptr_t)(pcVar8);
  pcVar8->field_0x38 = param_1->field_0x9c;
  pcVar8->field_0x3c = (uintptr_t)(puVar1);
  *(uint32_t *)(param_1->field_0x6c + 0x28) = param_1->field_0xbc;
  *(uint32_t **)(param_1->field_0x6c + 0x2c) = puVar16;
  iVar2 = *(int *)param_1->field_0x6c;
  (((vtbl_entry*)(iVar2))[9].fn)((int)param_1->field_0x6c + (int)((vtbl_entry*)(iVar2))[9].adj);
  pcVar9 = (cls_10566724 *)heap_alloc((void *)0x60);
  if (pcVar9 == (cls_10566724 *)0x0) {
    pcVar9 = (cls_10566724 *)0x0;
  }
  else {
    cls_10566724_new(pcVar9);
  }
  param_1->field_0x74 = (uintptr_t)(pcVar9);
  puVar1 = &param_1->field_0xa0;
  pcVar9->field_0x38 = param_1->field_0x9c;
  pcVar9->field_0x3c = (int)puVar1;
  *(uint32_t *)(param_1->field_0x74 + 0x28) = param_1->field_0xbc;
  puVar16 = &param_1->field_0x1c;
  *(uint32_t **)(param_1->field_0x74 + 0x2c) = puVar16;
  iVar2 = *(int *)param_1->field_0x74;
  (((vtbl_entry*)(iVar2))[9].fn)((int)param_1->field_0x74 + (int)((vtbl_entry*)(iVar2))[9].adj);
  pcVar10 = (cls_10565040 *)heap_alloc((void *)0x13c);
  if (pcVar10 == (cls_10565040 *)0x0) {
    pcVar10 = (cls_10565040 *)0x0;
  }
  else {
    cls_10565040_new(pcVar10);
  }
  param_1->field_0x64 = (uintptr_t)(pcVar10);
  pcVar10->field_0x38 = param_1->field_0x9c;
  pcVar10->field_0x3c = (int)puVar1;
  *(uint32_t *)(param_1->field_0x64 + 0x28) = param_1->field_0xbc;
  *(uint32_t **)(param_1->field_0x64 + 0x2c) = puVar16;
  iVar2 = *(int *)param_1->field_0x64;
  (((vtbl_entry*)(iVar2))[9].fn)((int)param_1->field_0x64 + (int)((vtbl_entry*)(iVar2))[9].adj);
  pcVar11 = (cls_10564c80 *)heap_alloc((void *)0x68);
  if (pcVar11 == (cls_10564c80 *)0x0) {
    pcVar11 = (cls_10564c80 *)0x0;
  }
  else {
    cls_10564c80_new(pcVar11);
  }
  param_1->field_0x78 = (uintptr_t)(pcVar11);
  pcVar11->field_0x38 = param_1->field_0x9c;
  pcVar11->field_0x3c = (uintptr_t)(puVar1);
  *(uint32_t *)(param_1->field_0x78 + 0x28) = param_1->field_0xbc;
  *(uint32_t **)(param_1->field_0x78 + 0x2c) = puVar16;
  iVar2 = *(int *)param_1->field_0x78;
  (((vtbl_entry*)(iVar2))[9].fn)((int)param_1->field_0x78 + (int)((vtbl_entry*)(iVar2))[9].adj);
  pcVar12 = (cls_105992d4 *)heap_alloc((void *)0xc0);
  if (pcVar12 == (cls_105992d4 *)0x0) {
    pcVar12 = (cls_105992d4 *)0x0;
  }
  else {
    cls_105992d4_new(pcVar12);
  }
  param_1->field_0x90 = (uintptr_t)(pcVar12);
  pcVar12->field_0x38 = param_1->field_0x9c;
  pcVar12->field_0x3c = (int)puVar1;
  *(uint32_t *)(param_1->field_0x90 + 0x28) = param_1->field_0xbc;
  *(uint32_t **)(param_1->field_0x90 + 0x2c) = puVar16;
  iVar2 = *(int *)param_1->field_0x90;
  (((vtbl_entry*)(iVar2))[9].fn)((int)param_1->field_0x90 + (int)((vtbl_entry*)(iVar2))[9].adj);
  pcVar13 = (cls_10565d08 *)heap_alloc((void *)0x58);
  if (pcVar13 == (cls_10565d08 *)0x0) {
    pcVar13 = (cls_10565d08 *)0x0;
  }
  else {
    cls_10565d08_new(pcVar13);
  }
  param_1->field_0x80 = (uintptr_t)(pcVar13);
  pcVar13->field_0x38 = param_1->field_0x9c;
  pcVar13->field_0x3c = (int)puVar1;
  *(uint32_t *)(param_1->field_0x80 + 0x28) = param_1->field_0xbc;
  *(uint32_t **)(param_1->field_0x80 + 0x2c) = puVar16;
  iVar2 = *(int *)param_1->field_0x80;
  (((vtbl_entry*)(iVar2))[9].fn)((int)param_1->field_0x80 + (int)((vtbl_entry*)(iVar2))[9].adj);
  pcVar14 = (cls_10565770 *)heap_alloc((void *)0x50);
  if (pcVar14 == (cls_10565770 *)0x0) {
    pcVar14 = (cls_10565770 *)0x0;
  }
  else {
    cls_10565770_new(pcVar14);
  }
  param_1->field_0x84 = (uintptr_t)(pcVar14);
  pcVar14->field_0x38 = param_1->field_0x9c;
  pcVar14->field_0x3c = (int)puVar1;
  *(uint32_t *)(param_1->field_0x84 + 0x28) = param_1->field_0xbc;
  *(uint32_t **)(param_1->field_0x84 + 0x2c) = puVar16;
  iVar2 = *(int *)param_1->field_0x84;
  (((vtbl_entry*)(iVar2))[9].fn)((int)param_1->field_0x84 + (int)((vtbl_entry*)(iVar2))[9].adj);
  pcVar15 = (cls_1056ac8c *)heap_alloc((void *)0x48);
  if (pcVar15 == (cls_1056ac8c *)0x0) {
    pcVar15 = (cls_1056ac8c *)0x0;
  }
  else {
    cls_1056ac8c_new(pcVar15);
  }
  param_1->field_0x8c = (uintptr_t)(pcVar15);
  pcVar15->field_0x38 = param_1->field_0x9c;
  pcVar15->field_0x3c = (int)&param_1->field_0xa0;
  *(uint32_t *)(param_1->field_0x8c + 0x28) = param_1->field_0xbc;
  *(uint32_t **)(param_1->field_0x8c + 0x2c) = &param_1->field_0x1c;
  iVar2 = *(int *)param_1->field_0x8c;
  (((vtbl_entry*)(iVar2))[9].fn)((int)param_1->field_0x8c + (int)((vtbl_entry*)(iVar2))[9].adj);
  iVar2 = heap_alloc((void *)0x638);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    init_large_struct_with_subobjects((cls_105643d0 *)(iVar2),(uint32_t)(__frv_reg_unset(5)),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  }
  param_1->field_0x94 = iVar2;
  *(uint32_t *)(iVar2 + 0x38) = param_1->field_0x9c;
  *(uint32_t **)(iVar2 + 0x3c) = &param_1->field_0xa0;
  *(uint32_t *)(param_1->field_0x94 + 0x28) = param_1->field_0xbc;
  *(uint32_t **)(param_1->field_0x94 + 0x2c) = &param_1->field_0x1c;
  iVar2 = *(int *)param_1->field_0x94;
  (((vtbl_entry*)(iVar2))[9].fn)((int)param_1->field_0x94 + (int)((vtbl_entry*)(iVar2))[9].adj);
  return 1;
}
