/* @k10d call_helper_with_saved_field @ 0x104de596
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Saves param_1[2], calls retry_operation_until_success_104de540, restores param_1[2],
 *   and returns whether the helper was non-zero.
 * summary:
 *   Reads the third word of the object pointed to by param_1, invokes
 *   retry_operation_until_success_104de540 with param_1 and param_2, then writes the saved
 *   word back to param_1[2]. The return value is the boolean result of the helper call
 *   (non-zero). No other side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_helper_with_saved_field(int *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  iVar1 = retry_operation_until_success_104de540(param_1,param_2);
  param_1[2] = iVar2;
  return iVar1 != 0;
}
