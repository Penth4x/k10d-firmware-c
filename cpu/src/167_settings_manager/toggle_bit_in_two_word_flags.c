/* @k10d toggle_bit_in_two_word_flags @ 0x104770c2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t toggle_bit_in_two_word_flags(void *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  uint32_t uVar4;
  
  uVar4 = 0;
  if (param_2 != -1) {
    uVar1 = *(ushort *)((int)param_1 + 4);
    bVar3 = (byte)param_2;
    uVar2 = make_bit_mask_from_index(param_1,bVar3);
    if ((uVar1 & uVar2) == 0) {
      uVar2 = make_bit_mask_from_index(param_1,bVar3);
      *(ushort *)((int)param_1 + 4) = *(ushort *)((int)param_1 + 4) | (ushort)uVar2;
      uVar2 = make_bit_mask_from_index(param_1,bVar3);
      *(ushort *)((int)param_1 + 6) = *(ushort *)((int)param_1 + 6) | (ushort)uVar2;
      uVar4 = 1;
    }
    else {
      uVar2 = make_bit_mask_from_index(param_1,bVar3);
      *(ushort *)((int)param_1 + 6) = *(ushort *)((int)param_1 + 6) & ((ushort)uVar2 ^ 0xffff);
    }
  }
  return uVar4;
}
