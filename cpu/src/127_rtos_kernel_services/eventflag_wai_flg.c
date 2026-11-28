/* @k10d eventflag_wai_flg @ 0x10459708
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed wai_flg_obj)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Wait for event-flag bits (pattern in param_2) on the flag object's id via kernel
 *   wai_flg; returns true on E_OK.
 * summary:
 *   Clamps param_4 to a valid wait-mode range, then calls __trap_kernel_wai_flg_svc(kernel
 *   wai_flg) with the flag id from *param_1, the wait pattern param_2, a result pointer
 *   (param_3 or a local), and the mode. Returns whether the kernel call succeeded (iVar1 ==
 *   0). Sits alongside set_flg_obj and twai_flg_obj in the rtos_wrappers module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

bool eventflag_wai_flg(uint32_t *flag_obj, uint32_t wait_pattern, uint32_t *result_ptr, int wait_mode)

{
  int svc_result;
  uint32_t local_result;

  /* Clamp wait_mode: >0 keep, ==0 keep 0, <0 set to -1 */
  if (wait_mode < 1) {
    if (wait_mode < 0) {
      wait_mode = -1;
    }
    else {
      wait_mode = 0;
    }
  }

  local_result = 0;

  if (result_ptr == (uint32_t *)0x0) {
    svc_result = __trap_kernel_wai_flg_svc((int)(short)*flag_obj, wait_pattern, 1, &local_result, wait_mode);
  }
  else {
    svc_result = __trap_kernel_wai_flg_svc((int)(short)*flag_obj, wait_pattern, 1, result_ptr, wait_mode);
  }

  return svc_result == 0;
}
