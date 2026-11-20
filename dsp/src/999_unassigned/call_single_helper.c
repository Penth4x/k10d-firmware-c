/* @k10d call_single_helper @ 0x000e6c72
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes FUN_000e07d8 and returns.
 * summary:
 *   This function is a one-line wrapper that calls FUN_000e07d8 with no arguments and
 *   returns immediately. It is called from two other functions (0x000e656c and 0x000e68ca).
 *   No side effects or state changes are visible beyond the callee's behavior.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper(void)

{
  FUN_000e07d8();
  return;
}
