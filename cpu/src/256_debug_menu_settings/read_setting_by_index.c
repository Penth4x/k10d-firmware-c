/* @k10d read_setting_by_index @ 0x104f0c30
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Selects a setting ID from a param_2 index based on a flag from
 *   check_object_property_43, then reads that setting.
 * summary:
 *   Calls check_object_property_43(param_1) to obtain a flag. If the flag is zero, it maps
 *   param_2 (0-0xe) to a low setting ID range (0x11-0x2f); otherwise it maps param_2 to a
 *   high setting ID range (0x139-0x157). It then calls setting_get with the ID from
 *   *(param_1+0xc) and the computed setting ID. The function returns void, discarding the
 *   setting value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_setting_by_index(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    switch(param_2) {
    case 0:
      iVar2 = 0x11;
      break;
    case 1:
      iVar2 = 0x13;
      break;
    case 2:
      iVar2 = 0x15;
      break;
    case 3:
      iVar2 = 0x17;
      break;
    case 4:
      iVar2 = 0x19;
      break;
    case 5:
      iVar2 = 0x1b;
      break;
    case 6:
      iVar2 = 0x1d;
      break;
    case 7:
      iVar2 = 0x1f;
      break;
    case 8:
      iVar2 = 0x21;
      break;
    case 9:
      iVar2 = 0x23;
      break;
    case 10:
      iVar2 = 0x25;
      break;
    case 0xb:
      iVar2 = 0x27;
      break;
    case 0xc:
      iVar2 = 0x29;
      break;
    case 0xd:
      iVar2 = 0x2c;
      break;
    case 0xe:
      iVar2 = 0x2f;
    }
  }
  else {
    switch(param_2) {
    case 0:
      iVar2 = 0x139;
      break;
    case 1:
      iVar2 = 0x13b;
      break;
    case 2:
      iVar2 = 0x13d;
      break;
    case 3:
      iVar2 = 0x13f;
      break;
    case 4:
      iVar2 = 0x141;
      break;
    case 5:
      iVar2 = 0x143;
      break;
    case 6:
      iVar2 = 0x145;
      break;
    case 7:
      iVar2 = 0x147;
      break;
    case 8:
      iVar2 = 0x149;
      break;
    case 9:
      iVar2 = 0x14b;
      break;
    case 10:
      iVar2 = 0x14d;
      break;
    case 0xb:
      iVar2 = 0x14f;
      break;
    case 0xc:
      iVar2 = 0x151;
      break;
    case 0xd:
      iVar2 = 0x154;
      break;
    case 0xe:
      iVar2 = 0x157;
    }
  }
  setting_get(*(int *)(param_1 + 0xc),iVar2);
  return;
}
