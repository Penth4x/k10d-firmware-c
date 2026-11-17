/* @k10d init_mode_state_and_check @ 0x10418276
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool init_mode_state_and_check(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = build_feature_flag_mask(*(uint32_t *)(param_1 + 0x50),0);
  *(uint32_t *)(param_1 + 0x1508) = uVar1;
  iVar2 = check_state_flag_at_offset(param_1);
  return iVar2 == 0;
}
