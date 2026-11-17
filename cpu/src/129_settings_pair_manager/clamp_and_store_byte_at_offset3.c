/* @k10d clamp_and_store_byte_at_offset3 @ 0x1045c5ca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clamp_and_store_byte_at_offset3(uint16_t *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if ((int)param_2 < 1) {
    *(uint8_t *)((int)param_1 + 3) = 1;
  }
  else {
    if (param_3 == 0) {
      uVar1 = 0x1f;
    }
    else {
      uVar1 = call_helper_with_two_bytes_1045c840(param_1);
      uVar1 = uVar1 & 0xff;
    }
    if ((int)param_2 <= (int)uVar1) {
      uVar1 = param_2;
    }
    *(char *)((int)param_1 + 3) = (char)uVar1;
  }
  return;
}
