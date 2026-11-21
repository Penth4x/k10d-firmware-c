/* @k10d fwupdate_check_version_104686f2 @ 0x104686f2
 * name: verified (structural evidence: section 0: obj+0x258 <= image word +0x1c (version word); section 1 always passes)
 * unit: 147_sram_integrity_check (unit names are model-proposed)
 * purpose:
 *   Downgrade guard: for the main section (param_2 = 0) the value at obj+0x258 (current
 *   version) must be <= the image version word at +0x1c. The control-CPU section
 *   (param_2 = 1) has no guard.
 * summary:
 *   VERIFIED: section 0: obj+0x258 <= image word +0x1c (version word); section 1 always
 *   passes
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t fwupdate_check_version_104686f2(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    if (*(uint *)(param_1 + 600) <= *(uint *)(_DAT_800042c0/*SDRAM*/ + 0x1c)) {
      uVar1 = 1;
    }
  }
  else if (param_2 == 1) {
    uVar1 = 1;
  }
  return uVar1;
}
