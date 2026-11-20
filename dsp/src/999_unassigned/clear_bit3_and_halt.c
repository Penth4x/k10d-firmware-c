/* @k10d clear_bit3_and_halt @ 0x000d05b8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears bit 3 of a global flag and calls a helper with 2 or 8 before entering an
 *   infinite loop.
 * summary:
 *   The function unconditionally clears bit 3 (mask 0xf7) of DAT_00000002. It then branches
 *   on the low 3 bits of param_1: if the value is 5, 6, or 7 (i.e., (param_1 ^ 0xffffffff)
 *   & 7 < 5), it calls busy_wait_on_mode_flag(2); otherwise it calls
 *   busy_wait_on_mode_flag(8). Finally, it enters an infinite do-while loop, effectively
 *   halting execution. The role of DAT_00000002 and busy_wait_on_mode_flag is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x000d0640) */
/* WARNING: Removing unreachable block (ram,0x000d0648) */
/* WARNING: Removing unreachable block (ram,0x000d0634) */
/* WARNING: Removing unreachable block (ram,0x000d063c) */
/* WARNING: Removing unreachable block (ram,0x000d064c) */
/* WARNING: Removing unreachable block (ram,0x000d0662) */
/* WARNING: Removing unreachable block (ram,0x000d066e) */
/* WARNING: Removing unreachable block (ram,0x000d0666) */
/* WARNING: Removing unreachable block (ram,0x000d0654) */
/* WARNING: Removing unreachable block (ram,0x000d0670) */
/* WARNING: Removing unreachable block (ram,0x000d067a) */
/* WARNING: Removing unreachable block (ram,0x000d0678) */
/* WARNING: Removing unreachable block (ram,0x000d067c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_bit3_and_halt(uint param_1)

{
  DAT_00000002 = DAT_00000002 & 0xf7;
  if (((param_1 ^ 0xffffffff) & 7) < 5) {
    busy_wait_on_mode_flag(2);
  }
  else {
    busy_wait_on_mode_flag(8);
  }
  __halt();
}
