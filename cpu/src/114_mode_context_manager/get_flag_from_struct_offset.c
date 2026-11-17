/* @k10d get_flag_from_struct_offset @ 0x1043012a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Returns 1 or a value from a helper if param_2 is non-zero and a check on param_2+8
 *   passes.
 * summary:
 *   The function defaults the return value to 1. If param_2 is non-zero, it calls
 *   check_flag_at_offset_eight with param_2+8. If that call returns non-zero, it calls
 *   call_two_helpers_and_return_10427b54 with param_2+8 and returns that result. Otherwise,
 *   it returns 1. The specific role of the helpers and the struct at param_2+8 is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_flag_from_struct_offset(uint32_t param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 1;
  if (param_2 != 0) {
    iVar1 = check_flag_at_offset_eight(param_2 + 8);
    if (iVar1 != 0) {
      uVar2 = call_two_helpers_and_return_10427b54(param_2 + 8);
    }
  }
  return uVar2;
}
