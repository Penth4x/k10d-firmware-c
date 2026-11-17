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
  uint32_t *puVar3;
  uintptr_t sp;
  uint32_t *puVar4;
  uint8_t auStack_2c [8];
  
  puVar4 = (uint32_t *)auStack_2c;
  puVar3 = (uint32_t *)heap_alloc((void *)0x18);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_105be0a0_new(puVar3);
  }
  *(uint32_t **)(param_1 + 0x40) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = param_9;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1001,*(uint32_t *)(param_1 + 0x40));
  puVar3 = (uint32_t *)heap_alloc((void *)0x1c);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_105bb920_new(puVar3);
  }
  *(uint32_t **)(param_1 + 0x44) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = 0;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1002,*(uint32_t *)(param_1 + 0x44));
  puVar3 = (uint32_t *)heap_alloc((void *)0x18);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_105bdba0_new(puVar3);
  }
  *(uint32_t **)(param_1 + 0x48) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = 0;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1003,*(uint32_t *)(param_1 + 0x48));
  puVar3 = (uint32_t *)heap_alloc((void *)0x18);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_105bf240_new(puVar3);
  }
  *(uint32_t **)(param_1 + 0x4c) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = param_9;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1004,*(uint32_t *)(param_1 + 0x4c));
  puVar3 = (uint32_t *)heap_alloc((void *)0x3c);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_105bf53c_new(puVar3);
  }
  *(uint32_t **)(param_1 + 0x50) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = param_9;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1005,*(uint32_t *)(param_1 + 0x50));
  puVar3 = (uint32_t *)heap_alloc((void *)0x18);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_105be3a8_new(puVar3);
  }
  *(uint32_t **)(param_1 + 0x54) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = param_9;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1006,*(uint32_t *)(param_1 + 0x54));
  puVar3 = (uint32_t *)heap_alloc((void *)0x18);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_105be9a0_new(puVar3);
  }
  *(uint32_t **)(param_1 + 0x58) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = param_9;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1007,*(uint32_t *)(param_1 + 0x58));
  puVar3 = (uint32_t *)heap_alloc((void *)0x20);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_105bec34_new(puVar3);
  }
  *(uint32_t **)(param_1 + 0x5c) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = param_9;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1008,*(uint32_t *)(param_1 + 0x5c));
  puVar3 = (uint32_t *)heap_alloc((void *)0x20);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_105be63c_new(puVar3);
  }
  *(uint32_t **)(param_1 + 0x60) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = param_9;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1009,*(uint32_t *)(param_1 + 0x60));
  puVar3 = (uint32_t *)heap_alloc((void *)0x1c);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_105befcc_new(puVar3);
  }
  *(uint32_t **)(param_1 + 100) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = param_9;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x101b,*(uint32_t *)(param_1 + 100));
  puVar3 = (uint32_t *)heap_alloc((void *)0x18);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_105bd454_new(puVar3);
  }
  *(uint32_t **)(param_1 + 0x68) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = param_8;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_3,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x100d,*(uint32_t *)(param_1 + 0x68));
  puVar3 = (uint32_t *)heap_alloc((void *)0x1c);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_105bf838_new(puVar3);
  }
  *(uint32_t **)(param_1 + 0x6c) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = param_9;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_4,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x100a,*(uint32_t *)(param_1 + 0x6c));
  puVar3 = (uint32_t *)heap_alloc((void *)0x18);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_105bd6c8_new(puVar3);
  }
  *(uint32_t **)(param_1 + 0x70) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = param_8;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_3,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x100c,*(uint32_t *)(param_1 + 0x70));
  puVar3 = (uint32_t *)heap_alloc((void *)0x18);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_1062190c_new(puVar3);
  }
  *(uint32_t **)(param_1 + 0x74) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = param_8;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_3,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x100b,*(uint32_t *)(param_1 + 0x74));
  puVar3 = (uint32_t *)heap_alloc((void *)0x18);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_10621c08_new(puVar3);
  }
  *(uint32_t **)(param_1 + 0x78) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = param_8;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_3,param_5,param_6);
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1012,*(uint32_t *)(param_1 + 0x78));
  puVar3 = (uint32_t *)heap_alloc((void *)0x1c);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_105c23c4_new(puVar3);
  }
  *(uint32_t **)(param_1 + 0x7c) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = param_9;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_3,param_5,param_6);
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    *(uint32_t *)(*(int *)(param_1 + 0x7c) + 0x18) = 0x1000;
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x1000,*(uint32_t *)(param_1 + 0x7c));
  puVar3 = (uint32_t *)heap_alloc((void *)0x1c);
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    cls_105c23c4_new(puVar3);
  }
  *(uint32_t **)(param_1 + 0x80) = puVar3;
  if (puVar3 != (uint32_t *)0x0) {
    sVar1 = *(short *)(puVar3[5] + 0x18);
    pcVar2 = *(code **)(puVar3[5] + 0x1c);
    *puVar4 = param_7;
    puVar4[1] = param_9;
    (*pcVar2)((int)sVar1 + (int)puVar3,param_3,param_5,param_6);
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    *(uint32_t *)(*(int *)(param_1 + 0x7c) + 0x18) = 0x101d;
  }
  (*(code *)0x104e3288/*ROM*/)(param_2,0x101d,*(uint32_t *)(param_1 + 0x80));
  return;
}
