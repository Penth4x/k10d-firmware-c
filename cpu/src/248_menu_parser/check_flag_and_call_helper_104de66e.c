/* @k10d check_flag_and_call_helper_104de66e @ 0x104de66e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Returns a helper's result if a byte at offset 0x10 in the input struct is zero,
 *   otherwise returns 0.
 * summary:
 *   The function takes a pointer to a structure and checks the byte at offset 0x10. If that
 *   byte is null, it calls scan_buffer_for_match and returns its result. If the byte is
 *   non-zero, it returns 0 without calling the helper. The role of the structure and the
 *   helper is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_flag_and_call_helper_104de66e(void *param_1)

{
  uint32_t uVar1;
  
  if (*(char *)((int)param_1 + 0x10) == '\0') {
    uVar1 = scan_buffer_for_match((int *)__frv_reg_unset(4),(int *)__frv_reg_unset(5));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
