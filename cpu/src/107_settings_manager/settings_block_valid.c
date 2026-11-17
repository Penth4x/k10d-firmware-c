/* @k10d settings_block_valid @ 0x10428284
 * name: verified (structural evidence: decomp)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   True when a settings block starts and ends (word 0xd0) with 0xA55A5AA5.
 * summary:
 *   VERIFIED: decomp
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t settings_block_valid(int *param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((*param_1 == -0x5aa5a55b) && (param_1[0xd0] == -0x5aa5a55b)) {
    uVar1 = 1;
  }
  return uVar1;
}
