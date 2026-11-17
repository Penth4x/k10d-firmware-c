/* @k10d select_char_based_offset @ 0x103c8a08
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 060_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns a pointer offset selected by a character at param_1+0x25 when param_2 is
 *   0x104002c, else 0.
 * summary:
 *   Gates on param_2 == 0x104002c. Reads the byte at param_1+0x25 and maps it to one of
 *   several 0x10400xx constants (e.g., 0x1040015 for '2', 0x1040018 for ':', 0x104001b for
 *   '3'/'4', 0x1040020 for '5', 0x1040023 for '6', 0x1040028 for '9'/'\t', default
 *   0x1040010). It also calls setting_get(param_1[2], 0x96) and setting_get(param_1[2],
 *   0x90), and in all branches invokes virtual slot 1 of an object returned by
 *   menu_item_register(*param_1) with arguments 0 and 1. Returns the selected offset or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103c8a20) overlaps instruction at (ram,0x103c8a1e)
    */

uint32_t select_char_based_offset(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint32_t uVar3;
  
  if (param_2 == 0x104002c) {
    cVar1 = *(char *)((int)param_1 + 0x25);
    if (cVar1 == '2') {
      uVar3 = 0x1040015;
    }
    else if (cVar1 == ':') {
      uVar3 = 0x1040018;
    }
    else if ((cVar1 == '4') || (cVar1 == '3')) {
      uVar3 = 0x104001b;
    }
    else if (cVar1 == '5') {
      uVar3 = 0x1040020;
    }
    else if (cVar1 == '9') {
      uVar3 = 0x1040028;
    }
    else if (cVar1 == '6') {
      uVar3 = 0x1040023;
    }
    else if (cVar1 == '\t') {
      uVar3 = 0x1040028;
    }
    else {
      uVar3 = 0x1040010;
    }
    iVar2 = setting_get(param_1[2],0x96);
    if (iVar2 == 1) {
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    }
    else {
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    }
    iVar2 = setting_get(param_1[2],0x90);
    if (iVar2 == 0) {
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    }
    else {
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
