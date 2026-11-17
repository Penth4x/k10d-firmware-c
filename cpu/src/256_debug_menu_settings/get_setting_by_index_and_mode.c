/* @k10d get_setting_by_index_and_mode @ 0x104f0d28
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_by_index_and_mode(int param_1,uint param_2)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    switch(param_2) {
    case 0:
      iVar3 = 0x12;
      break;
    case 1:
      iVar3 = 0x14;
      break;
    case 2:
      iVar3 = 0x16;
      break;
    case 3:
      iVar3 = 0x18;
      break;
    case 4:
      iVar3 = 0x1a;
      break;
    case 5:
      iVar3 = 0x1c;
      break;
    case 6:
      iVar3 = 0x1e;
      break;
    case 7:
      iVar3 = 0x20;
      break;
    case 8:
      iVar3 = 0x22;
      break;
    case 9:
      iVar3 = 0x24;
      break;
    case 10:
      iVar3 = 0x26;
      break;
    case 0xb:
      iVar3 = 0x28;
      break;
    case 0xc:
      iVar3 = 0x2a;
      break;
    case 0xd:
      iVar3 = 0x2d;
      break;
    case 0xe:
      iVar3 = 0x30;
    }
  }
  else {
    switch(param_2) {
    case 0:
      iVar3 = 0x13a;
      break;
    case 1:
      iVar3 = 0x13c;
      break;
    case 2:
      iVar3 = 0x13e;
      break;
    case 3:
      iVar3 = 0x140;
      break;
    case 4:
      iVar3 = 0x142;
      break;
    case 5:
      iVar3 = 0x144;
      break;
    case 6:
      iVar3 = 0x146;
      break;
    case 7:
      iVar3 = 0x148;
      break;
    case 8:
      iVar3 = 0x14a;
      break;
    case 9:
      iVar3 = 0x14c;
      break;
    case 10:
      iVar3 = 0x14e;
      break;
    case 0xb:
      iVar3 = 0x150;
      break;
    case 0xc:
      iVar3 = 0x152;
      break;
    case 0xd:
      iVar3 = 0x155;
      break;
    case 0xe:
      iVar3 = 0x158;
    }
  }
  uVar2 = setting_get(*(int *)(param_1 + 0xc),iVar3);
  return uVar2;
}
