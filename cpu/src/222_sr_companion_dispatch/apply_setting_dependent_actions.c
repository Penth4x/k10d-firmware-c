/* @k10d apply_setting_dependent_actions @ 0x104ba612
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Iterates through a table of setting dependencies and calls an action handler for each
 *   enabled dependent setting.
 * summary:
 *   The function first checks a condition via set_pointer_and_clear_flag. If true, it loops
 *   through a table of 0x50-byte entries (up to 16 times). For each entry, it reads
 *   specific setting IDs from param_2 using setting_get. If a setting is non-zero, it calls
 *   apply_settings_and_refresh_copy for each associated dependent setting ID that is not
 *   -1. Finally, it calls delete_signal_semaphore.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104ba7f0) overlaps instruction at (ram,0x104ba7ee)
    */

uint32_t apply_setting_dependent_actions(int param_1,void *param_2)

{
  bool bVar2;
  int iVar1;
  int iVar3;
  int iStack_10;
  
  bVar2 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  if (bVar2) {
    iStack_10 = 1;
    iVar3 = 0;
    while( true ) {
      if ((*(int *)(iVar3 + 0x105b8de4/*ROM*/) != -1) &&
         (iVar1 = setting_get((int)param_2,*(int *)(iVar3 + 0x105b8de4/*ROM*/)), iVar1 != 0)) {
        if (*(int *)(iVar3 + 0x105b8de8/*ROM*/) != -1) {
          apply_settings_and_refresh_copy(param_2);
        }
        if (*(int *)(iVar3 + 0x105b8dec/*ROM*/) != -1) {
          apply_settings_and_refresh_copy(param_2);
        }
        if (*(int *)(iVar3 + 0x105b8df0/*ROM*/) != -1) {
          apply_settings_and_refresh_copy(param_2);
        }
        if (*(int *)(iVar3 + 0x105b8df4/*ROM*/) != -1) {
          apply_settings_and_refresh_copy(param_2);
        }
      }
      if ((*(int *)(iVar3 + 0x105b8df8/*ROM*/) != -1) &&
         (iVar1 = setting_get((int)param_2,*(int *)(iVar3 + 0x105b8df8/*ROM*/)), iVar1 != 0)) {
        if (*(int *)(iVar3 + 0x105b8dfc/*ROM*/) != -1) {
          apply_settings_and_refresh_copy(param_2);
        }
        if (*(int *)(iVar3 + 0x105b8e00/*ROM*/) != -1) {
          apply_settings_and_refresh_copy(param_2);
        }
        if (*(int *)(iVar3 + 0x105b8e04/*ROM*/) != -1) {
          apply_settings_and_refresh_copy(param_2);
        }
        if (*(int *)(iVar3 + 0x105b8e08/*ROM*/) != -1) {
          apply_settings_and_refresh_copy(param_2);
        }
      }
      if ((*(int *)(iVar3 + 0x105b8e0c/*ROM*/) != -1) &&
         (iVar1 = setting_get((int)param_2,*(int *)(iVar3 + 0x105b8e0c/*ROM*/)), iVar1 != 0)) {
        if (*(int *)(iVar3 + 0x105b8e10/*ROM*/) != -1) {
          apply_settings_and_refresh_copy(param_2);
        }
        if (*(int *)(iVar3 + 0x105b8e14/*ROM*/) != -1) {
          apply_settings_and_refresh_copy(param_2);
        }
        if (*(int *)(iVar3 + 0x105b8e18/*ROM*/) != -1) {
          apply_settings_and_refresh_copy(param_2);
        }
        if (*(int *)(iVar3 + 0x105b8e1c/*ROM*/) != -1) {
          apply_settings_and_refresh_copy(param_2);
        }
      }
      if ((*(int *)(iVar3 + 0x105b8e20/*ROM*/) != -1) &&
         (iVar1 = setting_get((int)param_2,*(int *)(iVar3 + 0x105b8e20/*ROM*/)), iVar1 != 0)) {
        if (*(int *)(iVar3 + 0x105b8e24/*ROM*/) != -1) {
          apply_settings_and_refresh_copy(param_2);
        }
        if (*(int *)(iVar3 + 0x105b8e28/*ROM*/) != -1) {
          apply_settings_and_refresh_copy(param_2);
        }
        if (*(int *)(iVar3 + 0x105b8e2c/*ROM*/) != -1) {
          apply_settings_and_refresh_copy(param_2);
        }
        if (*(int *)(iVar3 + 0x105b8e30/*ROM*/) != -1) {
          apply_settings_and_refresh_copy(param_2);
        }
      }
      iStack_10 = iStack_10 + -1;
      if (iStack_10 < 0) break;
      iVar3 = iVar3 + 0x50;
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return 0;
}
