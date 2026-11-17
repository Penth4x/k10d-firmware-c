/* @k10d query_status_and_store_result @ 0x104de5ca
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Queries a status via check_flag_and_call_helper_104de5b6 and stores the result from
 *   call_helper_with_ten_arg into param_2 if the query is non-zero.
 * summary:
 *   Initializes param_2 to 0. Calls check_flag_and_call_helper_104de5b6 with param_1; if
 *   the return value is non-zero, calls call_helper_with_ten_arg and writes its return
 *   value to param_2. Uses a stack-allocated cls_105bb0b8 object, calling its virtual slot
 *   1 (reset_vtable_and_free_if_flagged_104ddfe6) with argument 2 before returning the
 *   result of check_flag_and_call_helper_104de5b6.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int query_status_and_store_result(void *param_1,uint32_t *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_28 [32];
  
  *param_2 = 0;
  cls_105bb0b8_new((void *)auStack_28);
  iVar1 = check_flag_and_call_helper_104de5b6(param_1);
  if (iVar1 != 0) {
    uVar2 = call_helper_with_ten_arg();
    *param_2 = uVar2;
  }
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
  return iVar1;
}
