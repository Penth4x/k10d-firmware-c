/* @k10d compute_page_table_entry @ 0x000f7c04
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes a 32-bit page table entry from a virtual address and a base flag value.
 * summary:
 *   The function takes a virtual address in param_1 and normalizes it by left-shifting
 *   until it falls within the 0x40000000..0x7fffffff range, tracking the shift amount in
 *   iVar1. It then constructs a 32-bit value where the upper 10 bits encode the shift
 *   amount minus 1, and the lower 22 bits contain the shifted address masked to 0x3fffffff.
 *   This pattern is characteristic of a simple page table entry or memory descriptor
 *   construction routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint64_t compute_page_table_entry(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x41e;
  if (param_1 != 0) {
    if (param_1 < 0x10000) {
      param_1 = param_1 << 0x10;
      iVar1 = 0x40e;
    }
    if (param_1 < 0x1000000) {
      param_1 = param_1 << 8;
      iVar1 = iVar1 + -8;
    }
    if (param_1 < 0x10000000/*ROM*/) {
      param_1 = param_1 << 4;
      iVar1 = iVar1 + -4;
    }
    if (param_1 < 0x40000000) {
      param_1 = param_1 << 2;
      iVar1 = iVar1 + -2;
    }
    return CONCAT44((param_1 & 0x3fffffff) >> 10 | (iVar1 + -1) * 0x100000,param_1 << 0x16);
  }
  return 0;
}
