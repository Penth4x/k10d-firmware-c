/* @k10d check_flag_and_set_out_param_104d810e @ 0x104d810e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls a helper, and if it returns 0 and a byte at param_1+0x2b5c is 0, sets *param_2 to
 *   1.
 * summary:
 *   Initializes the output pointer param_2 to 0. Calls initialize_subsystem_and_run_checks
 *   and stores its return value in iVar1. If iVar1 is 0 and the byte at offset 0x2b5c in
 *   the object pointed to by param_1 is 0, it sets *param_2 to 1. Returns the value from
 *   initialize_subsystem_and_run_checks.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int check_flag_and_set_out_param_104d810e(int param_1,uint8_t *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  iVar1 = initialize_subsystem_and_run_checks(__frv_reg_unset(4));
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x2b5c) == '\0')) {
    *param_2 = 1;
  }
  return iVar1;
}
