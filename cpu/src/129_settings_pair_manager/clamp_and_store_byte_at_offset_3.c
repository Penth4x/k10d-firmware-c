/* @k10d clamp_and_store_byte_at_offset_3 @ 0x1045c5fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clamp_and_store_byte_at_offset_3(void *param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  
  if (param_2 < 1) {
    *(uint8_t *)((int)param_1 + 3) = 1;
  }
  else {
    bVar1 = lookup_byte_from_table(param_1,param_3,param_4);
    if (param_2 <= (int)(uint)bVar1) {
      bVar1 = (byte)param_2;
    }
    *(byte *)((int)param_1 + 3) = bVar1;
  }
  return;
}
