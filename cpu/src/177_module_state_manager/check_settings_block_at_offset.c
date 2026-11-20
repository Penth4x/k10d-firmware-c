/* @k10d check_settings_block_at_offset @ 0x104848ac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_settings_block_at_offset(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = settings_block_valid((int *)(param_1 + 0x14));
  return uVar1;
}
