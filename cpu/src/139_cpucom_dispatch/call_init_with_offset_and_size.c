/* @k10d call_init_with_offset_and_size @ 0x10463096
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Invokes a helper with the input pointer, a pointer one element ahead, a size of 0x24, a
 *   stack flag, and zero.
 * summary:
 *   The function is a thin wrapper that calls issue_indexed_command_and_wait with param_1,
 *   param_1+1, 0x24, a stack value, and 0. No other operations are performed. The role of
 *   the callee is unknown, so the wrapper's specific subsystem role cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_init_with_offset_and_size(int *param_1)

{
  uintptr_t sp;
  
  issue_indexed_command_and_wait(param_1,param_1 + 1,0x24,&stack0x00000003,0);
  return;
}
