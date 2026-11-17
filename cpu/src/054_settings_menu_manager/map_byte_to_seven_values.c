/* @k10d map_byte_to_seven_values @ 0x103bdaa0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_byte_to_seven_values(void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  auStack_24[0] = 0x1010077;
  auStack_24[1] = 0x1010078;
  auStack_24[2] = 0x1010079;
  auStack_24[3] = 0x101007a;
  auStack_24[4] = 0x101007b;
  auStack_24[5] = 0x101007c;
  auStack_24[6] = 0x101007d;
  uVar4 = 0xff;
  iVar3 = 1;
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (*(byte *)(uVar2 + 0x10594e5a/*ROM*/) == param_2) {
      uVar4 = uVar2 & 0xff;
    }
    if (*(byte *)(uVar2 + 0x10594e5b/*ROM*/) == param_2) {
      uVar4 = uVar2 + 1 & 0xff;
    }
    if (*(byte *)(uVar2 + 0x10594e5c/*ROM*/) == param_2) {
      uVar4 = uVar2 + 2 & 0xff;
    }
    iVar3 = iVar3 + -1;
    uVar1 = uVar2 + 3;
  } while (-1 < iVar3);
  if (*(byte *)(uVar2 + 0x10594e5d/*ROM*/) == param_2) {
    uVar4 = uVar2 + 3 & 0xff;
  }
  dispatch_seven_virtual_commands_103bd574(param_1,uVar4);
  return auStack_24[uVar4];
}
