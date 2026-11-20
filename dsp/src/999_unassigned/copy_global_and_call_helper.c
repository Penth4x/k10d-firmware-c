/* @k10d copy_global_and_call_helper @ 0x000eca6c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls FUN_000e2fc2 with argument 1 and copies DAT_0003c001 into DAT_0003c036.
 * summary:
 *   The function performs two operations: it invokes the callee FUN_000e2fc2 with the
 *   constant 1, then assigns the value of global DAT_0003c001 to global DAT_0003c036. No
 *   other side effects or control flow are present. The roles of the globals and the callee
 *   are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_global_and_call_helper(void)

{
  FUN_000e2fc2(1);
  DAT_0003c036 = DAT_0003c001;
  return;
}
