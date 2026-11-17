/* @k10d is_init_magic_8 @ 0x104283b6
 * name: verified (structural evidence: decomp: == -0x5aa5a55b (0xA55A5AA5, not 0xa55a55a5))
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   True when param_1+8 holds 0xA55A5AA5.
 * summary:
 *   VERIFIED: decomp: == -0x5aa5a55b (0xA55A5AA5, not 0xa55a55a5)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool is_init_magic_8(int param_1)

{
  return *(int *)(param_1 + 8) == -0x5aa5a55b;
}
