/* @k10d insert_into_timeout_queue_1000f6b4 @ 0x1000f6b4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Inserts a timeout queue node at the position specified by param_1, linking it into the
 *   list if the node is not already active.
 * summary:
 *   The function writes fields from the source structure (param_2) into a slot in the
 *   global timeout queue array (DAT_10011cf4) indexed by param_1. It sets the node's self-
 *   pointer if the status bits (bits 1 and 2 of the first word) are clear, indicating the
 *   node is not currently in the queue. Otherwise, it calls
 *   insert_into_timeout_queue_1000fcd4 to handle the insertion into the active list. This
 *   is consistent with the µITRON/REALOS timeout queue management described in the project
 *   brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void insert_into_timeout_queue_1000f6b4(short param_1,ushort *param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x1c;
  *(uint32_t *)(DAT_10011cf4/*ROM*/ + iVar1 + -0x14) = *(uint32_t *)(param_2 + 8);
  *(uint32_t *)(DAT_10011cf4/*ROM*/ + iVar1 + -0xc) = *(uint32_t *)(param_2 + 6);
  *(ushort *)(DAT_10011cf4/*ROM*/ + iVar1 + -0xe) = *param_2;
  *(short *)(DAT_10011cf4/*ROM*/ + iVar1 + -0x10) = param_1;
  *(uint32_t *)(DAT_10011cf4/*ROM*/ + iVar1 + -8) = *(uint32_t *)(param_2 + 4);
  *(uint32_t *)(DAT_10011cf4/*ROM*/ + iVar1 + -4) = *(uint32_t *)(param_2 + 2);
  if ((*param_2 & 6) == 0) {
    *(int *)(DAT_10011cf4/*ROM*/ + iVar1 + -0x1c) = DAT_10011cf4/*ROM*/ + iVar1 + -0x1c;
  }
  else {
    insert_into_timeout_queue_1000fcd4((uint32_t *)(DAT_10011cf4/*ROM*/ + iVar1 + -0x1c));
  }
  return;
}
