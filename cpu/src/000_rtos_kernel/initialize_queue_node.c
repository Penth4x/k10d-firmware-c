/* @k10d initialize_queue_node @ 0x1000f904
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Initializes a 10-byte node in a linked list by setting pointers to null and copying two
 *   fields from a source structure.
 * summary:
 *   The function takes an index (param_1) and a source pointer (param_2). It calculates an
 *   offset into a global array at DAT_10011d04 using a stride of 0xe (14 bytes). It writes
 *   0xffff to the first two 16-bit fields (likely next/prev pointers), copies two 16-bit
 *   values from param_2 into the middle fields, and sets the last 16-bit field to 0. This
 *   pattern is consistent with initializing a node in a kernel data structure like a ready
 *   list or timeout queue.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_queue_node(short param_1,uint16_t *param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0xe;
  *(uint16_t *)(DAT_10011d04/*ROM*/ + iVar1 + -0xe) = 0xffff;
  *(uint16_t *)(DAT_10011d04/*ROM*/ + iVar1 + -0xc) = 0xffff;
  *(uint16_t *)(DAT_10011d04/*ROM*/ + iVar1 + -6) = *param_2;
  *(uint16_t *)(DAT_10011d04/*ROM*/ + iVar1 + -4) = param_2[1];
  *(uint16_t *)(iVar1 + DAT_10011d04/*ROM*/ + -2) = 0;
  return;
}
