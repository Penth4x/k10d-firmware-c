/* @k10d first_run_flag_a_done @ 0x10484d24
 * name: verified (structural evidence: decomp: is_init_magic_c(p+0x14); only setter path first_run_set_flag_a is called from the Language screen's confirm handler 0x103df1d2 (event 0x11))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   True when first-run flag A (settings block +0x20 == 0xA55A5AA5) is set; set when the
 *   power-on Language screen is confirmed.
 * summary:
 *   VERIFIED: decomp: is_init_magic_c(p+0x14); only setter path first_run_set_flag_a is
 *   called from the Language screen's confirm handler 0x103df1d2 (event 0x11)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t first_run_flag_a_done(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = is_init_magic_c(param_1 + 0x14);
  return uVar1;
}
