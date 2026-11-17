/* @k10d first_run_set_flag_b @ 0x104849b0
 * name: verified (structural evidence: decomp: init_magic_set_10(p+0x14, param_2); callers 0x103fc4e6, 0x103dd22e, 0x104d0870)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Sets (param_2 != 0) or clears first-run flag B (settings block +0x24).
 * summary:
 *   VERIFIED: decomp: init_magic_set_10(p+0x14, param_2); callers 0x103fc4e6, 0x103dd22e,
 *   0x104d0870
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void first_run_set_flag_b(int param_1,int param_2)

{
  init_magic_set_10(param_1 + 0x14,param_2);
  init_magic_set_10(*(int *)(param_1 + 0xc),param_2);
  return;
}
