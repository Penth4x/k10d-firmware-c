/* @k10d dispatch_param_if_valid @ 0x10481596
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Stores param_4 into param_5, validates it via decode_string_into_buffer and
 *   call_function_and_store_result, then calls parse_and_store_pattern_match if checks
 *   pass.
 * summary:
 *   The function writes param_4 to the first element of the param_5 array. It then checks
 *   if the second element is zero and calls decode_string_into_buffer with param_5 and
 *   param_3. If that returns non-zero, it calls call_function_and_store_result with a value
 *   from param_1+8, param_2, and param_5+1. If both conditions are met, it calls
 *   parse_and_store_pattern_match with param_1 and param_5, returning its result.
 *   Otherwise, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
dispatch_param_if_valid(int param_1,void *param_2,char *param_3,uint32_t param_4,uint32_t *param_5)

{
  int iVar1;
  bool bVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  *param_5 = param_4;
  if (((param_5[1] == 0) && (iVar1 = decode_string_into_buffer(param_5,param_3), iVar1 != 0)) &&
     (bVar2 = call_function_and_store_result(*(int *)(param_1 + 8),param_2,param_5 + 1), bVar2)) {
    uVar3 = parse_and_store_pattern_match(param_1,param_5);
  }
  return uVar3;
}
