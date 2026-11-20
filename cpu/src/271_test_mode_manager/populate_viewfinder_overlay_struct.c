/* @k10d populate_viewfinder_overlay_struct @ 0x1050f8ee
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Copies camera state and computed values into a viewfinder overlay structure pointed to
 *   by param_1+0x82c.
 * summary:
 *   The function reads various fields from the object at param_1 (including offsets 0x88,
 *   0x98, 0x9c, and 0x11c-0x122) and writes them into a sub-structure at *(param_1+0x82c).
 *   It calculates a value from *(param_1+0x838)+0x54 and writes it to offsets 0x68-0x6e of
 *   the sub-structure. It calls get_sysparam_store_instance and get_sysparam_store_byte,
 *   and if the result is zero, it clears offsets 0x58-0x5e. It then calls
 *   get_or_init_sram_buffer_1052c5b8 and get_SVD, and invokes a function at 0x1052c5ea with
 *   the values from param_1+0x11c-0x122 (zeroed if param_1+0x29 is non-zero). The results
 *   are negated (two's complement) and written to offsets 0x58-0x5e of the sub-structure.
 *   The offsets 0x58-0x5e likely represent EV or exposure compensation values given the
 *   negation and context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_viewfinder_overlay_struct(int param_1,int param_2)

{
  uint16_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint8_t uVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  int *piVar7;
  uint8_t auStack_34 [8];
  short sStack_10;
  short sStack_e;
  short sStack_c;
  short sStack_a;
  
  piVar7 = (int *)auStack_34;
  if (param_2 == 0) {
    iVar5 = 0x84;
  }
  else {
    iVar5 = 0x8c;
  }
  if (param_2 == 0) {
    iVar6 = 0x90;
  }
  else {
    iVar6 = 0xa0;
  }
  uVar2 = *(uint32_t *)(iVar6 + param_1);
  if (param_2 == 0) {
    iVar6 = 0x94;
  }
  else {
    iVar6 = 0xa4;
  }
  uVar3 = *(uint32_t *)(iVar6 + param_1);
  *(uint32_t *)(*(int *)(param_1 + 0x82c) + 0x28) = *(uint32_t *)(iVar5 + param_1);
  *(uint32_t *)(*(int *)(param_1 + 0x82c) + 0x2c) = *(uint32_t *)(param_1 + 0x88);
  *(uint32_t *)(*(int *)(param_1 + 0x82c) + 0x48) = uVar2;
  *(uint32_t *)(*(int *)(param_1 + 0x82c) + 0x4c) = uVar3;
  *(uint32_t *)(*(int *)(param_1 + 0x82c) + 0x50) = *(uint32_t *)(param_1 + 0x98);
  *(uint32_t *)(*(int *)(param_1 + 0x82c) + 0x54) = *(uint32_t *)(param_1 + 0x9c);
  *(uint16_t *)(param_1 + 0x624) = 0;
  *(uint16_t *)(param_1 + 0x626) = 0;
  *(uint16_t *)(param_1 + 0x628) = 0;
  *(uint16_t *)(param_1 + 0x62a) = 0;
  uVar1 = (uint16_t)((int)(uint)*(ushort *)(*(int *)(param_1 + 0x838) + 0x54) >> 5);
  *(uint16_t *)(*(int *)(param_1 + 0x82c) + 0x68) = uVar1;
  *(uint16_t *)(*(int *)(param_1 + 0x82c) + 0x6a) = uVar1;
  *(uint16_t *)(*(int *)(param_1 + 0x82c) + 0x6c) = uVar1;
  *(uint16_t *)(*(int *)(param_1 + 0x82c) + 0x6e) = uVar1;
  uVar2 = get_sysparam_store_instance();
  iVar5 = get_sysparam_store_byte((uint8_t *)(uVar2),(uint32_t)(0x1a));
  if (iVar5 == 0) {
    *(uint16_t *)(*(int *)(param_1 + 0x82c) + 0x58) = 0;
    *(uint16_t *)(*(int *)(param_1 + 0x82c) + 0x5a) = 0;
    *(uint16_t *)(*(int *)(param_1 + 0x82c) + 0x5c) = 0;
    *(uint16_t *)(*(int *)(param_1 + 0x82c) + 0x5e) = 0;
  }
  sStack_10 = *(short *)(param_1 + 0x11c);
  sStack_e = *(short *)(param_1 + 0x11e);
  sStack_c = *(short *)(param_1 + 0x120);
  sStack_a = *(short *)(param_1 + 0x122);
  if (*(char *)(param_1 + 0x29) != '\0') {
    sStack_10 = 0;
    sStack_e = 0;
    sStack_c = 0;
    sStack_a = 0;
  }
  uVar2 = get_or_init_sram_buffer_1052c5b8();
  uVar4 = get_SVD((int *)(param_1 + 0x164));
  *piVar7 = (int)&sStack_a;
  *(uint8_t *)((int)piVar7 + 7) = uVar4;
  (*(code *)0x1052c5ea/*ROM*/)(uVar2,&sStack_10,&sStack_e,&sStack_c);
  *(ushort *)(*(int *)(param_1 + 0x82c) + 0x58) = sStack_10 - 1U ^ 0xffff;
  *(ushort *)(*(int *)(param_1 + 0x82c) + 0x5a) = sStack_e - 1U ^ 0xffff;
  *(ushort *)(*(int *)(param_1 + 0x82c) + 0x5c) = sStack_c - 1U ^ 0xffff;
  *(ushort *)(*(int *)(param_1 + 0x82c) + 0x5e) = sStack_a - 1U ^ 0xffff;
  return;
}
