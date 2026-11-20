/* @k10d initialize_camera_subsystem_objects @ 0x104218d4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 098_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a fixed set of 20 subsystem objects into the caller's
 *   structure.
 * summary:
 *   The function acts as a constructor or initializer for a large camera state structure
 *   (param_1). It sequentially allocates memory for 20 distinct classes (sizes ranging from
 *   0x10 to 0x288 bytes), calls their respective constructors, and stores the pointers in
 *   param_1 at offsets 0x4 through 0x4c. It also calls store_value_if_valid with unique
 *   identifiers (0xb8-0xc9) for each object and invokes a virtual method (slot 2) on each,
 *   likely to trigger their internal initialization. Two specific objects are pre-
 *   configured with MMIO addresses 0x40020000 and 0x400f0000 before initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_camera_subsystem_objects(cls_1059d568 *param_1)

{
  cls_105a1f0c *pcVar1;
  cls_105a2010 *pcVar2;
  cls_105a20cc *pcVar3;
  cls_105a2260 *pcVar4;
  cls_105a22e4 *pcVar5;
  cls_105a2388 *pcVar6;
  cls_105a2450 *pcVar7;
  cls_105a2524 *pcVar8;
  cls_105a1e3c *pcVar9;
  cls_105a2728 *pcVar10;
  cls_105a27a8 *pcVar11;
  cls_105a2820 *pcVar12;
  cls_105a28b4 *pcVar13;
  cls_105a2928 *pcVar14;
  cls_105a29b4 *pcVar15;
  cls_105a2a34 *pcVar16;
  cls_1059be70 *pcVar17;
  int iVar18;
  
  pcVar1 = (cls_105a1f0c *)heap_alloc((void *)0x14);
  if (pcVar1 == (cls_105a1f0c *)0x0) {
    pcVar1 = (cls_105a1f0c *)0x0;
  }
  else {
    cls_105a1f0c_new(pcVar1);
  }
  param_1->field_0x4 = (uintptr_t)(pcVar1);
  store_value_if_valid(pcVar1,0xb9);
  iVar18 = *(int *)(param_1->field_0x4 + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x4 + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar2 = (cls_105a2010 *)heap_alloc((void *)0x14);
  if (pcVar2 == (cls_105a2010 *)0x0) {
    pcVar2 = (cls_105a2010 *)0x0;
  }
  else {
    cls_105a2010_new(pcVar2);
  }
  param_1->field_0x8 = (uintptr_t)(pcVar2);
  store_value_if_valid(pcVar2,0xba);
  iVar18 = *(int *)(param_1->field_0x8 + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x8 + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar3 = (cls_105a20cc *)heap_alloc((void *)0x10);
  if (pcVar3 == (cls_105a20cc *)0x0) {
    pcVar3 = (cls_105a20cc *)0x0;
  }
  else {
    cls_105a20cc_new(pcVar3);
  }
  param_1->field_0xc = (uintptr_t)(pcVar3);
  store_value_if_valid(pcVar3,0xbc);
  iVar18 = *(int *)(param_1->field_0xc + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0xc + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar4 = (cls_105a2260 *)heap_alloc((void *)0x10);
  if (pcVar4 == (cls_105a2260 *)0x0) {
    pcVar4 = (cls_105a2260 *)0x0;
  }
  else {
    cls_105a2260_new(pcVar4);
  }
  param_1->field_0x10 = (uintptr_t)(pcVar4);
  store_value_if_valid(pcVar4,200);
  iVar18 = *(int *)(param_1->field_0x10 + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x10 + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar5 = (cls_105a22e4 *)heap_alloc((void *)0x10);
  if (pcVar5 == (cls_105a22e4 *)0x0) {
    pcVar5 = (cls_105a22e4 *)0x0;
  }
  else {
    cls_105a22e4_new(pcVar5);
  }
  param_1->field_0x14 = (uintptr_t)(pcVar5);
  store_value_if_valid(pcVar5,0xbf);
  iVar18 = *(int *)(param_1->field_0x14 + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x14 + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar6 = (cls_105a2388 *)heap_alloc((void *)0x10);
  if (pcVar6 == (cls_105a2388 *)0x0) {
    pcVar6 = (cls_105a2388 *)0x0;
  }
  else {
    cls_105a2388_new(pcVar6);
  }
  param_1->field_0x18 = (uintptr_t)(pcVar6);
  store_value_if_valid(pcVar6,0xbb);
  iVar18 = *(int *)(param_1->field_0x18 + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x18 + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar7 = (cls_105a2450 *)heap_alloc((void *)0x14);
  if (pcVar7 == (cls_105a2450 *)0x0) {
    pcVar7 = (cls_105a2450 *)0x0;
  }
  else {
    cls_105a2450_new(pcVar7);
  }
  param_1->field_0x1c = (uintptr_t)(pcVar7);
  store_value_if_valid(pcVar7,0xc0);
  iVar18 = *(int *)(param_1->field_0x1c + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x1c + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar8 = (cls_105a2524 *)heap_alloc((void *)0x10);
  if (pcVar8 == (cls_105a2524 *)0x0) {
    pcVar8 = (cls_105a2524 *)0x0;
  }
  else {
    cls_105a2524_new(pcVar8);
  }
  param_1->field_0x20 = (uintptr_t)(pcVar8);
  store_value_if_valid(pcVar8,0xc9);
  iVar18 = *(int *)(param_1->field_0x20 + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x20 + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar9 = (cls_105a1e3c *)heap_alloc((void *)0x10);
  if (pcVar9 == (cls_105a1e3c *)0x0) {
    pcVar9 = (cls_105a1e3c *)0x0;
  }
  else {
    cls_105a1e3c_new(pcVar9);
  }
  param_1->field_0x24 = (uintptr_t)(pcVar9);
  store_value_if_valid(pcVar9,0xc2);
  iVar18 = *(int *)(param_1->field_0x24 + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x24 + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar10 = (cls_105a2728 *)heap_alloc((void *)0x84);
  if (pcVar10 == (cls_105a2728 *)0x0) {
    pcVar10 = (cls_105a2728 *)0x0;
  }
  else {
    cls_105a2728_new(pcVar10);
  }
  param_1->field_0x28 = (uintptr_t)(pcVar10);
  store_value_if_valid(pcVar10,0xc1);
  iVar18 = *(int *)(param_1->field_0x28 + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x28 + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar11 = (cls_105a27a8 *)heap_alloc((void *)0x10);
  if (pcVar11 == (cls_105a27a8 *)0x0) {
    pcVar11 = (cls_105a27a8 *)0x0;
  }
  else {
    cls_105a27a8_new(pcVar11);
  }
  param_1->field_0x2c = (uintptr_t)(pcVar11);
  store_value_if_valid(pcVar11,0xca);
  iVar18 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar12 = (cls_105a2820 *)heap_alloc((void *)0x14);
  if (pcVar12 == (cls_105a2820 *)0x0) {
    pcVar12 = (cls_105a2820 *)0x0;
  }
  else {
    cls_105a2820_new(pcVar12);
  }
  param_1->field_0x30 = (uintptr_t)(pcVar12);
  pcVar12->field_0x10 = 0x40020000;
  store_value_if_valid((int *)(param_1->field_0x30),(int)(0xc3));
  iVar18 = *(int *)(param_1->field_0x30 + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x30 + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar13 = (cls_105a28b4 *)heap_alloc((void *)0x14);
  if (pcVar13 == (cls_105a28b4 *)0x0) {
    pcVar13 = (cls_105a28b4 *)0x0;
  }
  else {
    cls_105a28b4_new(pcVar13);
  }
  param_1->field_0x34 = (uintptr_t)(pcVar13);
  pcVar13->field_0x10 = 0x40020000;
  store_value_if_valid((int *)(param_1->field_0x34),(int)(0xc4));
  iVar18 = *(int *)(param_1->field_0x34 + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x34 + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar12 = (cls_105a2820 *)heap_alloc((void *)0x14);
  if (pcVar12 == (cls_105a2820 *)0x0) {
    pcVar12 = (cls_105a2820 *)0x0;
  }
  else {
    cls_105a2820_new(pcVar12);
  }
  param_1->field_0x38 = (uintptr_t)(pcVar12);
  pcVar12->field_0x10 = 0x400f0000;
  store_value_if_valid((int *)(param_1->field_0x38),(int)(0xc5));
  iVar18 = *(int *)(param_1->field_0x38 + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x38 + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar13 = (cls_105a28b4 *)heap_alloc((void *)0x14);
  if (pcVar13 == (cls_105a28b4 *)0x0) {
    pcVar13 = (cls_105a28b4 *)0x0;
  }
  else {
    cls_105a28b4_new(pcVar13);
  }
  param_1->field_0x3c = (uintptr_t)(pcVar13);
  pcVar13->field_0x10 = 0x400f0000;
  store_value_if_valid((int *)(param_1->field_0x3c),(int)(0xc6));
  iVar18 = *(int *)(param_1->field_0x3c + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x3c + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar14 = (cls_105a2928 *)heap_alloc((void *)0x10);
  if (pcVar14 == (cls_105a2928 *)0x0) {
    pcVar14 = (cls_105a2928 *)0x0;
  }
  else {
    cls_105a2928_new(pcVar14);
  }
  param_1->field_0x40 = (uintptr_t)(pcVar14);
  store_value_if_valid(pcVar14,0xbe);
  iVar18 = *(int *)(param_1->field_0x40 + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x40 + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar15 = (cls_105a29b4 *)heap_alloc((void *)0x10);
  if (pcVar15 == (cls_105a29b4 *)0x0) {
    pcVar15 = (cls_105a29b4 *)0x0;
  }
  else {
    cls_105a29b4_new(pcVar15);
  }
  param_1->field_0x44 = (uintptr_t)(pcVar15);
  store_value_if_valid(pcVar15,199);
  iVar18 = *(int *)(param_1->field_0x44 + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x44 + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar16 = (cls_105a2a34 *)heap_alloc((void *)0x10);
  if (pcVar16 == (cls_105a2a34 *)0x0) {
    pcVar16 = (cls_105a2a34 *)0x0;
  }
  else {
    cls_105a2a34_new(pcVar16);
  }
  param_1->field_0x48 = (uintptr_t)(pcVar16);
  store_value_if_valid(pcVar16,0xbd);
  iVar18 = *(int *)(param_1->field_0x48 + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x48 + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  pcVar17 = (cls_1059be70 *)heap_alloc((void *)0x288);
  if (pcVar17 == (cls_1059be70 *)0x0) {
    pcVar17 = (cls_1059be70 *)0x0;
  }
  else {
    cls_1059be70_new(pcVar17);
  }
  param_1->field_0x4c = (uintptr_t)(pcVar17);
  store_value_if_valid(pcVar17,0xb8);
  iVar18 = *(int *)(param_1->field_0x4c + 4);
  (((vtbl_entry*)(iVar18))[2].fn)(param_1->field_0x4c + (int)((vtbl_entry*)(iVar18))[2].adj,0);
  return;
}
