/* @k10d allocate_and_register_subobjects @ 0x104eac1a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Allocates 18 distinct objects into consecutive fields of a container, initializes each
 *   via a virtual call, and registers them with a manager.
 * summary:
 *   The function heap-allocates memory for 18 different object types using specific
 *   cls_*_new constructors and stores the pointers in consecutive 4-byte fields of the
 *   struct pointed to by param_1 (offsets 0x40 through 0x80). For each allocated object, it
 *   invokes a virtual method (slot 2) to initialize it with parameters derived from the
 *   function arguments. It then calls a function at 0x104e3288 to register each new object
 *   with a manager (param_2) using unique IDs ranging from 0x1000 to 0x101d. The caller is
 *   a virtual method of cls_105c26f0, indicating this is an initialization routine for a
 *   composite object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_register_subobjects(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8,
                 uint32_t param_9)

{
  short sVar1;
  code *pcVar2;
  cls_105be0a0 *pcVar3;
  cls_105bb920 *pcVar4;
  cls_105bdba0 *pcVar5;
  cls_105bf240 *pcVar6;
  cls_105bf53c *pcVar7;
  cls_105be3a8 *pcVar8;
  cls_105be9a0 *pcVar9;
  cls_105bec34 *pcVar10;
  cls_105be63c *pcVar11;
  cls_105befcc *pcVar12;
  cls_105bd454 *pcVar13;
  cls_105bf838 *pcVar14;
  cls_105bd6c8 *pcVar15;
  cls_1062190c *pcVar16;
  cls_10621c08 *pcVar17;
  cls_105c23c4 *pcVar18;
  uintptr_t sp;
  uint32_t *puVar19;
  uint8_t auStack_2c [8];
  
  puVar19 = (uint32_t *)auStack_2c;
  pcVar3 = (cls_105be0a0 *)heap_alloc((void *)0x18);
  if (pcVar3 == (cls_105be0a0 *)0x0) {
    pcVar3 = (cls_105be0a0 *)0x0;
  }
  else {
    cls_105be0a0_new(pcVar3);
  }
  *(cls_105be0a0 **)(param_1 + 0x40) = pcVar3;
  if (pcVar3 != (cls_105be0a0 *)0x0) {
    sVar1 = *(short *)(pcVar3->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar3->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = param_9;
    (*pcVar2)((int)&pcVar3->field_0x0 + (int)sVar1,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1001,*(uint32_t *)(param_1 + 0x40));
  pcVar4 = (cls_105bb920 *)heap_alloc((void *)0x1c);
  if (pcVar4 == (cls_105bb920 *)0x0) {
    pcVar4 = (cls_105bb920 *)0x0;
  }
  else {
    cls_105bb920_new(pcVar4);
  }
  *(cls_105bb920 **)(param_1 + 0x44) = pcVar4;
  if (pcVar4 != (cls_105bb920 *)0x0) {
    sVar1 = *(short *)(pcVar4->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar4->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = 0;
    (*pcVar2)((int)&pcVar4->field_0x0 + (int)sVar1,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1002,*(uint32_t *)(param_1 + 0x44));
  pcVar5 = (cls_105bdba0 *)heap_alloc((void *)0x18);
  if (pcVar5 == (cls_105bdba0 *)0x0) {
    pcVar5 = (cls_105bdba0 *)0x0;
  }
  else {
    cls_105bdba0_new(pcVar5);
  }
  *(cls_105bdba0 **)(param_1 + 0x48) = pcVar5;
  if (pcVar5 != (cls_105bdba0 *)0x0) {
    sVar1 = *(short *)(pcVar5->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar5->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = 0;
    (*pcVar2)((int)&pcVar5->field_0x0 + (int)sVar1,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1003,*(uint32_t *)(param_1 + 0x48));
  pcVar6 = (cls_105bf240 *)heap_alloc((void *)0x18);
  if (pcVar6 == (cls_105bf240 *)0x0) {
    pcVar6 = (cls_105bf240 *)0x0;
  }
  else {
    cls_105bf240_new(pcVar6);
  }
  *(cls_105bf240 **)(param_1 + 0x4c) = pcVar6;
  if (pcVar6 != (cls_105bf240 *)0x0) {
    sVar1 = *(short *)(pcVar6->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar6->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = param_9;
    (*pcVar2)((int)&pcVar6->field_0x0 + (int)sVar1,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1004,*(uint32_t *)(param_1 + 0x4c));
  pcVar7 = (cls_105bf53c *)heap_alloc((void *)0x3c);
  if (pcVar7 == (cls_105bf53c *)0x0) {
    pcVar7 = (cls_105bf53c *)0x0;
  }
  else {
    cls_105bf53c_new(pcVar7);
  }
  *(cls_105bf53c **)(param_1 + 0x50) = pcVar7;
  if (pcVar7 != (cls_105bf53c *)0x0) {
    sVar1 = *(short *)(pcVar7->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar7->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = param_9;
    (*pcVar2)((int)&pcVar7->field_0x0 + (int)sVar1,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1005,*(uint32_t *)(param_1 + 0x50));
  pcVar8 = (cls_105be3a8 *)heap_alloc((void *)0x18);
  if (pcVar8 == (cls_105be3a8 *)0x0) {
    pcVar8 = (cls_105be3a8 *)0x0;
  }
  else {
    cls_105be3a8_new(pcVar8);
  }
  *(cls_105be3a8 **)(param_1 + 0x54) = pcVar8;
  if (pcVar8 != (cls_105be3a8 *)0x0) {
    sVar1 = *(short *)(pcVar8->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar8->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = param_9;
    (*pcVar2)((int)&pcVar8->field_0x0 + (int)sVar1,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1006,*(uint32_t *)(param_1 + 0x54));
  pcVar9 = (cls_105be9a0 *)heap_alloc((void *)0x18);
  if (pcVar9 == (cls_105be9a0 *)0x0) {
    pcVar9 = (cls_105be9a0 *)0x0;
  }
  else {
    cls_105be9a0_new(pcVar9);
  }
  *(cls_105be9a0 **)(param_1 + 0x58) = pcVar9;
  if (pcVar9 != (cls_105be9a0 *)0x0) {
    sVar1 = *(short *)(pcVar9->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar9->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = param_9;
    (*pcVar2)((int)&pcVar9->field_0x0 + (int)sVar1,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1007,*(uint32_t *)(param_1 + 0x58));
  pcVar10 = (cls_105bec34 *)heap_alloc((void *)0x20);
  if (pcVar10 == (cls_105bec34 *)0x0) {
    pcVar10 = (cls_105bec34 *)0x0;
  }
  else {
    cls_105bec34_new(pcVar10);
  }
  *(cls_105bec34 **)(param_1 + 0x5c) = pcVar10;
  if (pcVar10 != (cls_105bec34 *)0x0) {
    sVar1 = *(short *)(pcVar10->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar10->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = param_9;
    (*pcVar2)((int)&pcVar10->field_0x0 + (int)sVar1,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1008,*(uint32_t *)(param_1 + 0x5c));
  pcVar11 = (cls_105be63c *)heap_alloc((void *)0x20);
  if (pcVar11 == (cls_105be63c *)0x0) {
    pcVar11 = (cls_105be63c *)0x0;
  }
  else {
    cls_105be63c_new(pcVar11);
  }
  *(cls_105be63c **)(param_1 + 0x60) = pcVar11;
  if (pcVar11 != (cls_105be63c *)0x0) {
    sVar1 = *(short *)(pcVar11->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar11->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = param_9;
    (*pcVar2)((int)&pcVar11->field_0x0 + (int)sVar1,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1009,*(uint32_t *)(param_1 + 0x60));
  pcVar12 = (cls_105befcc *)heap_alloc((void *)0x1c);
  if (pcVar12 == (cls_105befcc *)0x0) {
    pcVar12 = (cls_105befcc *)0x0;
  }
  else {
    cls_105befcc_new(pcVar12);
  }
  *(cls_105befcc **)(param_1 + 100) = pcVar12;
  if (pcVar12 != (cls_105befcc *)0x0) {
    sVar1 = *(short *)(pcVar12->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar12->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = param_9;
    (*pcVar2)((int)&pcVar12->field_0x0 + (int)sVar1,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x101b,*(uint32_t *)(param_1 + 100));
  pcVar13 = (cls_105bd454 *)heap_alloc((void *)0x18);
  if (pcVar13 == (cls_105bd454 *)0x0) {
    pcVar13 = (cls_105bd454 *)0x0;
  }
  else {
    cls_105bd454_new(pcVar13);
  }
  *(cls_105bd454 **)(param_1 + 0x68) = pcVar13;
  if (pcVar13 != (cls_105bd454 *)0x0) {
    sVar1 = *(short *)(pcVar13->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar13->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = param_8;
    (*pcVar2)((int)&pcVar13->field_0x0 + (int)sVar1,param_3,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x100d,*(uint32_t *)(param_1 + 0x68));
  pcVar14 = (cls_105bf838 *)heap_alloc((void *)0x1c);
  if (pcVar14 == (cls_105bf838 *)0x0) {
    pcVar14 = (cls_105bf838 *)0x0;
  }
  else {
    cls_105bf838_new(pcVar14);
  }
  *(cls_105bf838 **)(param_1 + 0x6c) = pcVar14;
  if (pcVar14 != (cls_105bf838 *)0x0) {
    sVar1 = *(short *)(pcVar14->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar14->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = param_9;
    (*pcVar2)((int)&pcVar14->field_0x0 + (int)sVar1,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x100a,*(uint32_t *)(param_1 + 0x6c));
  pcVar15 = (cls_105bd6c8 *)heap_alloc((void *)0x18);
  if (pcVar15 == (cls_105bd6c8 *)0x0) {
    pcVar15 = (cls_105bd6c8 *)0x0;
  }
  else {
    cls_105bd6c8_new(pcVar15);
  }
  *(cls_105bd6c8 **)(param_1 + 0x70) = pcVar15;
  if (pcVar15 != (cls_105bd6c8 *)0x0) {
    sVar1 = *(short *)(pcVar15->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar15->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = param_8;
    (*pcVar2)((int)&pcVar15->field_0x0 + (int)sVar1,param_3,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x100c,*(uint32_t *)(param_1 + 0x70));
  pcVar16 = (cls_1062190c *)heap_alloc((void *)0x18);
  if (pcVar16 == (cls_1062190c *)0x0) {
    pcVar16 = (cls_1062190c *)0x0;
  }
  else {
    cls_1062190c_new(pcVar16);
  }
  *(cls_1062190c **)(param_1 + 0x74) = pcVar16;
  if (pcVar16 != (cls_1062190c *)0x0) {
    sVar1 = *(short *)(pcVar16->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar16->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = param_8;
    (*pcVar2)((int)&pcVar16->field_0x0 + (int)sVar1,param_3,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x100b,*(uint32_t *)(param_1 + 0x74));
  pcVar17 = (cls_10621c08 *)heap_alloc((void *)0x18);
  if (pcVar17 == (cls_10621c08 *)0x0) {
    pcVar17 = (cls_10621c08 *)0x0;
  }
  else {
    cls_10621c08_new(pcVar17);
  }
  *(cls_10621c08 **)(param_1 + 0x78) = pcVar17;
  if (pcVar17 != (cls_10621c08 *)0x0) {
    sVar1 = *(short *)(pcVar17->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar17->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = param_8;
    (*pcVar2)((int)&pcVar17->field_0x0 + (int)sVar1,param_3,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1012,*(uint32_t *)(param_1 + 0x78));
  pcVar18 = (cls_105c23c4 *)heap_alloc((void *)0x1c);
  if (pcVar18 == (cls_105c23c4 *)0x0) {
    pcVar18 = (cls_105c23c4 *)0x0;
  }
  else {
    cls_105c23c4_new(pcVar18);
  }
  *(cls_105c23c4 **)(param_1 + 0x7c) = pcVar18;
  if (pcVar18 != (cls_105c23c4 *)0x0) {
    sVar1 = *(short *)(pcVar18->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar18->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = param_9;
    (*pcVar2)((int)&pcVar18->field_0x0 + (int)sVar1,param_3,param_5,param_6);
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    *(uint32_t *)(*(int *)(param_1 + 0x7c) + 0x18) = 0x1000;
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1000,*(uint32_t *)(param_1 + 0x7c));
  pcVar18 = (cls_105c23c4 *)heap_alloc((void *)0x1c);
  if (pcVar18 == (cls_105c23c4 *)0x0) {
    pcVar18 = (cls_105c23c4 *)0x0;
  }
  else {
    cls_105c23c4_new(pcVar18);
  }
  *(cls_105c23c4 **)(param_1 + 0x80) = pcVar18;
  if (pcVar18 != (cls_105c23c4 *)0x0) {
    sVar1 = *(short *)(pcVar18->field_0x14 + 0x18);
    pcVar2 = *(code **)(pcVar18->field_0x14 + 0x1c);
    *puVar19 = param_7;
    puVar19[1] = param_9;
    (*pcVar2)((int)&pcVar18->field_0x0 + (int)sVar1,param_3,param_5,param_6);
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    *(uint32_t *)(*(int *)(param_1 + 0x7c) + 0x18) = 0x101d;
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x101d,*(uint32_t *)(param_1 + 0x80));
  return;
}
