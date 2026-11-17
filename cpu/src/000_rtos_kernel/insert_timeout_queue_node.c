/* @k10d insert_timeout_queue_node @ 0x1000f668
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Links a timeout queue node into the kernel's timeout queue at the index given by
 *   param_1.
 * summary:
 *   Computes an offset (param_1 * 0x18) into the DAT_10011cf0 array and writes a self-
 *   referential pointer, the task ID (param_1), and fields from param_2 into the node. The
 *   self-pointer at offset -0x18 and the 0x18 stride are characteristic of a µITRON-style
 *   timeout queue node insertion. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void insert_timeout_queue_node(short param_1,ushort *param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x18;
  *(int *)(DAT_10011cf0/*ROM*/ + iVar1 + -0x18) = DAT_10011cf0/*ROM*/ + iVar1 + -0x18;
  *(uint32_t *)(DAT_10011cf0/*ROM*/ + iVar1 + -8) = *(uint32_t *)(param_2 + 4);
  *(short *)(DAT_10011cf0/*ROM*/ + iVar1 + -0xc) = param_1;
  *(ushort *)(DAT_10011cf0/*ROM*/ + iVar1 + -10) = *param_2 | 8;
  *(uint32_t *)(iVar1 + DAT_10011cf0/*ROM*/ + -4) = *(uint32_t *)(param_2 + 2);
  return;
}
