/* @k10d call_e7714_with_arg_e @ 0x000e783c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls process_mode_transition with the constant argument 0xe and returns.
 * summary:
 *   A one-line wrapper that invokes process_mode_transition with the immediate value 0xe.
 *   No other side effects, globals, or branches are visible in the pseudocode. The role of
 *   process_mode_transition is unknown, so the semantic meaning of the 0xe argument cannot
 *   be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_e7714_with_arg_e(void)

{
  process_mode_transition(0xe);
  return;
}
