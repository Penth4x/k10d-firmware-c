/* @k10d map_exposure_mode_codes @ 0x1049c0b4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps raw exposure mode and sub-mode codes from a lens/body struct into sequential
 *   indices stored in an app state struct.
 * summary:
 *   Calls read_u16_from_struct_array to retrieve raw mode values (indices 0 and 1) from
 *   param_2. Translates these raw values (including APEX modes 0-7, bulb/flash 0x100-0x103,
 *   and sub-modes) into sequential 1-based indices. Writes the mapped primary mode to
 *   offset 0x84 and conditional sub-modes to offsets 0x88 and 0x8c of the struct pointed to
 *   by *(param_1 + 0x10).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_exposure_mode_codes(int param_1,int param_2)

{
  ushort uVar2;
  int iVar1;
  ushort uVar3;
  uint32_t uVar4;
  
  uVar2 = read_u16_from_struct_array(param_2,0);
  uVar4 = 0;
  if (uVar2 == 8) {
    uVar4 = 9;
  }
  else if (uVar2 < 9) {
    if (uVar2 == 3) {
      uVar4 = 4;
    }
    else if (uVar2 < 4) {
      if (uVar2 == 0) {
        uVar4 = 1;
      }
      else if (uVar2 == 1) {
        uVar4 = 2;
      }
      else if (uVar2 == 2) {
        uVar4 = 3;
      }
    }
    else if (uVar2 == 4) {
      uVar4 = 5;
    }
    else if (uVar2 == 5) {
      uVar4 = 6;
    }
    else if (uVar2 == 6) {
      uVar4 = 7;
    }
    else if (uVar2 == 7) {
      uVar4 = 8;
    }
  }
  else if (uVar2 == 0xc) {
    uVar4 = 0xd;
  }
  else if (uVar2 < 0xd) {
    if (uVar2 == 9) {
      uVar4 = 10;
    }
    else if (uVar2 == 10) {
      uVar4 = 0xb;
    }
    else if (uVar2 == 0xb) {
      uVar4 = 0xc;
    }
  }
  else if (uVar2 == 0x100) {
    uVar4 = 0xe;
  }
  else if (uVar2 == 0x101) {
    uVar4 = 0xf;
  }
  else if (uVar2 == 0x102) {
    uVar4 = 0x10;
  }
  else if (uVar2 == 0x103) {
    uVar4 = 0x11;
  }
  *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x84) = uVar4;
  if (*(int *)(param_2 + 4) == 2) {
    uVar2 = read_u16_from_struct_array(param_2,1);
    iVar1 = (int)(uint)uVar2 >> 8;
    uVar4 = 0;
    if (iVar1 == 1) {
      uVar4 = 2;
    }
    else if (iVar1 == 2) {
      uVar4 = 3;
    }
    else if (iVar1 == 3) {
      uVar4 = 4;
    }
    else if (iVar1 == 4) {
      uVar4 = 5;
    }
    else if (iVar1 == 5) {
      uVar4 = 6;
    }
    *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x88) = uVar4;
    uVar2 = read_u16_from_struct_array(param_2,1);
    uVar3 = uVar2 & 0xff;
    uVar4 = 0;
    if ((uVar2 & 0xff) == 0) {
      uVar4 = 1;
    }
    else if (uVar3 == 1) {
      uVar4 = 2;
    }
    else if (uVar3 == 2) {
      uVar4 = 3;
    }
    else if (uVar3 == 3) {
      uVar4 = 4;
    }
    *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x8c) = uVar4;
  }
  return;
}
