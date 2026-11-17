/* @k10d is_init_magic_10 @ 0x104283de
 * name: verified (structural evidence: decomp: == -0x5aa5a55b)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   True when param_1+0x10 holds 0xA55A5AA5.
 * summary:
 *   VERIFIED: decomp: == -0x5aa5a55b
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool is_init_magic_10(int param_1)

{
  return *(int *)(param_1 + 0x10) == -0x5aa5a55b;
}
