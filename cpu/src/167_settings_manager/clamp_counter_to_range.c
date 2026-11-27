/* @k10d clamp_counter_to_range @ 0x10476d96
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

ushort clamp_counter_to_range(int param_1)

{
  uint32_t uVar1;
  short sVar2;
  ushort uVar3;
  
  uVar1 = read_offset_0x12_field((uint32_t)param_1);
  sVar2 = clamp_min_value(uVar1,*(uint16_t *)(param_1 + 0x2e));
  uVar3 = sVar2 + 1;
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  else if (9999 < uVar3) {
    uVar3 = 0;
  }
  return uVar3;
}
