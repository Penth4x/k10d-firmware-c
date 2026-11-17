/* @k10d dispatch_three_short_codes @ 0x1051ce8c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 276_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_three_short_codes(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 1;
  iVar2 = dispatch_event_by_code_104a1a96(__frv_reg_unset(4),(ushort *)__frv_reg_unset(5));
  if (iVar2 == 0) {
    sVar1 = *param_2;
    if (sVar1 == -0x6eff) {
      write_four_bytes_to_address(param_1,param_2);
      uVar3 = 1;
    }
    else if (sVar1 == -0x5ffe) {
      call_helper_with_param2_and_offset_0x30(param_1,param_2);
      uVar3 = 1;
    }
    else if (sVar1 == -0x5ffd) {
      forward_param_to_helper_1051cf18(param_1,param_2);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
