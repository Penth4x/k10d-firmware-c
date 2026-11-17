/* @k10d map_status_code_to_enum @ 0x104a6baa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_status_code_to_enum(int param_1)

{
  uint8_t uVar1;
  uint32_t uVar2;
  int iVar3;
  
  uVar2 = *(uint32_t *)(param_1 + 0x50);
  iVar3 = **(int **)(param_1 + 0x14);
  uVar1 = (**(code **)(iVar3 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar3 + 0x10),2);
  iVar3 = lookup_two_byte_table_entry_1045a690(uVar2,uVar1,1,0);
  if (iVar3 == 400) {
    uVar2 = 0x108;
  }
  else if (iVar3 < 0x191) {
    if (iVar3 == 0x46) {
      uVar2 = 0x103;
    }
    else if (iVar3 < 0x47) {
      if (iVar3 == 0x19) {
        uVar2 = 0x100;
      }
      else if (iVar3 == 0x23) {
        uVar2 = 0x101;
      }
      else if (iVar3 == 0x32) {
        uVar2 = 0x102;
      }
      else {
        uVar2 = 0;
      }
    }
    else if (iVar3 == 100) {
      uVar2 = 0x104;
    }
    else if (iVar3 == 0x8c) {
      uVar2 = 0x105;
    }
    else if (iVar3 == 200) {
      uVar2 = 0x106;
    }
    else if (iVar3 == 0x118) {
      uVar2 = 0x107;
    }
    else {
      uVar2 = 0;
    }
  }
  else if (iVar3 == 0x640) {
    uVar2 = 0x10c;
  }
  else if (iVar3 < 0x641) {
    if (iVar3 == 0x230) {
      uVar2 = 0x109;
    }
    else if (iVar3 == 800) {
      uVar2 = 0x10a;
    }
    else if (iVar3 == 0x44c) {
      uVar2 = 0x10b;
    }
    else {
      uVar2 = 0;
    }
  }
  else if (iVar3 == 0x898) {
    uVar2 = 0x10d;
  }
  else if (iVar3 == 0xc80) {
    uVar2 = 0x10e;
  }
  else if (iVar3 == 0x1194) {
    uVar2 = 0x10f;
  }
  else if (iVar3 == 0x1900) {
    uVar2 = 0x110;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
