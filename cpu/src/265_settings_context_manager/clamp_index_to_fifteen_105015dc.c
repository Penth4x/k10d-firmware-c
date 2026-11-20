/* @k10d clamp_index_to_fifteen_105015dc @ 0x105015dc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clamp_index_to_fifteen_105015dc(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = (*(code *)0x10453676/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar1 == 1) {
    uVar2 = 1;
  }
  else if (iVar1 == 2) {
    uVar2 = 2;
  }
  else if (iVar1 == 3) {
    uVar2 = 3;
  }
  else if (iVar1 == 4) {
    uVar2 = 4;
  }
  else if (iVar1 == 5) {
    uVar2 = 5;
  }
  else if (iVar1 == 6) {
    uVar2 = 6;
  }
  else if (iVar1 == 7) {
    uVar2 = 7;
  }
  else if (iVar1 == 8) {
    uVar2 = 8;
  }
  else if (iVar1 == 9) {
    uVar2 = 9;
  }
  else if (iVar1 == 10) {
    uVar2 = 10;
  }
  else if (iVar1 == 0xb) {
    uVar2 = 0xb;
  }
  else if (iVar1 == 0xc) {
    uVar2 = 0xc;
  }
  else if (iVar1 == 0xd) {
    uVar2 = 0xd;
  }
  else {
    uVar2 = 0xe;
    if (iVar1 != 0xe) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
