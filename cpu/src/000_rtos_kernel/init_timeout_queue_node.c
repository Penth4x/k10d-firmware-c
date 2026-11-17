/* @k10d init_timeout_queue_node @ 0x1000f7bc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Initializes a timeout queue node structure at a calculated offset in DAT_10011cf8 using
 *   parameters from param_2.
 * summary:
 *   The function calculates an index based on param_1 and writes a series of fields to a
 *   structure located at DAT_10011cf8 + (param_1 * 0x20) - 0x20. It sets up a doubly-linked
 *   list node (self-referencing pointers) and stores calculated values derived from param_2
 *   fields (offsets 2, 4, 6) and param_3. The source module is identified as rtos_kernel,
 *   and the structure layout (linked list pointers, timeout values) is consistent with a
 *   timeout queue or timer management structure in a µITRON/REALOS kernel.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_timeout_queue_node(int param_1,uint16_t *param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_2 + 6);
  uVar4 = (*(int *)(param_2 + 2) - 4U) / (iVar2 + 4U);
  iVar3 = param_1 * 0x20;
  *(uint16_t *)(DAT_10011cf8/*ROM*/ + iVar3 + -0x20) = 0xffff;
  *(uint16_t *)(DAT_10011cf8/*ROM*/ + iVar3 + -0x1e) = 0xffff;
  *(uint16_t *)(DAT_10011cf8/*ROM*/ + iVar3 + -0x14) = *param_2;
  if (*(int *)(param_2 + 4) == 0) {
    *(ushort *)(DAT_10011cf8/*ROM*/ + iVar3 + -0x14) = *(ushort *)(DAT_10011cf8/*ROM*/ + iVar3 + -0x14) | 0x8000;
  }
  *(uint32_t *)(DAT_10011cf8/*ROM*/ + iVar3 + -0xc) = *(uint32_t *)(param_2 + 6);
  *(uint *)(DAT_10011cf8/*ROM*/ + iVar3 + -0x10) = uVar4 * *(int *)(param_2 + 6);
  *(void **)(DAT_10011cf8/*ROM*/ + iVar3 + -8) = param_3;
  *(void **)(DAT_10011cf8/*ROM*/ + iVar3 + -0x1c) = param_3;
  *(void **)(DAT_10011cf8/*ROM*/ + iVar3 + -0x18) = param_3;
  uVar1 = uVar4 * iVar2 & 0xfffffffc;
  *(uint *)(DAT_10011cf8/*ROM*/ + iVar3 + -4) = (int)param_3 + uVar1;
  **(int **)(DAT_10011cf8/*ROM*/ + iVar3 + -0x1c) = DAT_10011cf8/*ROM*/ + iVar3 + -0x1c;
  *(int *)(*(int *)(DAT_10011cf8/*ROM*/ + iVar3 + -0x1c) + 4) = DAT_10011cf8/*ROM*/ + iVar3 + -0x1c;
  *(uint32_t *)(*(int *)(DAT_10011cf8/*ROM*/ + iVar3 + -0x1c) + 8) = 0;
  *(uint *)(*(int *)(DAT_10011cf8/*ROM*/ + iVar3 + -0x1c) + 0xc) = uVar4;
  iVar2 = *(int *)(DAT_10011cf8/*ROM*/ + iVar3 + -0x1c);
  *(int *)(uVar1 + iVar2 + -4) = iVar2;
  *(uint32_t *)(*(int *)(DAT_10011cf8/*ROM*/ + iVar3 + -4) + uVar4 * 4) = 0x80000000/*SDRAM*/;
  return;
}
