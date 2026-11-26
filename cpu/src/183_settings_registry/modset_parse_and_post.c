/* @k10d modset_parse_and_post @ 0x104872ea
 * name: verified (structural evidence: decomp + emulator trace (0 hits even with MODSET.TXT present))
 * unit: 183_settings_registry (unit names are model-proposed)
 * purpose:
 *   MODSET.TXT parse entry: reads and tokenises the card file into the flag array at
 *   taskobj+0x6d, then posts the task flag (taskobj+0x19) so the task body applies them.
 *   NEVER INVOKED on stock 1.31 (the trigger that would call this does not fire).
 * summary:
 *   VERIFIED: decomp + emulator trace (0 hits even with MODSET.TXT present)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int modset_parse_and_post(uint32_t *param_1)

{
  int iVar1;
  
  enable_display_output(param_1);
  param_1[0x21] = 0;
  iVar1 = modset_tokenise(param_1,(uint8_t *)((int)param_1 + 0x6d));
  if (iVar1 == 0) {
    param_1 = (uint32_t *)0x0;
  }
  else {
    *(uint8_t *)(param_1 + 0x1b) = 0;
    *(uint8_t *)((int)param_1 + 0x31) = 0;
    set_flg_obj(param_1 + 0x19, 0x1);
  }
  return (int)param_1;
}
