/* @k10d write_exposure_settings_from_object @ 0x104ba806
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 223_menu_display_context (unit names are model-proposed)
 * purpose:
 *   Extracts five byte values from a temporary object and writes them to specific offsets
 *   in the settings block.
 * summary:
 *   Creates a temporary object (cls_105a6d8c) initialized from a field in param_1. It
 *   queries this object for a count (slot 0x2b) and five specific byte values (slots 0x31,
 *   0xf, 0x11, 0x12, 0x30). It writes these values to the settings block (param_2) at
 *   offsets calculated from base pointers in 0x105b906c-0x105b908c, adjusted by the count.
 *   If the count is less than 1, it writes a value from a different source (cls_105a8a1c)
 *   to offset 0x105b9064. The pattern of writing multiple byte settings suggests updating
 *   exposure or metering parameters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_exposure_settings_from_object(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uintptr_t sp;
  uint uStack_68;
  cls_105a6d8c acStack_64 [7];
  cls_105a8a1c acStack_48 [16];
  
  cls_105a6d8c_new(acStack_64);
  copy_status_block_bytes(*(int *)(param_1 + 0x1c),acStack_64);
  iVar1 = extract_field_from_struct_1045ff0e(acStack_64,0x2b);
  if (iVar1 < 1) {
    cls_105a8a1c_new(acStack_48);
    iVar2 = 0;
    iVar3 = get_or_create_singleton_object_1046be62();
    copy_four_byte_blocks_reversed(*(int *)(iVar3 + 4),acStack_48);
    uVar4 = extract_status_bitfield(acStack_48,0x2f);
    setting_set(param_2,uRam105b9064,uVar4 & 0xff);
    cls_105a8a1c_delete(acStack_48,2);
  }
  else {
    iVar2 = (iVar1 + -1) * 0x80;
  }
  uStack_68 = (uint)(iVar1 >= 1);
  uVar4 = extract_field_from_struct_1045ff0e(acStack_64,0x31);
  iVar1 = uStack_68 * 4;
  setting_set(param_2,*(int *)(iVar1 + 0x105b906c/*ROM*/) + iVar2,uVar4 & 0xff);
  uVar4 = extract_field_from_struct_1045ff0e(acStack_64,0xf);
  setting_set(param_2,*(int *)(iVar1 + 0x105b9074/*ROM*/) + iVar2,uVar4 & 0xff);
  uVar4 = extract_field_from_struct_1045ff0e(acStack_64,0x11);
  setting_set(param_2,*(int *)(iVar1 + 0x105b907c/*ROM*/) + iVar2,uVar4 & 0xff);
  uVar4 = extract_field_from_struct_1045ff0e(acStack_64,0x12);
  setting_set(param_2,*(int *)(iVar1 + 0x105b9084/*ROM*/) + iVar2,uVar4 & 0xff);
  uVar4 = extract_field_from_struct_1045ff0e(acStack_64,0x30);
  setting_set(param_2,*(int *)(iVar1 + 0x105b908c/*ROM*/) + iVar2,uVar4 & 0xff);
  cls_105a6d8c_delete(acStack_64,2);
  return;
}
