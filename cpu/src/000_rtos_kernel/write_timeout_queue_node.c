/* @k10d write_timeout_queue_node @ 0x1000f73c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Initializes a 12-byte node in a timeout queue by setting two 0xffff fields and copying
 *   a value and pointer from param_2.
 * summary:
 *   The function calculates an offset into a global array (DAT_10011d10) using param_1 *
 *   0xc. It writes 0xffff to the first two halfwords of the slot, then copies the first
 *   halfword from param_2 and the next four bytes from param_2+2 into the remaining fields.
 *   This pattern is consistent with initializing a node in a µITRON-style timeout queue or
 *   ready list, where 0xffff often represents a null or invalid link/ID.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_timeout_queue_node(short param_1,uint16_t *param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0xc;
  *(uint16_t *)(DAT_10011d10/*ROM*/ + iVar1 + -0xc) = 0xffff;
  *(uint16_t *)(DAT_10011d10/*ROM*/ + iVar1 + -10) = 0xffff;
  *(uint16_t *)(DAT_10011d10/*ROM*/ + iVar1 + -8) = *param_2;
  *(uint32_t *)(iVar1 + DAT_10011d10/*ROM*/ + -4) = *(uint32_t *)(param_2 + 2);
  return;
}
