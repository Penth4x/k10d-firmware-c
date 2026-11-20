/* @k10d compute_image_size_divisor @ 0x10417d08
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Reads camera settings to determine image dimensions and computes a divisor and base
 *   offset for image processing.
 * summary:
 *   The function refreshes the settings working copy and retrieves configuration values
 *   using setting_get, selecting between two sets of setting IDs based on a mode flag. It
 *   calculates a base offset (uVar5) and a divisor (stored at param_1+0x14e8) by dividing a
 *   size value (param_1+0x14ec) by the computed offset. It also instantiates a class object
 *   (cls_1059e05c) and calls a virtual method on it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_image_size_divisor(int param_1,uint8_t param_2)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  uint uVar4;
  uint uVar5;
  uint32_t uVar6;
  int iVar7;
  int iVar8;
  uint32_t extraout_r4;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uintptr_t sp;
  uint8_t *puVar13;
  uint8_t auStack_44 [16];
  cls_1059e05c cStack_10;
  uint8_t uStack_9;
  
  puVar13 = auStack_44;
  settings_refresh_working_copy(*(void **)(param_1 + 0x7c));
  uVar5 = check_object_property_43(*(int *)(param_1 + 0x5c));
  if (uVar5 == 0) {
    iVar9 = 0x51;
  }
  else {
    iVar9 = 0x161;
  }
  iVar9 = setting_get(*(int *)(param_1 + 0x7c),iVar9);
  if (uVar5 == 0) {
    iVar10 = 0x52;
  }
  else {
    iVar10 = 0x162;
  }
  iVar10 = setting_get(*(int *)(param_1 + 0x7c),iVar10);
  if (uVar5 == 0) {
    iVar11 = 0x53;
  }
  else {
    iVar11 = 0x163;
  }
  iVar11 = setting_get(*(int *)(param_1 + 0x7c),iVar11);
  uVar6 = setting_get(*(int *)(param_1 + 0x7c),0xc2);
  if (uVar5 == 0) {
    iVar12 = 0x5b;
  }
  else {
    iVar12 = 0x16b;
  }
  iVar7 = setting_get(*(int *)(param_1 + 0x7c),iVar12);
  iVar8 = call_two_helpers_in_sequence_104f1b02(*(uint32_t *)(param_1 + 0x5c));
  iVar12 = 0;
  if (iVar8 != 10) {
    iVar12 = iVar7;
  }
  test_mode_config_singleton();
  iVar7 = (*(code *)0x1052482c/*ROM*/)();
  if (iVar7 != 0) {
    iVar9 = 2;
  }
  iVar7 = setting_get(*(int *)(param_1 + 0x7c),0x54);
  puVar13[3] = (char)iVar10;
  puVar13[7] = (char)uVar6;
  puVar13[0xb] = (char)iVar12;
  iVar7 = compute_conditional_offset(&uStack_9,iVar9,iVar7,iVar11,puVar13[3],puVar13[7],puVar13[0xb]);
  uVar6 = 0;
  *(int *)(param_1 + 0x14f0) = iVar7;
  uVar5 = 0;
  iVar8 = *(int *)(param_1 + 0x88);
  iVar7 = *(int *)(param_1 + 0x8c);
  if (iVar8 == 0) {
    if (iVar7 != 0) {
      uVar6 = *(uint32_t *)(iVar7 + 0x698);
      if (*(char *)(iVar7 + 0x2c) == '\0') {
        uVar5 = 1;
      }
      else {
        uVar5 = (uint)*(ushort *)(iVar7 + 0x67a);
      }
    }
  }
  else {
    uVar6 = *(uint32_t *)(iVar8 + 0x698);
    if (*(char *)(iVar8 + 0x2c) == '\0') {
      uVar5 = 1;
    }
    else {
      uVar5 = (uint)*(ushort *)(iVar8 + 0x67a);
    }
  }
  if ((*(uint *)(param_1 + 0x1508) & 0x2000000) == 0) {
    iVar7 = *(int *)(param_1 + 0x50);
    iVar8 = *(int *)(param_1 + 0x14f0);
    if (iVar12 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 3;
    }
    puVar13[3] = param_2;
    *(uint32_t *)(puVar13 + 4) = uVar6;
    *(uint *)(puVar13 + 8) = uVar5;
    *(uint32_t *)(puVar13 + 0xc) = uVar3;
    prepare_and_dispatch_event_10515402(iVar7,(int *)(param_1 + 0x40),0,iVar8,puVar13[3],*(int *)(puVar13 + 4),
                 *(int *)(puVar13 + 8),*(uint *)(puVar13 + 0xc));
    *(uint32_t *)(param_1 + 0x14e4) = extraout_r4;
  }
  else {
    *(uint32_t *)(param_1 + 0x14e4) = 0;
  }
  if (*(int *)(param_1 + 0x1564) == 1) {
    *(uint32_t *)(param_1 + 0x14e4) = 9999;
  }
  iVar12 = *(int *)(*(int *)(param_1 + 0x54) + 0x60);
  uVar5 = *(uint *)(*(int *)(param_1 + 0x54) + 0x74);
  cls_1059e05c_new(&cStack_10);
  if (iVar9 == 0) {
    iVar11 = lookup_table_value_minus_offset(&cStack_10,iVar11,iVar10);
    uVar5 = iVar11 + 0x1a500;
  }
  else if (iVar9 == 1) {
    uVar5 = 0x18a500;
  }
  else if (iVar9 == 2) {
    iVar11 = lookup_table_value_minus_offset(&cStack_10,iVar11,iVar10);
    uVar5 = iVar11 + 0x18a500;
  }
  allocate_mempool_blocks(param_1);
  uVar1 = *(uint *)(param_1 + 0x14ec);
  iVar11 = *(int *)(param_1 + 0x84);
  if ((iVar11 != 0) && (*(int *)(iVar11 + 0x34) != 0)) {
    uVar1 = *(int *)(iVar11 + 0x74) + *(int *)(iVar11 + 0x60) + uVar1;
  }
  uVar2 = iVar12 + uVar5;
  uVar4 = uVar2;
  if ((iVar9 == 2) && (iVar10 != 0)) {
    if (iVar10 == 1) {
      uVar4 = uVar2 + 0xb79840;
    }
    else {
      uVar4 = uVar2 + 0x43b040;
    }
  }
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar1 / uVar4;
  }
  *(uint *)(param_1 + 0x14e8) = uVar4;
  if ((iVar9 == 0) && (uVar2 * 2 < uVar1)) {
    *(uint *)(param_1 + 0x14e8) = (uVar1 + iVar12 * -2) / uVar5;
  }
  virtual_destructor_free_104266ce(&cStack_10,2);
  return;
}
