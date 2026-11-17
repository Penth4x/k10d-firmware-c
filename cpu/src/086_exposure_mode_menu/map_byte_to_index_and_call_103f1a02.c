/* @k10d map_byte_to_index_and_call_103f1a02 @ 0x103f1a02
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 086_exposure_mode_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_byte_to_index_and_call_103f1a02(void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0xff;
  iVar4 = 1;
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    if (*(byte *)(uVar3 + 0x10597a73/*ROM*/) == param_2) {
      uVar2 = uVar3 & 0xff;
    }
    if (*(byte *)(uVar3 + 0x10597a74/*ROM*/) == param_2) {
      uVar2 = uVar3 + 1 & 0xff;
    }
    if (*(byte *)(uVar3 + 0x10597a75/*ROM*/) == param_2) {
      uVar2 = uVar3 + 2 & 0xff;
    }
    iVar4 = iVar4 + -1;
    uVar1 = uVar3 + 3;
  } while (-1 < iVar4);
  if (*(byte *)(uVar3 + 0x10597a76/*ROM*/) == param_2) {
    uVar2 = uVar3 + 3 & 0xff;
  }
  register_menu_item_by_index_103f135e(param_1,uVar2);
  return;
}
