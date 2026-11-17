/* @k10d copy_if_flag_set @ 0x10477424
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies the first byte of param_2 to param_1 if count_string_bytes(param_2) returns 1.
 * summary:
 *   Calls count_string_bytes with param_2; if the result equals 1, it copies the first byte
 *   from param_2 to param_1 and returns true, otherwise returns false. The function is used
 *   as virtual method slot 2 across multiple class instances. The specific role of
 *   count_string_bytes is unknown, so the semantic meaning of the condition is
 *   undetermined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool copy_if_flag_set(uint8_t *param_1,uint8_t *param_2)

{
  int iVar1;
  
  iVar1 = count_string_bytes(param_2);
  if (iVar1 == 1) {
    *param_1 = *param_2;
  }
  return iVar1 == 1;
}
