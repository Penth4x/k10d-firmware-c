/* @k10d resolve_setting_option_id @ 0x103c7c9a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 058_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Maps a parent option ID and current setting values to a specific child option ID.
 * summary:
 *   The function takes a context object and a parent ID (param_2). For specific parent IDs
 *   (0x1030029, 0x1030013, 0x1030020), it reads settings (IDs 0x73, 0x7f) via setting_get
 *   and compares the result against a set of known values to determine an index. It then
 *   returns a corresponding child ID from a local array or based on a character check. The
 *   logic mechanically resolves a hierarchical option structure based on current
 *   configuration state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t resolve_setting_option_id(int param_1,int param_2)

{
  char cVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  uintptr_t sp;
  uint32_t auStack_28 [8];
  
  uVar2 = 0;
  if (param_2 == 0x1030029) {
    cVar1 = *(char *)(param_1 + 0x21);
    if (cVar1 == 'c') {
      uVar2 = 0x1030010;
    }
    else if (cVar1 == '/') {
      uVar2 = 0x1030013;
    }
    else if (cVar1 == '0') {
      uVar2 = 0x103001a;
    }
    else if (cVar1 == '1') {
      uVar2 = 0x1030020;
    }
    else {
      uVar2 = 0x103000b;
    }
  }
  else if (param_2 == 0x1030013) {
    auStack_28[0] = 0x1030016;
    auStack_28[1] = 0x1030017;
    auStack_28[2] = 0x1030018;
    auStack_28[3] = 0x1030019;
    uVar4 = setting_get(*(int *)(param_1 + 8),0x73);
    iVar3 = 0xff;
    if (bRam10595770 == uVar4) {
      iVar3 = 0;
    }
    if (bRam10595771 == uVar4) {
      iVar3 = 1;
    }
    if (bRam10595772 == uVar4) {
      iVar3 = 2;
    }
    if (bRam10595773 == uVar4) {
      iVar3 = 3;
    }
    uVar2 = auStack_28[iVar3];
  }
  else if (param_2 == 0x1030020) {
    auStack_28[4] = 0x1030023;
    auStack_28[5] = 0x1030024;
    auStack_28[6] = 0x1030025;
    auStack_28[7] = 0x1030026;
    uVar4 = setting_get(*(int *)(param_1 + 8),0x7f);
    iVar3 = 0xff;
    if (bRam10595774 == uVar4) {
      iVar3 = 0;
    }
    if (bRam10595775 == uVar4) {
      iVar3 = 1;
    }
    if (bRam10595776 == uVar4) {
      iVar3 = 2;
    }
    if (bRam10595777 == uVar4) {
      iVar3 = 3;
    }
    uVar2 = auStack_28[iVar3 + 4];
  }
  return uVar2;
}
