/* @k10d increment_callee_result_10519fe6 @ 0x10519fe6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper on a pointer field at offset 0x70 and returns the result plus one.
 * summary:
 *   Reads a pointer from param_1 + 0x70 and passes it to count_string_bytes. The return
 *   value of that call is incremented by one and returned. No other side effects or globals
 *   are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int increment_callee_result_10519fe6(int param_1)

{
  int iVar1;
  
  iVar1 = count_string_bytes(*(char **)(param_1 + 0x70));
  return iVar1 + 1;
}
