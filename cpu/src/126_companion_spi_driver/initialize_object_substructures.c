/* @k10d initialize_object_substructures @ 0x10439bba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes 16 sub-objects within the class instance by allocating and invoking their
 *   constructors.
 * summary:
 *   The function first calls forward_three_args_to_helper_10459d64 nine times to initialize
 *   memory regions at offsets 0x1e0 through 0x220. It then iterates through 16 distinct
 *   blocks, each corresponding to a sub-object at a specific offset (0x228 through 0x247).
 *   For each block, it allocates an instance of cls_105a023c using cls_105a023c_new and
 *   invokes virtual slot 2 of the newly created object. The process uses different
 *   configuration pointers (DAT_500001xx) for each sub-object, suggesting distinct types or
 *   states. Finally, it calls free_heap_block_if_flagged_10439b6a to finalize the
 *   initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10439e3e) overlaps instruction at (ram,0x10439e3c)
    */
/* WARNING: Removing unreachable block (ram,0x1043b7ce) */
/* WARNING: Removing unreachable block (ram,0x1043b780) */
/* WARNING: Removing unreachable block (ram,0x1043b81c) */

uint32_t initialize_object_substructures(void *param_1)

{
  bool bVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  uint32_t uVar5;
  uintptr_t sp;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_154;
  int iStack_134;
  int iStack_124;
  int iStack_120;
  int iStack_114;
  int iStack_10c;
  int iStack_dc;
  int iStack_a4;
  int iStack_9c;
  int iStack_94;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_54;
  int iStack_50;
  uint8_t *puStack_28;
  uint8_t *puStack_24;
  uint8_t *puStack_20;
  char cStack_1c;
  uint32_t uStack_18;
  void *pvStack_14;
  int iStack_10;
  int iStack_c;
  
  uVar5 = 0;
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x1e0),1,0x1f);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x1e8),1,0x1f);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x1f0),1,0x1f);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x1f8),1,0x1f);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x200),1,0x1f);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x208),1,0x1f);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x210),1,0x1f);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x218),1,0x1f);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x220),1,0x1f);
  alloc_and_zero_32_bytes(&puStack_28);
  puStack_28 = &DAT_50000100;
  puStack_20 = (uint8_t *)0x0;
  puStack_24 = &DAT_50000200;
  iStack_10 = (int)param_1 + 0x228;
  iStack_c = (int)param_1 + 0x238;
  iStack_1a0 = 0;
  cVar4 = '\x01';
  iStack_68 = 1;
  iStack_180 = 0;
  pvStack_14 = (void *)((int)param_1 + 0x1e0);
  do {
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_180 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4;
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_180 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_180 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_180 = iStack_180 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_180 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x02';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_180 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_180 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_180 = iStack_180 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_180 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x04';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_180 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_180 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_180 = iStack_180 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_180 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\b';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_180 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_180 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_180 = iStack_180 + 4;
    }
    cVar4 = cVar4 << 4;
    iStack_68 = iStack_68 + -1;
  } while (-1 < iStack_68);
  puStack_28 = &DAT_50000101;
  puStack_24 = &DAT_50000201;
  puStack_20 = &DAT_50000301;
  iStack_10 = (int)param_1 + 0x229;
  pvStack_14 = (void *)0x0;
  iStack_c = (int)param_1 + 0x239;
  uVar3 = 1;
  iStack_64 = 1;
  iStack_18c = iStack_1a0 << 2;
  do {
    if (uVar3 != 0) {
      cStack_1c = (char)uVar3;
      uStack_18 = *(uint32_t *)(iStack_18c + 0x105a028c/*ROM*/);
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_18c + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_18c + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_18c = iStack_18c + 4;
    }
    if (uVar3 != 0) {
      cStack_1c = (char)(uVar3 << 1);
      uStack_18 = *(uint32_t *)(iStack_18c + 0x105a028c/*ROM*/);
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_18c + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_18c + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_18c = iStack_18c + 4;
    }
    if (uVar3 != 0) {
      cStack_1c = (char)(uVar3 << 2);
      uStack_18 = *(uint32_t *)(iStack_18c + 0x105a028c/*ROM*/);
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_18c + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_18c + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_18c = iStack_18c + 4;
    }
    if ((uVar3 << 3 & 0x7f) != 0) {
      cStack_1c = (char)(uVar3 << 3);
      uStack_18 = *(uint32_t *)(iStack_18c + 0x105a028c/*ROM*/);
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_18c + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_18c + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_18c = iStack_18c + 4;
    }
    uVar3 = (uVar3 & 0xf) << 4;
    iStack_64 = iStack_64 + -1;
  } while (-1 < iStack_64);
  puStack_28 = &DAT_50000102;
  pvStack_14 = (void *)((int)param_1 + 0x1e8);
  puStack_20 = &DAT_50000302;
  puStack_24 = &DAT_50000202;
  iStack_10 = (int)param_1 + 0x22a;
  iStack_c = (int)param_1 + 0x23a;
  cVar4 = '\x01';
  iStack_10c = 1;
  iStack_178 = iStack_1a0 << 2;
  do {
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_178 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4;
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_178 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_178 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_178 = iStack_178 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_178 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x02';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_178 + 4) = iVar2;
      iStack_1a0 = iStack_1a0 + 1;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_178 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_178 = iStack_178 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_178 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x04';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_178 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_178 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_178 = iStack_178 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_178 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\b';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_178 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_178 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_178 = iStack_178 + 4;
    }
    cVar4 = cVar4 << 4;
    iStack_10c = iStack_10c + -1;
  } while (-1 < iStack_10c);
  puStack_28 = &DAT_50000103;
  cVar4 = '\x01';
  puStack_24 = &DAT_50000203;
  puStack_20 = &DAT_50000303;
  pvStack_14 = (void *)0x0;
  iStack_10 = (int)param_1 + 0x22b;
  iStack_c = (int)param_1 + 0x23b;
  iStack_60 = 1;
  iStack_1a8 = iStack_1a0 << 2;
  do {
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_1a8 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4;
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_1a8 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1a8 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_1a8 = iStack_1a8 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_1a8 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x02';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_1a8 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1a8 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_1a8 = iStack_1a8 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_1a8 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x04';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_1a8 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1a8 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_1a8 = iStack_1a8 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_1a8 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\b';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_1a8 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1a8 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_1a8 = iStack_1a8 + 4;
    }
    cVar4 = cVar4 << 4;
    iStack_60 = iStack_60 + -1;
  } while (-1 < iStack_60);
  pvStack_14 = (void *)((int)param_1 + 0x1f0);
  puStack_28 = &DAT_50000104;
  puStack_24 = &DAT_50000204;
  puStack_20 = &DAT_50000304;
  iStack_10 = (int)param_1 + 0x22c;
  iStack_c = (int)param_1 + 0x23c;
  uVar3 = 1;
  iStack_54 = 1;
  iStack_19c = iStack_1a0 << 2;
  do {
    if (uVar3 != 0) {
      cStack_1c = (char)uVar3;
      uStack_18 = *(uint32_t *)(iStack_19c + 0x105a028c/*ROM*/);
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_19c + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_19c + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_19c = iStack_19c + 4;
    }
    if (uVar3 != 0) {
      cStack_1c = (char)(uVar3 << 1);
      uStack_18 = *(uint32_t *)(iStack_19c + 0x105a028c/*ROM*/);
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_19c + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_19c + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_19c = iStack_19c + 4;
    }
    if (uVar3 != 0) {
      cStack_1c = (char)(uVar3 << 2);
      uStack_18 = *(uint32_t *)(iStack_19c + 0x105a028c/*ROM*/);
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_19c + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_19c + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_19c = iStack_19c + 4;
    }
    if ((uVar3 << 3 & 0x7f) != 0) {
      cStack_1c = (char)(uVar3 << 3);
      uStack_18 = *(uint32_t *)(iStack_19c + 0x105a028c/*ROM*/);
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_19c + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_19c + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_19c = iStack_19c + 4;
    }
    uVar3 = (uVar3 & 0xf) << 4;
    iStack_54 = iStack_54 + -1;
  } while (-1 < iStack_54);
  puStack_24 = &DAT_50000205;
  puStack_20 = &DAT_50000305;
  pvStack_14 = (void *)0x0;
  iStack_c = (int)param_1 + 0x23d;
  iStack_10 = (int)param_1 + 0x22d;
  cVar4 = '\x01';
  puStack_28 = &DAT_50000105;
  iStack_9c = 1;
  iStack_198 = iStack_1a0 << 2;
  do {
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_198 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4;
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_198 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_198 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_198 = iStack_198 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_198 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x02';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_198 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_198 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_198 = iStack_198 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_198 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x04';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_198 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_198 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_198 = iStack_198 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_198 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\b';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_198 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_198 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_198 = iStack_198 + 4;
    }
    cVar4 = cVar4 << 4;
    iStack_9c = iStack_9c + -1;
  } while (-1 < iStack_9c);
  puStack_28 = &DAT_50000106;
  puStack_20 = &DAT_50000306;
  puStack_24 = &DAT_50000206;
  pvStack_14 = (void *)0x0;
  iStack_c = (int)param_1 + 0x23e;
  iStack_10 = (int)param_1 + 0x22e;
  cVar4 = '\x01';
  iStack_a4 = 1;
  iStack_1a4 = iStack_1a0 << 2;
  do {
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_1a4 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4;
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_1a4 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1a4 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_1a4 = iStack_1a4 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_1a4 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x02';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_1a4 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1a4 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_1a4 = iStack_1a4 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_1a4 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x04';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_1a4 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1a4 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_1a4 = iStack_1a4 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_1a4 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\b';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_1a4 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1a4 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_1a4 = iStack_1a4 + 4;
    }
    cVar4 = cVar4 << 4;
    iStack_a4 = iStack_a4 + -1;
  } while (-1 < iStack_a4);
  puStack_28 = &DAT_50000107;
  puStack_24 = &DAT_50000207;
  puStack_20 = (uint8_t *)0x0;
  pvStack_14 = (void *)((int)param_1 + 0x200);
  iStack_10 = (int)param_1 + 0x22f;
  iStack_c = (int)param_1 + 0x23f;
  cVar4 = '\x01';
  iStack_5c = 1;
  iStack_184 = iStack_1a0 << 2;
  do {
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_184 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4;
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_184 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_184 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_184 = iStack_184 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_184 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x02';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_184 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_184 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_184 = iStack_184 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_184 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x04';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_184 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_184 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_184 = iStack_184 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_184 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\b';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_184 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_184 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_184 = iStack_184 + 4;
    }
    cVar4 = cVar4 << 4;
    iStack_5c = iStack_5c + -1;
  } while (-1 < iStack_5c);
  puStack_28 = &DAT_50000108;
  pvStack_14 = (void *)((int)param_1 + 0x208);
  puStack_24 = &DAT_50000208;
  puStack_20 = &DAT_50000308;
  iStack_10 = (int)param_1 + 0x230;
  iStack_c = (int)param_1 + 0x240;
  cVar4 = '\x01';
  iStack_114 = 1;
  iStack_194 = iStack_1a0 << 2;
  do {
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_194 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4;
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_194 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_194 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_194 = iStack_194 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_194 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x02';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_194 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_194 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_194 = iStack_194 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_194 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x04';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_194 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_194 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_194 = iStack_194 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_194 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\b';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_194 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_194 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_194 = iStack_194 + 4;
    }
    cVar4 = cVar4 << 4;
    iStack_114 = iStack_114 + -1;
  } while (-1 < iStack_114);
  puStack_20 = &DAT_50000309;
  pvStack_14 = (void *)((int)param_1 + 0x210);
  puStack_28 = &DAT_50000109;
  iStack_c = (int)param_1 + 0x241;
  iStack_10 = (int)param_1 + 0x231;
  cVar4 = '\x01';
  puStack_24 = &DAT_50000209;
  iStack_124 = 1;
  iStack_1ac = iStack_1a0 << 2;
  do {
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_1ac + 0x105a028c/*ROM*/);
      cStack_1c = cVar4;
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      iStack_1a0 = iStack_1a0 + 1;
      *(int *)((int)param_1 + iStack_1ac + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1ac + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1ac = iStack_1ac + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_1ac + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x02';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      iStack_1a0 = iStack_1a0 + 1;
      *(int *)((int)param_1 + iStack_1ac + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1ac + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1ac = iStack_1ac + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_1ac + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x04';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      iStack_1a0 = iStack_1a0 + 1;
      *(int *)((int)param_1 + iStack_1ac + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1ac + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1ac = iStack_1ac + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_1ac + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\b';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_1ac + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1ac + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_1ac = iStack_1ac + 4;
    }
    cVar4 = cVar4 << 4;
    iStack_124 = iStack_124 + -1;
  } while (-1 < iStack_124);
  puStack_28 = &DAT_5000010a;
  puStack_24 = &DAT_5000020a;
  pvStack_14 = (void *)((int)param_1 + 0x218);
  puStack_20 = (uint8_t *)0x0;
  iStack_10 = (int)param_1 + 0x232;
  iStack_c = (int)param_1 + 0x242;
  cVar4 = '\x01';
  iStack_dc = 1;
  iStack_190 = iStack_1a0 << 2;
  do {
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_190 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4;
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      iStack_1a0 = iStack_1a0 + 1;
      *(int *)((int)param_1 + iStack_190 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_190 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_190 = iStack_190 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_190 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x02';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      iStack_1a0 = iStack_1a0 + 1;
      *(int *)((int)param_1 + iStack_190 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_190 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_190 = iStack_190 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_190 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x04';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      iStack_1a0 = iStack_1a0 + 1;
      *(int *)((int)param_1 + iStack_190 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_190 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_190 = iStack_190 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_190 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\b';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_190 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_190 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_190 = iStack_190 + 4;
    }
    cVar4 = cVar4 << 4;
    iStack_dc = iStack_dc + -1;
  } while (-1 < iStack_dc);
  puStack_28 = &DAT_5000010b;
  pvStack_14 = (void *)((int)param_1 + 0x220);
  puStack_24 = &DAT_5000020b;
  iStack_10 = (int)param_1 + 0x233;
  puStack_20 = (uint8_t *)0x0;
  iStack_c = (int)param_1 + 0x243;
  cVar4 = '\x01';
  iStack_50 = 1;
  iStack_174 = iStack_1a0 << 2;
  do {
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_174 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4;
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_174 + 4) = iVar2;
      iStack_1a0 = iStack_1a0 + 1;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_174 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_174 = iStack_174 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_174 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x02';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_174 + 4) = iVar2;
      iStack_1a0 = iStack_1a0 + 1;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_174 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_174 = iStack_174 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_174 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x04';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_174 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_174 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_174 = iStack_174 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_174 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\b';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_174 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_174 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_174 = iStack_174 + 4;
    }
    cVar4 = cVar4 << 4;
    iStack_50 = iStack_50 + -1;
  } while (-1 < iStack_50);
  puStack_28 = &DAT_5000010c;
  cVar4 = '\x01';
  puStack_24 = &DAT_5000020c;
  puStack_20 = &DAT_5000030c;
  pvStack_14 = (void *)0x0;
  iStack_10 = (int)param_1 + 0x234;
  iStack_c = (int)param_1 + 0x244;
  iStack_120 = 1;
  iStack_1b0 = iStack_1a0 << 2;
  do {
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_1b0 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4;
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_1b0 + 4) = iVar2;
      iStack_1a0 = iStack_1a0 + 1;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1b0 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1b0 = iStack_1b0 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_1b0 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x02';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_1b0 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1b0 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_1b0 = iStack_1b0 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_1b0 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x04';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_1b0 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1b0 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_1b0 = iStack_1b0 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_1b0 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\b';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_1b0 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1b0 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_1b0 = iStack_1b0 + 4;
    }
    cVar4 = cVar4 << 4;
    iStack_120 = iStack_120 + -1;
  } while (-1 < iStack_120);
  puStack_28 = &DAT_5000010d;
  iStack_10 = (int)param_1 + 0x235;
  puStack_24 = &DAT_5000020d;
  iStack_c = (int)param_1 + 0x245;
  puStack_20 = (uint8_t *)0x0;
  pvStack_14 = (void *)0x0;
  cVar4 = '\x01';
  iStack_134 = 1;
  iStack_17c = iStack_1a0 << 2;
  do {
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_17c + 0x105a028c/*ROM*/);
      cStack_1c = cVar4;
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_17c + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_17c + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_17c = iStack_17c + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_17c + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x02';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_17c + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_17c + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_17c = iStack_17c + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_17c + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x04';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_17c + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_17c + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_17c = iStack_17c + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_17c + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\b';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_17c + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_17c + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_17c = iStack_17c + 4;
    }
    cVar4 = cVar4 << 4;
    iStack_134 = iStack_134 + -1;
  } while (-1 < iStack_134);
  puStack_28 = &DAT_5000010e;
  puStack_24 = &DAT_5000020e;
  puStack_20 = (uint8_t *)0x0;
  pvStack_14 = (void *)0x0;
  iStack_10 = (int)param_1 + 0x236;
  iStack_c = (int)param_1 + 0x246;
  cVar4 = '\x01';
  iStack_94 = 1;
  iStack_188 = iStack_1a0 << 2;
  do {
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_188 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4;
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_188 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_188 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_188 = iStack_188 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_188 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x02';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_188 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_188 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_188 = iStack_188 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_188 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\x04';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_188 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_188 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_188 = iStack_188 + 4;
    }
    if (cVar4 != '\0') {
      uStack_18 = *(uint32_t *)(iStack_188 + 0x105a028c/*ROM*/);
      cStack_1c = cVar4 * '\b';
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_188 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_188 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 1;
      iStack_188 = iStack_188 + 4;
    }
    cVar4 = cVar4 << 4;
    iStack_94 = iStack_94 + -1;
  } while (-1 < iStack_94);
  puStack_28 = &DAT_5000010f;
  puStack_24 = &DAT_5000020f;
  iStack_10 = (int)param_1 + 0x237;
  puStack_20 = (uint8_t *)0x0;
  pvStack_14 = (void *)0x0;
  iStack_c = (int)param_1 + 0x247;
  bVar1 = true;
  iStack_154 = 1;
  iStack_1a0 = iStack_1a0 << 2;
  do {
    if (bVar1) {
      uStack_18 = *(uint32_t *)(iStack_1a0 + 0x105a028c/*ROM*/);
      cStack_1c = bVar1;
      iVar2 = cls_105a023c_new((uint32_t *)0x0,&puStack_28);
      *(int *)((int)param_1 + iStack_1a0 + 4) = iVar2;
      uVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (*(int *)((int)param_1 + iStack_1a0 + 4) +
                         (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
      iStack_1a0 = iStack_1a0 + 4;
    }
    bVar1 = false;
    iStack_154 = iStack_154 + -1;
  } while (-1 < iStack_154);
  free_heap_block_if_flagged_10439b6a(&puStack_28,2);
  return uVar5;
}
