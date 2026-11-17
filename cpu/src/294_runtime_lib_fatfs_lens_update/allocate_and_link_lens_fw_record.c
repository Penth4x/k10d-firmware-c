/* @k10d allocate_and_link_lens_fw_record @ 0x10538b88
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x3c-byte record, copies lens firmware info from param_2, and appends it to
 *   a linked list.
 * summary:
 *   The function calls alloc_pool2_block to allocate 0x3c bytes. If successful, it
 *   initializes the block via fill_byte_array, copies 13 fields from the source structure
 *   in param_2 into the new block, and links the new node into a doubly-linked list managed
 *   by the object at param_1+100. It increments a count at offset 0x10 and updates the tail
 *   pointer at offset 0x18. The pointer to the new node is returned in param_3 (shifted
 *   right by 2).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_and_link_lens_fw_record(int param_1,int *param_2,uint *param_3)

{
  int *piVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 100);
  piVar1 = (int *)alloc_pool2_block((void *)0x3c);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xfffffff4;
  }
  else {
    fill_byte_array(piVar1,0,0x3c);
    piVar1[1] = 0;
    piVar1[2] = *param_2;
    *(uint16_t *)(piVar1 + 3) = *(uint16_t *)(param_2 + 1);
    *(uint16_t *)((int)piVar1 + 0xe) = *(uint16_t *)((int)param_2 + 6);
    piVar1[4] = param_2[2];
    *(uint16_t *)(piVar1 + 5) = *(uint16_t *)(param_2 + 3);
    *(uint16_t *)((int)piVar1 + 0x16) = *(uint16_t *)((int)param_2 + 0xe);
    piVar1[6] = param_2[4];
    piVar1[7] = param_2[5];
    piVar1[9] = param_2[7];
    piVar1[10] = param_2[8];
    piVar1[0xb] = param_2[9];
    piVar1[8] = param_2[6];
    piVar1[0xc] = param_2[10];
    piVar1[0xd] = param_2[0xb];
    piVar1[0xe] = param_2[0xc];
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    if (*(int *)(iVar3 + 0x14) == 0) {
      *(int **)(iVar3 + 0x14) = piVar1;
    }
    if (*(int *)(iVar3 + 0x18) == 0) {
      *piVar1 = 0;
    }
    else {
      *piVar1 = *(int *)(iVar3 + 0x18);
      *(int **)(*(int *)(iVar3 + 0x18) + 4) = piVar1;
    }
    *(int **)(iVar3 + 0x18) = piVar1;
    *param_3 = (uint)piVar1 >> 2;
    uVar2 = 0;
  }
  return uVar2;
}
