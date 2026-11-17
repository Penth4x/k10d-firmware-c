/* @k10d compute_window_split_offsets @ 0x1038cca0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_window_split_offsets(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  param_2 = param_2 >> 1;
  uVar1 = param_2 / param_3;
  if (uVar1 < 0xc) {
    uVar1 = 0xc;
  }
  if (param_2 < uVar1) {
    uVar1 = param_2;
  }
  if (param_4 == 1) {
    uVar2 = 0;
  }
  else if (param_4 == param_3) {
    uVar2 = param_2 - uVar1;
  }
  else {
    uVar2 = ((((param_4 - 1) * 1000) / param_3) * param_2) / 1000;
    if (uVar2 < 4) {
      uVar2 = 0;
    }
    if (param_2 - uVar1 < uVar2) {
      uVar2 = param_2 - uVar1;
    }
  }
  *(uint *)(param_1 + 0x28) = uVar2 << 1;
  *(uint *)(param_1 + 0x2c) = uVar1 << 1;
  return;
}
