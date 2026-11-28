/* @k10d ready_list_insert_spin @ 0x1000f530
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed idle_task_spin)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Infinite loop that keeps the CPU in a low-power idle state when no other task is ready
 *   to run.
 * summary:
 *   The function consists solely of an infinite do-while loop with no body, performing no
 *   memory accesses or kernel service calls. It is located in the rtos_kernel module and is
 *   consistent with the standard idle task implementation in µITRON/REALOS kernels, which
 *   spins when the ready list is empty. Prior analysis notes confirm this address
 *   (0x1000f530) is the hottest PC when the camera is in a clean idle state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void ready_list_insert_spin(void)
{
  __halt();
}
