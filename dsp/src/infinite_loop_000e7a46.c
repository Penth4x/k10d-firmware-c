/* @k10d infinite_loop_000e7a46 @ 0x000e7a46
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Executes an infinite loop that never returns.
 * summary:
 *   The function consists solely of a do-while(true) loop with no body operations. It has
 *   no callees and performs no memory or MMIO accesses. It is called from three other
 *   functions, likely serving as a terminal halt or wait state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x000e7a6e) */

void infinite_loop_000e7a46(void)

{
                    /* WARNING: Do nothing block with infinite loop */
  __halt();
}
