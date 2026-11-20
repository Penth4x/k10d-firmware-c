/* @k10d map_iso_code_to_index @ 0x104a6d00
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_iso_code_to_index(int param_1)

{
  uint8_t uVar1;
  uint32_t uVar2;
  int iVar3;
  
  uVar2 = *(uint32_t *)(param_1 + 0x50);
  iVar3 = **(int **)(param_1 + 0x14);
  uVar1 = (((vtbl_entry*)(iVar3))[2].fn)
                    ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar3))[2].adj,2);
  iVar3 = lookup_two_byte_table_entry_1045a690(uVar2,uVar1,1,1);
  if (iVar3 == 400) {
    uVar2 = 0xc;
  }
  else if (iVar3 < 0x191) {
    if (iVar3 == 0x50) {
      uVar2 = 5;
    }
    else if (iVar3 < 0x51) {
      if (iVar3 == 0x28) {
        uVar2 = 2;
      }
      else if (iVar3 < 0x29) {
        if (iVar3 == 0x19) {
          uVar2 = 0;
        }
        else if (iVar3 == 0x20) {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else if (iVar3 == 0x32) {
        uVar2 = 3;
      }
      else if (iVar3 == 0x40) {
        uVar2 = 4;
      }
      else {
        uVar2 = 0;
      }
    }
    else if (iVar3 == 0xa0) {
      uVar2 = 8;
    }
    else if (iVar3 < 0xa1) {
      if (iVar3 == 100) {
        uVar2 = 6;
      }
      else if (iVar3 == 0x7d) {
        uVar2 = 7;
      }
      else {
        uVar2 = 0;
      }
    }
    else if (iVar3 == 200) {
      uVar2 = 9;
    }
    else if (iVar3 == 0xfa) {
      uVar2 = 10;
    }
    else if (iVar3 == 0x140) {
      uVar2 = 0xb;
    }
    else {
      uVar2 = 0;
    }
  }
  else if (iVar3 == 0x640) {
    uVar2 = 0x12;
  }
  else if (iVar3 < 0x641) {
    if (iVar3 == 800) {
      uVar2 = 0xf;
    }
    else if (iVar3 < 0x321) {
      if (iVar3 == 500) {
        uVar2 = 0xd;
      }
      else if (iVar3 == 0x280) {
        uVar2 = 0xe;
      }
      else {
        uVar2 = 0;
      }
    }
    else if (iVar3 == 1000) {
      uVar2 = 0x10;
    }
    else if (iVar3 == 0x4e2) {
      uVar2 = 0x11;
    }
    else {
      uVar2 = 0;
    }
  }
  else if (iVar3 == 0xc80) {
    uVar2 = 0x15;
  }
  else if (iVar3 < 0xc81) {
    if (iVar3 == 2000) {
      uVar2 = 0x13;
    }
    else if (iVar3 == 0x9c4) {
      uVar2 = 0x14;
    }
    else {
      uVar2 = 0;
    }
  }
  else if (iVar3 == 4000) {
    uVar2 = 0x16;
  }
  else if (iVar3 == 5000) {
    uVar2 = 0x17;
  }
  else if (iVar3 == 0x1900) {
    uVar2 = 0x18;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
