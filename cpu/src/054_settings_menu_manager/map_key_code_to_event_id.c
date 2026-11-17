/* @k10d map_key_code_to_event_id @ 0x103bd95e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_key_code_to_event_id(void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  auStack_24[0] = 0x101005f;
  auStack_24[1] = 0x1010060;
  auStack_24[2] = 0x1010061;
  auStack_24[3] = 0x1010062;
  auStack_24[4] = 0x1010063;
  auStack_24[5] = 0x1010064;
  auStack_24[6] = 0x1010065;
  uVar4 = 0xff;
  iVar3 = 1;
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (*(byte *)(uVar2 + 0x10594e4c/*ROM*/) == param_2) {
      uVar4 = uVar2 & 0xff;
    }
    if (*(byte *)(uVar2 + 0x10594e4d/*ROM*/) == param_2) {
      uVar4 = uVar2 + 1 & 0xff;
    }
    if (*(byte *)(uVar2 + 0x10594e4e/*ROM*/) == param_2) {
      uVar4 = uVar2 + 2 & 0xff;
    }
    iVar3 = iVar3 + -1;
    uVar1 = uVar2 + 3;
  } while (-1 < iVar3);
  if (*(byte *)(uVar2 + 0x10594e4f/*ROM*/) == param_2) {
    uVar4 = uVar2 + 3 & 0xff;
  }
  register_menu_item_by_index_103bd0e0(param_1,uVar4);
  return auStack_24[uVar4];
}
