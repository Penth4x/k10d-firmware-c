/* @k10d write_task_control_block_entry @ 0x1000f94c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Writes a 10-byte task control block entry into a kernel table at an index given by
 *   param_1.
 * summary:
 *   The function computes an offset of param_1 * 10 from the base DAT_10011d14 and writes
 *   five 16-bit fields. It sets the first two fields to 0xffff, then copies the low and
 *   high halves of the 32-bit values at param_2[0] and param_2[1] into the remaining three
 *   fields. This matches the structure of a µITRON task control block (TCB) entry, where
 *   0xffff often represents an invalid task ID or empty slot, and the other fields hold
 *   task attributes or pointers. The function is part of the rtos_kernel module, consistent
 *   with kernel-level task management operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_task_control_block_entry(short param_1,uint16_t *param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 10;
  *(uint16_t *)(DAT_10011d14/*ROM*/ + iVar1 + -10) = 0xffff;
  *(uint16_t *)(DAT_10011d14/*ROM*/ + iVar1 + -8) = 0xffff;
  *(short *)(DAT_10011d14/*ROM*/ + iVar1 + -4) = (short)*(uint32_t *)(param_2 + 2);
  *(uint16_t *)(DAT_10011d14/*ROM*/ + iVar1 + -6) = *param_2;
  *(short *)(iVar1 + DAT_10011d14/*ROM*/ + -2) = (short)*(uint32_t *)(param_2 + 4);
  return;
}
