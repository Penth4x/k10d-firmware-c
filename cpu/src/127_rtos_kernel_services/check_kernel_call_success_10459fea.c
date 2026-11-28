/* @k10d check_kernel_call_success_10459fea @ 0x10459fea
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Calls an unknown kernel wrapper and returns true if it reports success (zero).
 * summary:
 *   Invokes allocate_kernel_object_1000e4e0 and compares its return value to zero,
 *   returning a boolean. The callee is not identified, so the specific kernel operation is
 *   unknown. This is a thin one-call wrapper in the RTOS wrappers module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

/* B-3d FIX (d329): the original (0x10459fea) is a register-forwarding trap wrapper — it traps to
 * allocate_kernel_object_1000e4e0 forwarding the AMBIENT r4 (a timeout in ticks that each caller sets
 * in the call's delay slot, `ldi #k,r4; call:d`). The decompiler dropped every caller's r4 setup AND
 * emitted (uint32_t)timeout here (stub -> 0, clobbers r4-r7), so every timed wait got timeout 0.
 * Give it a real `timeout` param and forward it; each caller now passes its recovered timeout. */
bool check_kernel_call_success_10459fea(uint32_t timeout_val)

{
  return __trap_allocate_kernel_object_1000e4e0(timeout_val) == 0;
}
