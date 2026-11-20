/* @k10d infinite_loop_000e79ec @ 0x000e79ec
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Executes an infinite loop with no operations.
 * summary:
 *   The function consists solely of a do-while loop that never terminates. It performs no
 *   memory accesses, calls no other functions, and has no observable side effects. It is
 *   called from five different locations, likely serving as a halt or idle state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x000e7a30) */
/* WARNING: Removing unreachable block (ram,0x000e7a40) */
/* WARNING: Removing unreachable block (ram,0x000e7a1c) */
/* WARNING: Removing unreachable block (ram,0x000e7a2c) */
/* WARNING: Removing unreachable block (ram,0x000e7a44) */

void infinite_loop_000e79ec(void)

{
                    /* WARNING: Do nothing block with infinite loop */
  __halt();
}
