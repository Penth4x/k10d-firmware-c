/* @k10d report_three_sensor_metrics @ 0x10495188
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Reads sensor state, computes three derived values, and reports them via a common output
 *   helper.
 * summary:
 *   The function checks two status functions on a sub-object at param_1+0x80; if both are
 *   zero, it calls an error handler. It then copies 8 bytes from a linked list node into a
 *   local buffer, calls a processing helper, and reads three integer values from param_1
 *   via separate getters. It calculates half-values of two of these integers and calls
 *   fill_buffer_with_repeated_byte three times with different combinations of the raw and
 *   halved values, likely reporting different sensor or AFE metrics.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void report_three_sensor_metrics(int param_1,void *param_2,void *param_3,void *param_4)

{
  uint16_t uVar1;
  uint32_t *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint32_t *puVar8;
  uint uVar9;
  int iVar10;
  uintptr_t sp;
  uint8_t *puVar11;
  uint8_t auStack_4c [8];
  uint32_t uStack_24;
  uint8_t auStack_20 [4];
  uint32_t auStack_1c [5];
  
  puVar11 = auStack_4c;
  puVar8 = (uint32_t *)(param_1 + 0x80);
  iVar4 = call_helper_with_offset_pointer_1045c1ce((int)puVar8);
  if ((iVar4 == 0) || (iVar4 = read_field_at_offset_8_1045c1b4((int)puVar8), iVar4 == 0)) {
    console_printf((void *)0x105b4eac/*ROM*/,param_2,param_3,param_4);
  }
  puVar2 = auStack_1c + 1;
  alloc_and_zero_two_words_1045c3bc(puVar2);
  iVar3 = *(int *)(*(int *)(param_1 + 0xb0) + 4);
  iVar4 = 8;
  do {
    iVar10 = iVar4 + -4;
    *(uint32_t *)((int)auStack_1c + iVar4 + 8) = *(uint32_t *)(iVar10 + iVar3 + 0x10);
    iVar4 = iVar10;
  } while (iVar10 != 0);
  iVar4 = 8;
  do {
    iVar3 = iVar4 + -4;
    *(uint32_t *)(auStack_20 + iVar4 + -4) = *(uint32_t *)((int)auStack_1c + iVar4 + 8);
    iVar4 = iVar3;
  } while (iVar3 != 0);
  iVar4 = 8;
  do {
    iVar3 = iVar4 + -4;
    *(uint32_t *)((int)auStack_1c + iVar4) = *(uint32_t *)(auStack_20 + iVar4 + -4);
    iVar4 = iVar3;
  } while (iVar3 != 0);
  free_heap_if_flagged_1045c402(auStack_20,2);
  iVar4 = increment_callee_result_1045c1c4();
  uVar5 = increment_callee_result_1045c1de(puVar8);
  call_single_helper_1045c0f2(puVar8);
  iVar3 = return_first_word_1045c514(puVar2);
  iVar10 = get_second_field_via_helper();
  iVar6 = compute_weighted_sum_from_struct_10495384(param_1);
  uVar1 = (uint16_t)(iVar3 / 2);
  *(uint16_t *)(puVar11 + 2) = uVar1;
  uStack_24 = 0x80;
  uVar7 = iVar4 / 2 & 0xffff;
  uVar9 = (int)uVar5 / 2 & 0xffff;
  puVar11[7] = 0x80;
  fill_buffer_with_repeated_byte(param_1,iVar10 + iVar6,uVar7,uVar9,*(ushort *)(puVar11 + 2),puVar11[7]);
  iVar4 = get_second_field_via_helper();
  iVar3 = compute_weighted_product_sum(param_1);
  *(uint16_t *)(puVar11 + 2) = uVar1;
  puVar11[7] = (char)uStack_24;
  fill_buffer_with_repeated_byte(param_1,iVar4 + iVar3,uVar7,uVar9,*(ushort *)(puVar11 + 2),puVar11[7]);
  iVar4 = get_second_field_via_helper();
  iVar3 = compute_weighted_sum_from_struct_1049552c(param_1);
  *(uint16_t *)(puVar11 + 2) = uVar1;
  puVar11[7] = 0;
  fill_buffer_with_repeated_byte(param_1,iVar4 + iVar3,uVar7,uVar5 & 0xffff,*(ushort *)(puVar11 + 2),puVar11[7]);
  free_heap_if_flagged_1045c402(puVar2,2);
  return;
}
