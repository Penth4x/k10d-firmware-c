/* @k10d dispatch_exposure_mode_handler @ 0x104c5d5c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Selects and calls one of several exposure-mode handlers based on a mode code and
 *   validation results.
 * summary:
 *   The function copies state from param_3 to param_4, validates two 16-bit values from
 *   param_2, and computes two derived values via compare_version_fields. It then branches
 *   on a mode code (uVar3) at offsets 0x32 of param_2 (values 100, <200, >=200) and a
 *   boolean result from check_dimension_fit to call one of five distinct handler functions
 *   (process_sensor_readout_request_104c6e54, search_and_apply_zoom_factor,
 *   configure_viewport_transform_params, process_two_buffer_pairs). The result is stored in
 *   a boolean field at param_4 + 0x210. The structure of the dispatch suggests handling
 *   different APEX exposure modes (P, Tv, Av, M, etc.).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_exposure_mode_handler(int param_1,void *param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint32_t uVar6;
  int iVar7;
  int iVar8;
  uintptr_t sp;
  int *piVar9;
  uint8_t auStack_5c [8];
  uint32_t auStack_24 [3];
  uint8_t auStack_18 [8];
  uint32_t auStack_10 [2];
  
  piVar9 = (int *)auStack_5c;
  copy_large_struct((uint32_t *)(param_4 + 0x34),(uint32_t *)(param_3 + 0x34));
  iVar7 = 0;
  *(uint32_t *)(param_4 + 0x18) = *(uint32_t *)(param_3 + 0x18);
  copy_two_words_from_param2((int)auStack_18,param_3);
  iVar5 = 8;
  do {
    iVar8 = iVar5 + -4;
    *(uint32_t *)((int)auStack_24 + iVar5) = *(uint32_t *)((int)auStack_24 + iVar5 + 8);
    iVar5 = iVar8;
  } while (iVar8 != 0);
  uVar4 = return_first_word_1045c514(auStack_24 + 1);
  free_heap_if_flagged_1045c402(auStack_24 + 1,2);
  if (uVar4 + (uVar4 >> 5) * -0x20 != 0) goto code_r0x104c5f1e;
  uVar1 = *(ushort *)((int)param_2 + 0x50);
  uVar2 = *(ushort *)((int)param_2 + 0x52);
  if ((uVar1 == 0) || (uVar2 == 0)) goto code_r0x104c5f1e;
  copy_structured_record_104bbb28(auStack_10,param_2);
  uVar3 = *(ushort *)((int)param_2 + 0x32);
  iVar5 = check_dimension_fit(param_1,param_3);
  uVar4 = negate_signed_integer((uint)uVar1);
  auStack_24[0] = compare_version_fields(0x43800000,uVar4);
  uVar4 = negate_signed_integer((uint)uVar2);
  uVar6 = compare_version_fields(0x43800000,uVar4);
  iVar7 = test_two_mmio_writes(param_1,auStack_24[0]);
  iVar8 = test_two_mmio_writes(param_1,uVar6);
  if ((iVar7 == 0) || (iVar8 == 0)) {
    *piVar9 = param_4;
    if (uVar3 == 100) {
      piVar9[1] = param_5;
      iVar7 = process_sensor_readout_request_104c6e54(param_1,auStack_10,(int)param_2,param_3,*piVar9,piVar9[1]);
    }
    else {
      piVar9[1] = param_5;
      iVar7 = search_and_apply_zoom_factor(param_1,auStack_10,(int)param_2,param_3,*piVar9,piVar9[1]);
    }
  }
  else if (uVar3 == 100) {
    *piVar9 = param_4;
    if (iVar5 == 0) {
      piVar9[1] = param_5;
      iVar7 = configure_viewport_transform_params(param_1,auStack_10,(int)param_2,(uint8_t *)param_3,*piVar9,piVar9[1]);
    }
    else {
      piVar9[1] = param_5;
      iVar7 = process_two_buffer_pairs(param_1,auStack_10,param_2,param_3,*piVar9,piVar9[1]);
    }
  }
  else {
    if (uVar3 < 200) {
      *piVar9 = param_4;
      if (iVar5 != 0) {
        piVar9[1] = param_5;
        iVar7 = search_and_apply_zoom_factor(param_1,auStack_10,(int)param_2,param_3,*piVar9,piVar9[1]);
        goto LAB_104c5f10;
      }
    }
    else {
      *piVar9 = param_4;
    }
    piVar9[1] = param_5;
    iVar7 = configure_viewport_transform_params(param_1,auStack_10,(int)param_2,(uint8_t *)param_3,*piVar9,piVar9[1]);
  }
LAB_104c5f10:
  free_heap_if_flagged_1045c402(auStack_10,2);
code_r0x104c5f1e:
  *(bool *)(param_4 + 0x210) = iVar7 != 0;
  return iVar7;
}
