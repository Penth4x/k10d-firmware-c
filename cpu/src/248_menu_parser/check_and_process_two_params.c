/* @k10d check_and_process_two_params @ 0x104de70a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Returns 1 if a status check passes and a secondary function succeeds with two
 *   parameters, else 0.
 * summary:
 *   Calls extract_substring_from_buffer as a gate; if it returns non-zero, calls
 *   validate_and_copy_string with param_2 and param_3. Returns 1 only if both calls succeed
 *   (non-zero), otherwise returns 0. param_1 is unused in the visible logic.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_process_two_params(void *param_1,void *param_2,char *param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = extract_substring_from_buffer((int *)(uint32_t)param_1,(int *)(uint32_t)param_2);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = validate_and_copy_string(param_2,param_3);
    uVar1 = 1;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
