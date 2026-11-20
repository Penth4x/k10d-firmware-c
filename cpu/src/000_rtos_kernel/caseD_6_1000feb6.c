/* @k10d caseD_6_1000feb6 @ 0x1000feb6
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed compute_queue_slot_offset)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Computes a byte offset into a 16-byte-stride array using a base pointer and an index.
 * summary:
 *   The function takes an index (param_1), multiplies it by 0x10 (16), and adds it to the
 *   base address DAT_10011d08 minus 0x10. This is a standard array indexing calculation for
 *   a structure or queue entry that is 16 bytes in size. Given the module context of RTOS
 *   kernel services, this likely calculates the address of a specific task control block or
 *   queue node.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int switchD_1000fe8c__caseD_6(int param_1)

{
  return DAT_10011d08/*ROM*/ + param_1 * 0x10 + -0x10;
}
