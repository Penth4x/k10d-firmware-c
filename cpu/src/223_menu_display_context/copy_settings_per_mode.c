/* @k10d copy_settings_per_mode @ 0x104ba964
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 223_menu_display_context (unit names are model-proposed)
 * purpose:
 *   Copies camera settings from a source mode block to destination mode blocks based on a
 *   mode-specific mapping table.
 * summary:
 *   Iterates through a single mode (loop runs once) and uses a table of setting IDs to copy
 *   values from the current mode's settings to other modes. It calls setting_get to read
 *   source values and setting_set to write them to destination IDs, which are offset by
 *   0x80 per iteration. It also conditionally calls call_helper_on_two_pointers_10484ba2
 *   and call_helper_with_offset_arg_10484e00 for specific mode values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_settings_per_mode(uint32_t param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t local_48 [4];
  int iStack_34;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  piVar5 = (int *)local_48;
  iStack_20 = 0;
  iStack_34 = 0;
  iStack_1c = 0x135;
  iStack_18 = 0x136;
  iStack_14 = 0x137;
  iStack_10 = 0x15a;
  iStack_c = 0x138;
  do {
    iVar1 = setting_get(param_2,iStack_1c);
    iStack_24 = 2;
    iVar3 = 0;
    do {
      if (*(int *)(&DAT_105b9094/*ROM*/ + iVar3) != iVar1) {
        iVar4 = *(int *)(&DAT_105b9188/*ROM*/ + iVar3);
        uVar2 = setting_get(param_2,*(int *)(&DAT_105b9098/*ROM*/ + iVar3));
        setting_set(param_2,iVar4 + iStack_34,uVar2);
        iVar4 = *(int *)(&DAT_105b918c/*ROM*/ + iVar3);
        uVar2 = setting_get(param_2,*(int *)(&DAT_105b909c/*ROM*/ + iVar3));
        setting_set(param_2,iVar4 + iStack_34,uVar2);
        iVar4 = *(int *)(&DAT_105b9190/*ROM*/ + iVar3);
        uVar2 = setting_get(param_2,*(int *)(&DAT_105b90a0/*ROM*/ + iVar3));
        setting_set(param_2,iVar4 + iStack_34,uVar2);
      }
      if (*(int *)(&DAT_105b90a4/*ROM*/ + iVar3) != iVar1) {
        iVar4 = *(int *)(&DAT_105b9198/*ROM*/ + iVar3);
        uVar2 = setting_get(param_2,*(int *)(&DAT_105b90a8/*ROM*/ + iVar3));
        setting_set(param_2,iVar4 + iStack_34,uVar2);
        iVar4 = *(int *)(&DAT_105b919c/*ROM*/ + iVar3);
        uVar2 = setting_get(param_2,*(int *)(&DAT_105b90ac/*ROM*/ + iVar3));
        setting_set(param_2,iVar4 + iStack_34,uVar2);
        iVar4 = *(int *)(&DAT_105b91a0/*ROM*/ + iVar3);
        uVar2 = setting_get(param_2,*(int *)(&DAT_105b90b0/*ROM*/ + iVar3));
        setting_set(param_2,iVar4 + iStack_34,uVar2);
      }
      if (*(int *)(&DAT_105b90b4/*ROM*/ + iVar3) != iVar1) {
        iVar4 = *(int *)(&DAT_105b91a8/*ROM*/ + iVar3);
        uVar2 = setting_get(param_2,*(int *)(&DAT_105b90b8/*ROM*/ + iVar3));
        setting_set(param_2,iVar4 + iStack_34,uVar2);
        iVar4 = *(int *)(&DAT_105b91ac/*ROM*/ + iVar3);
        uVar2 = setting_get(param_2,*(int *)(&DAT_105b90bc/*ROM*/ + iVar3));
        setting_set(param_2,iVar4 + iStack_34,uVar2);
        iVar4 = *(int *)(&DAT_105b91b0/*ROM*/ + iVar3);
        uVar2 = setting_get(param_2,*(int *)(&DAT_105b90c0/*ROM*/ + iVar3));
        setting_set(param_2,iVar4 + iStack_34,uVar2);
      }
      if (*(int *)(&DAT_105b90c4/*ROM*/ + iVar3) != iVar1) {
        iVar4 = *(int *)(&DAT_105b91b8/*ROM*/ + iVar3);
        uVar2 = setting_get(param_2,*(int *)(&DAT_105b90c8/*ROM*/ + iVar3));
        setting_set(param_2,iVar4 + iStack_34,uVar2);
        iVar4 = *(int *)(&DAT_105b91bc/*ROM*/ + iVar3);
        uVar2 = setting_get(param_2,*(int *)(&DAT_105b90cc/*ROM*/ + iVar3));
        setting_set(param_2,iVar4 + iStack_34,uVar2);
        iVar4 = *(int *)(&DAT_105b91c0/*ROM*/ + iVar3);
        uVar2 = setting_get(param_2,*(int *)(&DAT_105b90d0/*ROM*/ + iVar3));
        setting_set(param_2,iVar4 + iStack_34,uVar2);
      }
      if (*(int *)(&DAT_105b90d4/*ROM*/ + iVar3) != iVar1) {
        iVar4 = *(int *)(&DAT_105b91c8/*ROM*/ + iVar3);
        uVar2 = setting_get(param_2,*(int *)(&DAT_105b90d8/*ROM*/ + iVar3));
        setting_set(param_2,iVar4 + iStack_34,uVar2);
        iVar4 = *(int *)(&DAT_105b91cc/*ROM*/ + iVar3);
        uVar2 = setting_get(param_2,*(int *)(&DAT_105b90dc/*ROM*/ + iVar3));
        setting_set(param_2,iVar4 + iStack_34,uVar2);
        iVar4 = *(int *)(&DAT_105b91d0/*ROM*/ + iVar3);
        uVar2 = setting_get(param_2,*(int *)(&DAT_105b90e0/*ROM*/ + iVar3));
        setting_set(param_2,iVar4 + iStack_34,uVar2);
      }
      iVar3 = iVar3 + 0x50;
      iStack_24 = iStack_24 + -1;
    } while (-1 < iStack_24);
    if (((iVar1 != 4) && (iVar1 != 5)) && (iVar1 != 6)) {
      uVar2 = setting_get(param_2,0xe);
      setting_set(param_2,iStack_18,uVar2);
    }
    if (iVar1 != 9) {
      if ((iVar1 != 10) && (iVar1 != 0xb)) {
        uVar2 = setting_get(param_2,0xf);
        setting_set(param_2,iStack_14,uVar2);
        uVar2 = setting_get(param_2,0x32);
        setting_set(param_2,iStack_10,uVar2);
      }
      uVar2 = call_helper_with_offset_arg_10484e00(param_2);
      *piVar5 = iStack_20;
      call_helper_on_two_pointers_10484ba2(param_2,0,uVar2,4,*piVar5);
    }
    if (iVar1 != 10) {
      uVar2 = call_helper_with_offset_arg_10484e00(param_2);
      *piVar5 = iStack_20;
      call_helper_on_two_pointers_10484ba2(param_2,1,uVar2,4,*piVar5);
    }
    if (iVar1 != 0xb) {
      uVar2 = call_helper_with_offset_arg_10484e00(param_2);
      *piVar5 = iStack_20;
      call_helper_on_two_pointers_10484ba2(param_2,2,uVar2,4,*piVar5);
    }
    if (((iVar1 != 0xc) && (iVar1 != 0xd)) && (iVar1 != 0xe)) {
      uVar2 = setting_get(param_2,0x10);
      setting_set(param_2,iStack_c,uVar2);
    }
    iStack_20 = iStack_20 + 1;
    iStack_34 = iStack_34 + 0x80;
    iStack_c = iStack_c + 0x80;
    iStack_10 = iStack_10 + 0x80;
    iStack_14 = iStack_14 + 0x80;
    iStack_18 = iStack_18 + 0x80;
    iStack_1c = iStack_1c + 0x80;
  } while (iStack_20 < 1);
  return;
}
