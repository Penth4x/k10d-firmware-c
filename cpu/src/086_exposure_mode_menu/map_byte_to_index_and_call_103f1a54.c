/* @k10d map_byte_to_index_and_call_103f1a54 @ 0x103f1a54
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 086_exposure_mode_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_byte_to_index_and_call_103f1a54(void *param_1,uint param_2)

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
    if (*(byte *)(uVar3 + 0x10597a85/*ROM*/) == param_2) {
      uVar2 = uVar3 & 0xff;
    }
    if (*(byte *)(uVar3 + 0x10597a86/*ROM*/) == param_2) {
      uVar2 = uVar3 + 1 & 0xff;
    }
    if (*(byte *)(uVar3 + 0x10597a87/*ROM*/) == param_2) {
      uVar2 = uVar3 + 2 & 0xff;
    }
    iVar4 = iVar4 + -1;
    uVar1 = uVar3 + 3;
  } while (-1 < iVar4);
  if (*(byte *)(uVar3 + 0x10597a88/*ROM*/) == param_2) {
    uVar2 = uVar3 + 3 & 0xff;
  }
  dispatch_seven_virtual_commands_103f178e(param_1,uVar2);
  return;
}
