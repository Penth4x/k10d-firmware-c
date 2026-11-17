/* @k10d initialize_object_with_defaults @ 0x10462c28
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls a single initialization routine on the given object pointer with fixed default
 *   arguments.
 * summary:
 *   The function takes a single pointer argument and passes it, along with a pointer to the
 *   next element, zero, NULL, and zero, to issue_indexed_command_and_wait. It acts as a
 *   thin wrapper or convenience constructor for the object pointed to by param_1. No other
 *   side effects or memory operations are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_with_defaults(int *param_1)

{
  issue_indexed_command_and_wait(param_1,param_1 + 1,0,(void *)0x0,0);
  return;
}
