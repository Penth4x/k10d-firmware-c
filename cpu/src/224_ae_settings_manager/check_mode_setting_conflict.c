/* @k10d check_mode_setting_conflict @ 0x104baf92
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates through a table of setting dependencies to determine if the current mode
 *   configuration is valid.
 * summary:
 *   The function reads a primary setting value (param_1) from the working copy using
 *   setting_get. It then loops through four entries in a static table (starting at
 *   0x105b8e84), comparing the primary value against expected values stored in the table.
 *   For each match, it checks secondary settings (offsets in the table) to see if they are
 *   set to specific values (1 or 7). If a conflict is found (e.g., a required setting is
 *   not 1 or 7), it sets a flag (uStack_20) to 1. The function returns 1 if any conflict is
 *   detected, otherwise 0. The logic suggests it is validating that certain camera settings
 *   are compatible with the current mode or state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104bb170) overlaps instruction at (ram,0x104bb16e)
    */

uint32_t check_mode_setting_conflict(uint32_t param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t uStack_20;
  int iStack_c;
  
  if (param_3 < 1) {
    iVar4 = 0;
    iVar3 = 0xd;
  }
  else {
    iVar4 = (param_3 + -1) * 0x80;
    iVar3 = iVar4 + 0x135;
  }
  uStack_20 = 0;
  iVar1 = setting_get((int)param_2,iVar3);
  iStack_c = 4;
  iVar3 = (uint)(0 < param_3) * 0xf0;
  do {
    if (*(int *)(&DAT_105b8e84/*ROM*/ + iVar3) == iVar1) {
      if (*(int *)(&DAT_105b8e88/*ROM*/ + iVar3) == -1) {
        iVar2 = setting_get((int)param_2,*(int *)(iVar3 + 0x105b8e8c/*ROM*/) + iVar4);
        if ((iVar2 != 7) ||
           (iVar2 = setting_get((int)param_2,*(int *)(&DAT_105b8e90/*ROM*/ + iVar3) + iVar4), iVar2 != 7))
        {
          uStack_20 = 1;
        }
      }
      else {
        iVar2 = setting_get((int)param_2,*(int *)(&DAT_105b8e88/*ROM*/ + iVar3) + iVar4);
        if ((iVar2 == 1) &&
           ((iVar2 = setting_get((int)param_2,*(int *)(iVar3 + 0x105b8e8c/*ROM*/) + iVar4), iVar2 != 7 ||
            (iVar2 = setting_get((int)param_2,*(int *)(&DAT_105b8e90/*ROM*/ + iVar3) + iVar4), iVar2 != 7)
            ))) {
          uStack_20 = 1;
        }
      }
    }
    if (*(int *)(iVar3 + 0x105b8e94/*ROM*/) == iVar1) {
      if (*(int *)(iVar3 + 0x105b8e98/*ROM*/) == -1) {
        iVar2 = setting_get((int)param_2,*(int *)(iVar3 + 0x105b8e9c/*ROM*/) + iVar4);
        if ((iVar2 != 7) ||
           (iVar2 = setting_get((int)param_2,*(int *)(iVar3 + 0x105b8ea0/*ROM*/) + iVar4), iVar2 != 7)) {
          uStack_20 = 1;
        }
      }
      else {
        iVar2 = setting_get((int)param_2,*(int *)(iVar3 + 0x105b8e98/*ROM*/) + iVar4);
        if ((iVar2 == 1) &&
           ((iVar2 = setting_get((int)param_2,*(int *)(iVar3 + 0x105b8e9c/*ROM*/) + iVar4), iVar2 != 7 ||
            (iVar2 = setting_get((int)param_2,*(int *)(iVar3 + 0x105b8ea0/*ROM*/) + iVar4), iVar2 != 7))))
        {
          uStack_20 = 1;
        }
      }
    }
    if (*(int *)(iVar3 + 0x105b8ea4/*ROM*/) == iVar1) {
      if (*(int *)(iVar3 + 0x105b8ea8/*ROM*/) == -1) {
        iVar2 = setting_get((int)param_2,*(int *)(iVar3 + 0x105b8eac/*ROM*/) + iVar4);
        if ((iVar2 != 7) ||
           (iVar2 = setting_get((int)param_2,*(int *)(iVar3 + 0x105b8eb0/*ROM*/) + iVar4), iVar2 != 7)) {
          uStack_20 = 1;
        }
      }
      else {
        iVar2 = setting_get((int)param_2,*(int *)(iVar3 + 0x105b8ea8/*ROM*/) + iVar4);
        if ((iVar2 == 1) &&
           ((iVar2 = setting_get((int)param_2,*(int *)(iVar3 + 0x105b8eac/*ROM*/) + iVar4), iVar2 != 7 ||
            (iVar2 = setting_get((int)param_2,*(int *)(iVar3 + 0x105b8eb0/*ROM*/) + iVar4), iVar2 != 7))))
        {
          uStack_20 = 1;
        }
      }
    }
    iVar3 = iVar3 + 0x30;
    iStack_c = iStack_c + -1;
  } while (-1 < iStack_c);
  return uStack_20;
}
