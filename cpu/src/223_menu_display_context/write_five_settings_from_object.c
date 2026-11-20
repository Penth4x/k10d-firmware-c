/* @k10d write_five_settings_from_object @ 0x104badda
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 223_menu_display_context (unit names are model-proposed)
 * purpose:
 *   Reads five byte values from a temporary object and writes them to five distinct setting
 *   slots.
 * summary:
 *   Creates a temporary cls_105a6d8c object, initializes it with a value from param_1, and
 *   reads five specific byte fields (0x30, 0x31, 0xf, 0x11, 0x12) via virtual method slot
 *   2. It calculates an offset based on a count field (0x2b) and writes each byte to a
 *   corresponding setting slot using setting_set, with the base addresses for the slots
 *   stored in globals at 0x105b908c, 0x105b906c, 0x105b9074, 0x105b907c, and 0x105b9084.
 *   The temporary object is deleted at the end.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_five_settings_from_object(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  cls_105a6d8c acStack_24 [7];
  
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 0x1c),acStack_24);
  iVar1 = extract_field_from_struct_1045ff0e(acStack_24,0x2b);
  if (iVar1 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = (iVar1 + -1) * 0x80;
  }
  extract_field_from_struct_1045ff0e(acStack_24,0);
  uVar3 = extract_field_from_struct_1045ff0e(acStack_24,0x30);
  iVar1 = (uint)(0 < iVar1) * 4;
  setting_set(param_2,*(int *)(iVar1 + 0x105b908c/*ROM*/) + iVar2,uVar3 & 0xff);
  uVar3 = extract_field_from_struct_1045ff0e(acStack_24,0x31);
  setting_set(param_2,*(int *)(iVar1 + 0x105b906c/*ROM*/) + iVar2,uVar3 & 0xff);
  uVar3 = extract_field_from_struct_1045ff0e(acStack_24,0xf);
  setting_set(param_2,*(int *)(iVar1 + 0x105b9074/*ROM*/) + iVar2,uVar3 & 0xff);
  uVar3 = extract_field_from_struct_1045ff0e(acStack_24,0x11);
  setting_set(param_2,*(int *)(iVar1 + 0x105b907c/*ROM*/) + iVar2,uVar3 & 0xff);
  uVar3 = extract_field_from_struct_1045ff0e(acStack_24,0x12);
  setting_set(param_2,*(int *)(iVar1 + 0x105b9084/*ROM*/) + iVar2,uVar3 & 0xff);
  cls_105a6d8c_delete(acStack_24,2);
  return;
}
