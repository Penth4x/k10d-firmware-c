/* @k10d first_run_flag_b_done @ 0x10484d38
 * name: verified (structural evidence: decomp: is_init_magic_10(p+0x14); readers screen_launch_by_id, 0x10434090)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   True when first-run flag B (settings block +0x24 == 0xA55A5AA5) is set; while clear,
 *   power-on shows the second first-run screen (0x103db21e, which the Language screen
 *   chains to).
 * summary:
 *   VERIFIED: decomp: is_init_magic_10(p+0x14); readers screen_launch_by_id, 0x10434090
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t first_run_flag_b_done(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = is_init_magic_10(param_1 + 0x14);
  return uVar1;
}
