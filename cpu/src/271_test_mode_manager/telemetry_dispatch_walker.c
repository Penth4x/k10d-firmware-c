/* @k10d telemetry_dispatch_walker @ 0x1050ee50
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_via_jumptable)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Performs an indirect call through a jumptable using param_2 as the index.
 * summary:
 *   The function loads the address of a function pointer from the
 *   test_item_dispatch_jumptable array at the offset specified by param_2 and invokes it.
 *   It does not pass any arguments to the target function. The role of the specific handler
 *   being dispatched is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void telemetry_dispatch_walker(uint32_t param_1,int param_2)

{
                    /* Purpose: Test item dispatcher. Indirect jump through dispatch table at
                       0x105d5fe8, indexed by param_2 (r5). No mutex/lock — direct jmp
                       @r12.\nParams: param_1 = unused, param_2 = handler index (0-5).\nReturns:
                       void (never returns from handler). */
                    /* WARNING: Could not recover jumptable at 0x1050ee5a. Too many branches */
  (**(code **)(&test_item_dispatch_jumptable + param_2 * 4))();
  return;
}
