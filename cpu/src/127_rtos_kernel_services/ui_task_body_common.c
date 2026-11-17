/* @k10d ui_task_body_common @ 0x1045a16a
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed invoke_virtual_slot_then_call_helper)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on an object via its vtable pointer, then calls a single helper
 *   function.
 * summary:
 *   The function takes an object pointer in param_1, dereferences the vtable pointer at
 *   offset 0x10, and calls virtual slot 2 (offset 0x14 in the vtable) with a this-
 *   adjustment from the short at vtable offset 0x10. It then calls rtos_sched_start_gate
 *   with no arguments. The prior notes suggest this is a common body for UI sub-tasks, but
 *   the code itself only shows a virtual call followed by a helper call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void ui_task_body_common(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 0x14))
            (*(short *)(*(int *)(param_1 + 0x10) + 0x10) + param_1);
  rtos_sched_start_gate();
  return;
}
