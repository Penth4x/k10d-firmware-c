/* @k10d call_with_lock_pair @ 0x10480fe0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Invokes a target function between two lock/unlock calls on a field at offset 0xc.
 * summary:
 *   The function calls call_kernel_with_short_id on the pointer at param_1+0xc, then calls
 *   run_four_step_sequence with the value at param_1+8 and the two string parameters. It
 *   then calls check_kernel_call_success_10459d88 on the same pointer at param_1+0xc and
 *   returns the result of the middle call. The pattern suggests a critical section or mutex
 *   protection around the call to run_four_step_sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_with_lock_pair(int param_1,char *param_2,char *param_3)

{
  int iVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  iVar1 = run_four_step_sequence(*(int *)(param_1 + 8),param_2,param_3);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return iVar1;
}
