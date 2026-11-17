/* @k10d loop_call_helper_with_offset @ 0x100f0c20
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper once, then loops param_2 times calling another helper with an
 *   incrementing offset.
 * summary:
 *   First calls validate_index_against_limit with all four parameters. If that returns -1,
 *   returns 0xffffffff. Otherwise, if param_2 is non-zero, enters a loop that calls
 *   check_and_apply_param_if_idle with param_1, 1, and param_3. Each iteration increments
 *   param_3 by 0x200 and param_1 by 1. Returns 0 on success, 0xffffffff if any helper call
 *   fails.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t loop_call_helper_with_offset(uint param_1,uint param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  
  iVar1 = validate_index_against_limit(param_1,param_2,param_3,param_4);
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    if (param_2 != 0) {
      do {
        iVar1 = check_and_apply_param_if_idle(param_1,1,param_3);
        if (iVar1 == -1) {
          return 0xffffffff;
        }
        param_3 = param_3 + 0x200;
        uVar3 = uVar3 + 1;
        param_1 = param_1 + 1;
      } while (uVar3 < param_2);
    }
    uVar2 = 0;
  }
  return uVar2;
}
