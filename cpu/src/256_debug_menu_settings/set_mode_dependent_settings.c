/* @k10d set_mode_dependent_settings @ 0x104f0994
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Selects and writes two setting values based on a mode index and a status flag.
 * summary:
 *   Switches on param_4 (0-14) to select a pair of setting IDs (uVar3, uVar4). For most
 *   cases, it calls check_object_property_43 to determine which pair to use; case 0 also
 *   calls check_setting_0xbb_is_one to potentially override the values passed to the final
 *   helper. It writes the selected IDs to the settings block via setting_set and calls
 *   process_event_with_7x7_check with the original param_2/param_3.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104f09ac) overlaps instruction at (ram,0x104f09aa)
    */

void set_mode_dependent_settings(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  
  uVar3 = 0;
  switch(param_4) {
  case 0:
    iVar1 = check_setting_0xbb_is_one(param_1);
    if (iVar1 == 0) {
      param_2 = 7;
      param_3 = 7;
    }
    uVar2 = check_object_property_43(param_1);
    if (uVar2 == 0) {
      uVar3 = 0x11;
      uVar4 = 0x12;
    }
    else {
      uVar3 = 0x139;
      uVar4 = 0x13a;
    }
    break;
  case 1:
    uVar2 = check_object_property_43(param_1);
    if (uVar2 == 0) {
      uVar3 = 0x13;
      uVar4 = 0x14;
    }
    else {
      uVar3 = 0x13b;
      uVar4 = 0x13c;
    }
    break;
  case 2:
    uVar2 = check_object_property_43(param_1);
    if (uVar2 == 0) {
      uVar3 = 0x15;
      uVar4 = 0x16;
    }
    else {
      uVar3 = 0x13d;
      uVar4 = 0x13e;
    }
    break;
  case 3:
    uVar2 = check_object_property_43(param_1);
    if (uVar2 == 0) {
      uVar3 = 0x17;
      uVar4 = 0x18;
    }
    else {
      uVar3 = 0x13f;
      uVar4 = 0x140;
    }
    break;
  case 4:
    uVar2 = check_object_property_43(param_1);
    if (uVar2 == 0) {
      uVar3 = 0x19;
      uVar4 = 0x1a;
    }
    else {
      uVar3 = 0x141;
      uVar4 = 0x142;
    }
    break;
  case 5:
    uVar2 = check_object_property_43(param_1);
    if (uVar2 == 0) {
      uVar3 = 0x1b;
      uVar4 = 0x1c;
    }
    else {
      uVar3 = 0x143;
      uVar4 = 0x144;
    }
    break;
  case 6:
    uVar2 = check_object_property_43(param_1);
    if (uVar2 == 0) {
      uVar3 = 0x1d;
      uVar4 = 0x1e;
    }
    else {
      uVar3 = 0x145;
      uVar4 = 0x146;
    }
    break;
  case 7:
    uVar2 = check_object_property_43(param_1);
    if (uVar2 == 0) {
      uVar3 = 0x1f;
      uVar4 = 0x20;
    }
    else {
      uVar3 = 0x147;
      uVar4 = 0x148;
    }
    break;
  case 8:
    uVar2 = check_object_property_43(param_1);
    if (uVar2 == 0) {
      uVar3 = 0x21;
      uVar4 = 0x22;
    }
    else {
      uVar3 = 0x149;
      uVar4 = 0x14a;
    }
    break;
  case 9:
    uVar2 = check_object_property_43(param_1);
    if (uVar2 == 0) {
      uVar3 = 0x23;
      uVar4 = 0x24;
    }
    else {
      uVar3 = 0x14b;
      uVar4 = 0x14c;
    }
    break;
  case 10:
    uVar2 = check_object_property_43(param_1);
    if (uVar2 == 0) {
      uVar3 = 0x25;
      uVar4 = 0x26;
    }
    else {
      uVar3 = 0x14d;
      uVar4 = 0x14e;
    }
    break;
  case 0xb:
    uVar2 = check_object_property_43(param_1);
    if (uVar2 == 0) {
      uVar3 = 0x27;
      uVar4 = 0x28;
    }
    else {
      uVar3 = 0x14f;
      uVar4 = 0x150;
    }
    break;
  case 0xc:
    uVar2 = check_object_property_43(param_1);
    if (uVar2 == 0) {
      uVar3 = 0x29;
      uVar4 = 0x2a;
    }
    else {
      uVar3 = 0x151;
      uVar4 = 0x152;
    }
    break;
  case 0xd:
    uVar2 = check_object_property_43(param_1);
    if (uVar2 == 0) {
      uVar3 = 0x2c;
      uVar4 = 0x2d;
    }
    else {
      uVar3 = 0x154;
      uVar4 = 0x155;
    }
    break;
  case 0xe:
    uVar2 = check_object_property_43(param_1);
    if (uVar2 == 0) {
      uVar3 = 0x2f;
      uVar4 = 0x30;
    }
    else {
      uVar3 = 0x157;
      uVar4 = 0x158;
    }
    break;
  default:
    uVar4 = 0;
  }
  setting_set(*(int *)(param_1 + 0xc),uVar3,param_2);
  setting_set(*(int *)(param_1 + 0xc),uVar4,param_3);
  process_event_with_7x7_check(*(uint32_t *)(param_1 + 0x20),param_2,param_3);
  return;
}
