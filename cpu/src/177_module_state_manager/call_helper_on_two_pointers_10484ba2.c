/* @k10d call_helper_on_two_pointers_10484ba2 @ 0x10484ba2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls copy_words_to_struct_offset_10428576 twice with the same four parameters, using
 *   param_1+0x14 and the value at param_1+0xc as the first argument.
 * summary:
 *   The function forwards param_2 through param_5 to copy_words_to_struct_offset_10428576.
 *   The first call uses param_1 + 0x14 as the first argument. It then reads the integer at
 *   param_1 + 0xc and makes a second call to copy_words_to_struct_offset_10428576 using
 *   that value as the first argument and param_5 as the last argument. No other side
 *   effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_two_pointers_10484ba2(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uintptr_t sp;
  int *piVar2;
  
  piVar2 = (int *)&stack0xffffffe0;
  copy_words_to_struct_offset_10428576(param_1 + 0x14,param_2,param_3,param_4,param_5);
  iVar1 = *(int *)(param_1 + 0xc);
  *piVar2 = param_5;
  copy_words_to_struct_offset_10428576(iVar1,param_2,param_3,param_4,*piVar2);
  return;
}
