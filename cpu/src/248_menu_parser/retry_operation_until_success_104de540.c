/* @k10d retry_operation_until_success_104de540 @ 0x104de540
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Repeats a check and a follow-up call until the check returns zero, then returns
 *   success.
 * summary:
 *   The function loops calling extract_substring_between_markers(param_1, param_2). If that
 *   call returns 0, the function immediately returns 0. Otherwise it calls
 *   validate_buffer_copy(param_2, 0x105bb0e8, 3) and continues looping as long as that call
 *   returns non-zero. Once validate_buffer_copy returns 0, the loop exits and the function
 *   returns 1. The specific roles of the two callees are unknown, so the behavior is
 *   described mechanically as a retry loop.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t retry_operation_until_success_104de540(int *param_1,void *param_2)

{
  int iVar1;
  
  do {
    iVar1 = extract_substring_between_markers(param_1,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = validate_buffer_copy(param_2,(void *)0x105bb0e8/*ROM*/,3);
  } while (iVar1 != 0);
  return 1;
}
