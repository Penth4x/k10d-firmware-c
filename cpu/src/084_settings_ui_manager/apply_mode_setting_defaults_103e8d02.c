/* @k10d apply_mode_setting_defaults_103e8d02 @ 0x103e8d02
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Copes default setting values into the working settings block for the current camera
 *   mode.
 * summary:
 *   Iterates over four mode-specific setting groups, copying default values from ROM tables
 *   into the working settings via setting_set when the mode ID differs from a stored value.
 *   Applies additional conditional defaults for specific mode ranges (4-6, 9-11, 12-14) and
 *   calls call_helper_on_two_pointers_10484ba2 for modes 9-11. Finally, copies four
 *   additional settings from RAM globals if the mode ID at offset 0x28 differs.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_mode_setting_defaults_103e8d02(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint32_t *puVar5;
  uint8_t auStack_4c [4];
  int iStack_30;
  
  puVar5 = (uint32_t *)auStack_4c;
  iStack_30 = 4;
  iVar2 = 0;
  do {
    if (*(int *)(iVar2 + 0x10597460/*ROM*/) != *(int *)(param_1 + 0x24)) {
      iVar3 = *(int *)(param_1 + 8);
      uVar4 = *(uint32_t *)(iVar2 + 0x10597554/*ROM*/);
      uVar1 = setting_get(iVar3,*(int *)(iVar2 + 0x10597464/*ROM*/));
      setting_set(iVar3,uVar4,uVar1);
      iVar3 = *(int *)(param_1 + 8);
      uVar4 = *(uint32_t *)(iVar2 + 0x10597558/*ROM*/);
      uVar1 = setting_get(iVar3,*(int *)(iVar2 + 0x10597468/*ROM*/));
      setting_set(iVar3,uVar4,uVar1);
      iVar3 = *(int *)(param_1 + 8);
      uVar4 = *(uint32_t *)(iVar2 + 0x1059755c/*ROM*/);
      uVar1 = setting_get(iVar3,*(int *)(iVar2 + 0x1059746c/*ROM*/));
      setting_set(iVar3,uVar4,uVar1);
    }
    if (*(int *)(iVar2 + 0x10597470/*ROM*/) != *(int *)(param_1 + 0x24)) {
      iVar3 = *(int *)(param_1 + 8);
      uVar4 = *(uint32_t *)(iVar2 + 0x10597564/*ROM*/);
      uVar1 = setting_get(iVar3,*(int *)(iVar2 + 0x10597474/*ROM*/));
      setting_set(iVar3,uVar4,uVar1);
      iVar3 = *(int *)(param_1 + 8);
      uVar4 = *(uint32_t *)(iVar2 + 0x10597568/*ROM*/);
      uVar1 = setting_get(iVar3,*(int *)(iVar2 + 0x10597478/*ROM*/));
      setting_set(iVar3,uVar4,uVar1);
      iVar3 = *(int *)(param_1 + 8);
      uVar4 = *(uint32_t *)(iVar2 + 0x1059756c/*ROM*/);
      uVar1 = setting_get(iVar3,*(int *)(iVar2 + 0x1059747c/*ROM*/));
      setting_set(iVar3,uVar4,uVar1);
    }
    if (*(int *)(iVar2 + 0x10597480/*ROM*/) != *(int *)(param_1 + 0x24)) {
      iVar3 = *(int *)(param_1 + 8);
      uVar4 = *(uint32_t *)(iVar2 + 0x10597574/*ROM*/);
      uVar1 = setting_get(iVar3,*(int *)(iVar2 + 0x10597484/*ROM*/));
      setting_set(iVar3,uVar4,uVar1);
      iVar3 = *(int *)(param_1 + 8);
      uVar4 = *(uint32_t *)(iVar2 + 0x10597578/*ROM*/);
      uVar1 = setting_get(iVar3,*(int *)(iVar2 + 0x10597488/*ROM*/));
      setting_set(iVar3,uVar4,uVar1);
      iVar3 = *(int *)(param_1 + 8);
      uVar4 = *(uint32_t *)(iVar2 + 0x1059757c/*ROM*/);
      uVar1 = setting_get(iVar3,*(int *)(iVar2 + 0x1059748c/*ROM*/));
      setting_set(iVar3,uVar4,uVar1);
    }
    iVar2 = iVar2 + 0x30;
    iStack_30 = iStack_30 + -1;
  } while (-1 < iStack_30);
  iVar2 = *(int *)(param_1 + 0x24);
  if (((iVar2 != 4) && (iVar2 != 5)) && (iVar2 != 6)) {
    iVar2 = *(int *)(param_1 + 8);
    uVar1 = setting_get(iVar2,0xe);
    setting_set(iVar2,0x136,uVar1);
  }
  iVar2 = *(int *)(param_1 + 0x24);
  if (((iVar2 != 9) && (iVar2 != 10)) && (iVar2 != 0xb)) {
    iVar2 = *(int *)(param_1 + 8);
    uVar1 = setting_get(iVar2,0xf);
    setting_set(iVar2,0x137,uVar1);
    iVar2 = *(int *)(param_1 + 8);
    uVar1 = setting_get(iVar2,0x32);
    setting_set(iVar2,0x15a,uVar1);
  }
  if (*(int *)(param_1 + 0x24) != 9) {
    iVar2 = *(int *)(param_1 + 8);
    uVar1 = call_helper_with_offset_arg_10484e00(iVar2);
    *puVar5 = 0;
    call_helper_on_two_pointers_10484ba2(iVar2,0,uVar1,4,*puVar5);
  }
  if (*(int *)(param_1 + 0x24) != 10) {
    iVar2 = *(int *)(param_1 + 8);
    uVar1 = call_helper_with_offset_arg_10484e00(iVar2);
    *puVar5 = 0;
    call_helper_on_two_pointers_10484ba2(iVar2,1,uVar1,4,*puVar5);
  }
  if (*(int *)(param_1 + 0x24) != 0xb) {
    iVar2 = *(int *)(param_1 + 8);
    uVar1 = call_helper_with_offset_arg_10484e00(iVar2);
    *puVar5 = 0;
    call_helper_on_two_pointers_10484ba2(iVar2,2,uVar1,4,*puVar5);
  }
  iVar2 = *(int *)(param_1 + 0x24);
  if (((iVar2 != 0xc) && (iVar2 != 0xd)) && (iVar2 != 0xe)) {
    iVar2 = *(int *)(param_1 + 8);
    uVar1 = setting_get(iVar2,0x10);
    setting_set(iVar2,0x138,uVar1);
  }
  uVar1 = uRam10597664;
  if (iRam10597640 != *(int *)(param_1 + 0x28)) {
    iVar2 = *(int *)(param_1 + 8);
    uVar4 = setting_get(iVar2,iRam10597644);
    setting_set(iVar2,uVar1,uVar4);
  }
  uVar1 = uRam1059766c;
  if (iRam10597648 != *(int *)(param_1 + 0x28)) {
    iVar2 = *(int *)(param_1 + 8);
    uVar4 = setting_get(iVar2,iRam1059764c);
    setting_set(iVar2,uVar1,uVar4);
  }
  uVar1 = uRam10597674;
  if (iRam10597650 != *(int *)(param_1 + 0x28)) {
    iVar2 = *(int *)(param_1 + 8);
    uVar4 = setting_get(iVar2,iRam10597654);
    setting_set(iVar2,uVar1,uVar4);
  }
  uVar1 = uRam1059767c;
  if (iRam10597658 != *(int *)(param_1 + 0x28)) {
    iVar2 = *(int *)(param_1 + 8);
    uVar4 = setting_get(iVar2,iRam1059765c);
    setting_set(iVar2,uVar1,uVar4);
  }
  return;
}
