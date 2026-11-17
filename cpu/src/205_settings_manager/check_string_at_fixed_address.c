/* @k10d check_string_at_fixed_address @ 0x1049c408
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a fixed ROM address and a pointer, returning true if the helper
 *   returns zero.
 * summary:
 *   The function passes the constant address 0x105b5ac4 and the second argument to
 *   compare_null_terminated_strings. It interprets a return value of 0 as a successful or
 *   true condition. The specific role of the helper and the data at the fixed address is
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_string_at_fixed_address(uint32_t param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = compare_null_terminated_strings((void *)0x105b5ac4/*ROM*/,param_2);
  return iVar1 == 0;
}
