/* @k10d initialize_timeout_queue_node_1000f778 @ 0x1000f778
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Initializes a 16-byte node in a linked list by setting sentinel values and storing a
 *   pointer.
 * summary:
 *   The function takes an index (param_1) and a pointer (param_2). It calculates an offset
 *   into the DAT_10011d08 array (stride 0x10) and writes 0xffff to two 16-bit fields,
 *   likely representing a null or invalid state. It then sets two 32-bit fields to point to
 *   the same location within the node (offset -8), creating a self-referencing or circular
 *   link structure typical of queue initialization. Finally, it stores the value from
 *   param_2 into the node at offset -0xc. Given the module is the RTOS kernel and the
 *   structure resembles a linked list node with status flags, this is likely initializing a
 *   timeout queue entry or similar kernel data structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_timeout_queue_node_1000f778(int param_1,uint16_t *param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x10;
  *(uint16_t *)(DAT_10011d08/*ROM*/ + iVar1 + -0x10) = 0xffff;
  *(uint16_t *)(DAT_10011d08/*ROM*/ + iVar1 + -0xe) = 0xffff;
  *(int *)(DAT_10011d08/*ROM*/ + iVar1 + -8) = DAT_10011d08/*ROM*/ + iVar1 + -8;
  *(int *)(DAT_10011d08/*ROM*/ + iVar1 + -4) = DAT_10011d08/*ROM*/ + iVar1 + -8;
  *(uint16_t *)(iVar1 + DAT_10011d08/*ROM*/ + -0xc) = *param_2;
  return;
}
