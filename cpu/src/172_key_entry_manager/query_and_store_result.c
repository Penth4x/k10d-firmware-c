/* @k10d query_and_store_result @ 0x10480124
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 172_key_entry_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with param_1 and param_3, passes the result to a function at 0x104e6a1c
 *   with param_2, and stores the outcome in either param_1+4 or param_4 based on the sign
 *   of the result.
 * summary:
 *   The function invokes map_mode_index_to_code_104806c4(param_1, param_3) to obtain an
 *   intermediate value. It then calls an unknown function at 0x104e6a1c with param_2 and
 *   that intermediate value. If the return value is less than 1, it is stored at param_1 +
 *   4; otherwise, it is stored in *param_4 and param_1 + 4 is set to 0. The function
 *   returns true if the final result is positive.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool query_and_store_result(int param_1,uint32_t param_2,uint32_t param_3,int *param_4)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = map_mode_index_to_code_104806c4(param_1,param_3);
  iVar2 = (*(code *)0x104e6a1c/*ROM*/)(param_2,uVar1);
  if (iVar2 < 1) {
    *(int *)(param_1 + 4) = iVar2;
  }
  else {
    *param_4 = iVar2;
    *(uint32_t *)(param_1 + 4) = 0;
  }
  return 0 < iVar2;
}
