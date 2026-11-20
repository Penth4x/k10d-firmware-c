/* @k10d infinite_loop_000f8214 @ 0x000f8214
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Executes an infinite loop with no operations.
 * summary:
 *   The function consists solely of a do-while loop that never terminates. It performs no
 *   memory accesses, calls no other functions, and has no observable side effects. It is
 *   called by two other functions at 0x000f81d2 and 0x000f80d6.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x000f8232) */

void infinite_loop_000f8214(uint32_t param_x0)

{
                    /* WARNING: Do nothing block with infinite loop */
  __halt();
}
