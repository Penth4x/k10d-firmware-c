/* @k10d check_and_set_flag_0x214_104cb49e @ 0x104cb49e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_set_flag_0x214_104cb49e(int param_1)

{
  int iVar1;
  
  iVar1 = update_entry_pair_and_notify(*(uint32_t *)(param_1 + 0x48),2,*(uint32_t *)(param_1 + 0x84));
  *(uint *)(param_1 + 0x214) = (uint)(iVar1 != 0);
  *(uint32_t *)(param_1 + 0x210) = 0xc0003;
  return;
}
