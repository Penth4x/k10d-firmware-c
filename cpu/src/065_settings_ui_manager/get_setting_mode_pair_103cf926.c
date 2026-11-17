/* @k10d get_setting_mode_pair_103cf926 @ 0x103cf926
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pair of setting IDs based on a specific setting value when a magic command is
 *   passed.
 * summary:
 *   Checks if param_2 equals 0x1b60014. If so, it reads setting 0xbb from the object's
 *   context (param_1 + 8) using setting_get. It compares the result against two global RAM
 *   values (bRam10595ddc and bRam10595ddd) to select an index (0, 1, or default 0xff). It
 *   then returns the corresponding value from a local array {0x1b6000a, 0x1b6000f}. The
 *   function acts as a lookup or state resolver for a specific subsystem identified by the
 *   0x1b6xxxxx constants.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_mode_pair_103cf926(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1b60014) {
    auStack_10[0] = 0x1b6000a;
    auStack_10[1] = 0x1b6000f;
    uVar3 = setting_get(*(int *)(param_1 + 8),0xbb);
    iVar2 = 0xff;
    if (bRam10595ddc == uVar3) {
      iVar2 = 0;
    }
    if (bRam10595ddd == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
