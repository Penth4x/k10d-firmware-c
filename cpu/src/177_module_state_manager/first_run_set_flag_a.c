/* @k10d first_run_set_flag_a @ 0x10484988
 * name: verified (structural evidence: decomp: init_magic_set_c(p+0x14, param_2); called with 1 by the Language screen confirm handler 0x103df1d2)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Sets (param_2 != 0) or clears first-run flag A (settings block +0x20 = 0xA55A5AA5 /
 *   0xffffffff).
 * summary:
 *   VERIFIED: decomp: init_magic_set_c(p+0x14, param_2); called with 1 by the Language
 *   screen confirm handler 0x103df1d2
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void first_run_set_flag_a(int param_1,int param_2)

{
  init_magic_set_c(param_1 + 0x14,param_2);
  init_magic_set_c(*(int *)(param_1 + 0xc),param_2);
  return;
}
