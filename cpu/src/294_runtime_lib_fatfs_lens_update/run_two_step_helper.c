/* @k10d run_two_step_helper @ 0x1054143c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Calls a first helper with an input and stack slot, then calls a second helper with that
 *   slot if the first returns zero.
 * summary:
 *   The function invokes lookup_table_entry_by_match with param_1 and a local stack
 *   variable. If the return value is 0, it invokes start_update_if_flag_clear with the
 *   stack variable and returns that result; otherwise it returns the first helper's result.
 *   No strings or verified callee names in this function indicate a specific camera
 *   subsystem.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int run_two_step_helper(void *param_1)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_c;
  
  iVar1 = lookup_table_entry_by_match(param_1,&uStack_c);
  if (iVar1 == 0) {
    iVar1 = start_update_if_flag_clear((void *)uStack_c);
  }
  return iVar1;
}
