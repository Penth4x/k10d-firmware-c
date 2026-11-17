/* @k10d call_helper_with_offset_and_size_10462fb6 @ 0x10462fb6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the input pointer, a pointer offset by one, and a size of 0x1c.
 * summary:
 *   The function takes a single pointer argument and passes it, along with a pointer to the
 *   next element (param_1 + 1), the constant 0x1c, a null pointer, and zero, to
 *   issue_indexed_command_and_wait. It returns the result of that call directly. The
 *   specific role of the helper and the meaning of the 0x1c size are not determinable from
 *   the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_offset_and_size_10462fb6(int *param_1)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x1c,(void *)0x0,0);
  return iVar1;
}
