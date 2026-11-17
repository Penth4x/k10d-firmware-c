/* @k10d clamp_counter_to_100_999 @ 0x104753b6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

ushort clamp_counter_to_100_999(int param_1)

{
  uint32_t uVar1;
  short sVar2;
  ushort uVar3;
  
  uVar1 = add_offset_to_struct_field(__frv_reg_unset(4));
  sVar2 = return_max_of_two_104750f6(uVar1,*(uint16_t *)(param_1 + 0x68));
  uVar3 = sVar2 + 1;
  if (uVar3 < 100) {
    uVar3 = 100;
  }
  else if (999 < uVar3) {
    uVar3 = 0;
  }
  return uVar3;
}
