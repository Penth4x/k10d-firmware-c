/* @k10d update_three_object_fields @ 0x104e7688
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Updates three sub-object fields within a container by calling virtual slot 2 on each
 *   with prepared data.
 * summary:
 *   The function iterates over three pointers stored at offsets 0x1c, 0x3c, and 0x2c of the
 *   input object. For each, it prepares a local buffer (using alloc_two_word_pair_1045bc2e
 *   and a function at 0x1045bce8), invokes virtual slot 2 of the sub-object with a computed
 *   address and the buffer, and then calls free_heap_block_if_flagged_1045bc54 on the local
 *   buffers. It finally sets a flag at offset 9 of the input object to 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_three_object_fields(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  int aiStack_2c [3];
  uint8_t auStack_20 [4];
  uint32_t auStack_1c [5];
  
  iVar2 = *(int *)(param_1 + 0x1c);
  sVar1 = *(short *)(iVar2 + 0x10);
  puVar4 = auStack_1c + 1;
  uVar3 = (uint32_t)alloc_two_word_pair_1045bc2e(puVar4,8,8);
  (*(code *)0x1045bce8/*ROM*/)(auStack_20,param_2,uVar3);
  iVar7 = 8;
  do {
    iVar6 = iVar7 + -4;
    *(uint32_t *)((int)aiStack_2c + iVar7) = *(uint32_t *)((int)aiStack_2c + iVar7 + 8);
    iVar7 = iVar6;
  } while (iVar6 != 0);
  piVar5 = aiStack_2c + 1;
  (**(code **)(iVar2 + 0x14))(param_1 + 0x10 + (int)sVar1,piVar5);
  free_heap_block_if_flagged_1045bc54(piVar5,2);
  free_heap_block_if_flagged_1045bc54(auStack_20,2);
  free_heap_block_if_flagged_1045bc54(puVar4,2);
  iVar2 = *(int *)(param_1 + 0x3c);
  aiStack_2c[0] = param_1 + 0x30 + (int)*(short *)(iVar2 + 0x10);
  uVar3 = (uint32_t)alloc_two_word_pair_1045bc2e(piVar5,4,4);
  (*(code *)0x1045bce8/*ROM*/)(auStack_20,param_2,uVar3);
  iVar7 = 8;
  do {
    iVar6 = iVar7 + -4;
    *(uint32_t *)((int)auStack_1c + iVar7) = *(uint32_t *)((int)aiStack_2c + iVar7 + 8);
    iVar7 = iVar6;
  } while (iVar6 != 0);
  (**(code **)(iVar2 + 0x14))(aiStack_2c[0],puVar4);
  free_heap_block_if_flagged_1045bc54(puVar4,2);
  free_heap_block_if_flagged_1045bc54(auStack_20,2);
  free_heap_block_if_flagged_1045bc54(piVar5,2);
  iVar2 = *(int *)(param_1 + 0x2c);
  sVar1 = *(short *)(iVar2 + 0x10);
  iVar7 = 8;
  do {
    iVar6 = iVar7 + -4;
    *(uint32_t *)((int)auStack_1c + iVar7) = *(uint32_t *)(iVar6 + param_2);
    iVar7 = iVar6;
  } while (iVar6 != 0);
  (**(code **)(iVar2 + 0x14))(param_1 + 0x20 + (int)sVar1,puVar4);
  free_heap_block_if_flagged_1045bc54(puVar4,2);
  *(uint8_t *)(param_1 + 9) = 1;
  return;
}
