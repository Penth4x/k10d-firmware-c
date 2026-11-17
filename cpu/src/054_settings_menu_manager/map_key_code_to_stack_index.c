/* @k10d map_key_code_to_stack_index @ 0x103bda02
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_key_code_to_stack_index(void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  auStack_24[0] = 0x101006b;
  auStack_24[1] = 0x101006c;
  auStack_24[2] = 0x101006d;
  auStack_24[3] = 0x101006e;
  auStack_24[4] = 0x101006f;
  auStack_24[5] = 0x1010070;
  auStack_24[6] = 0x1010071;
  uVar4 = 0xff;
  iVar3 = 1;
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (*(byte *)(uVar2 + 0x10594e53/*ROM*/) == param_2) {
      uVar4 = uVar2 & 0xff;
    }
    if (*(byte *)(uVar2 + 0x10594e54/*ROM*/) == param_2) {
      uVar4 = uVar2 + 1 & 0xff;
    }
    if (*(byte *)(uVar2 + 0x10594e55/*ROM*/) == param_2) {
      uVar4 = uVar2 + 2 & 0xff;
    }
    iVar3 = iVar3 + -1;
    uVar1 = uVar2 + 3;
  } while (-1 < iVar3);
  if (*(byte *)(uVar2 + 0x10594e56/*ROM*/) == param_2) {
    uVar4 = uVar2 + 3 & 0xff;
  }
  dispatch_virtual_event_by_index(param_1,uVar4);
  return auStack_24[uVar4];
}
