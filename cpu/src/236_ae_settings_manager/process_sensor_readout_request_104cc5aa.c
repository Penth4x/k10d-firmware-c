/* @k10d process_sensor_readout_request_104cc5aa @ 0x104cc5aa
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates sensor state and coordinates a readout operation via helper functions,
 *   storing a status code.
 * summary:
 *   The function checks a condition at param_1+0xbc and calls
 *   process_sensor_readout_request_104c8f5e. It allocates a small heap block, queries three
 *   values via select_two_parameter_values_by_index, and compares them against values from
 *   return_first_word_1045c514/1045c51e. If valid, it constructs objects, calls either
 *   process_ae_metering_update or process_event_with_state_update based on a mode check,
 *   and then processes the result through dispatch_six_param_object_ops and
 *   process_sensor_readout_request_104ca646. Finally, it stores a status code (0, 1, or 3)
 *   at param_1+0x214 and cleans up allocated resources.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_sensor_readout_request_104cc5aa(int param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint32_t uVar6;
  int iVar7;
  int iVar8;
  uintptr_t sp;
  uint8_t *puVar9;
  int *piVar10;
  uint8_t auStack_4d4 [12];
  cls_105b9458 cStack_4a0;
  cls_105b9458 cStack_28c;
  uint32_t auStack_78 [2];
  uint8_t auStack_70 [44];
  int iStack_44;
  ushort uStack_14;
  ushort uStack_12;
  ushort uStack_10;
  ushort uStack_e;
  ushort uStack_c;
  ushort uStack_a;
  
  puVar9 = auStack_4d4;
  *(uint32_t *)(param_1 + 0x210) = 0xc0013;
  *(uint8_t *)(param_1 + 0x219) = 0;
  piVar10 = (int *)auStack_4d4;
  if ((*(int *)(*(int *)(param_1 + 0xbc) + 4) == 0) &&
     (iVar1 = process_sensor_readout_request_104c8f5e(param_1), piVar10 = (int *)puVar9, iVar1 == 0)) {
    return;
  }
  pvVar2 = (void *)heap_alloc((void *)1);
  uStack_14 = 0;
  uStack_12 = 0;
  uStack_10 = 0;
  uStack_e = 0;
  uStack_c = 0;
  uStack_a = 0;
  select_two_parameter_values_by_index(pvVar2,0,&uStack_14,&uStack_12);
  select_two_parameter_values_by_index(pvVar2,1,&uStack_10,&uStack_e);
  select_two_parameter_values_by_index(pvVar2,2,&uStack_c,&uStack_a);
  if (pvVar2 != 0) {
    heap_free((int)pvVar2);
  }
  uVar3 = return_first_word_1045c514((uint32_t *)(*(int *)(param_1 + 0xbc) + 0x2c));
  uVar3 = uVar3 & 0xffff;
  uVar4 = read_struct_field_at_offset_4((void *)(*(int *)(param_1 + 0xbc) + 0x2c));
  uVar4 = uVar4 & 0xffff;
  if ((((uVar3 != uStack_14) || (uVar4 != uStack_12)) &&
      ((uVar3 != uStack_10 || (uVar4 != uStack_e)))) && ((uVar3 != uStack_c || (uVar4 != uStack_a)))
     ) {
    *(uint32_t *)(param_1 + 0x214) = 0;
    return;
  }
  cls_105b9458_new(&cStack_4a0);
  cls_105b9458_new(&cStack_28c);
  alloc_two_word_pair_1045c3dc(auStack_78,0x3c0,0x280);
  iVar1 = *(int *)(param_1 + 0xbc);
  if (*(int *)(param_1 + 0xcc) == 5) {
    iVar7 = *(int *)(param_1 + 0xd4);
    *piVar10 = *(uint32_t *)(param_1 + 0xd0);
    piVar10[1] = iVar7;
    iVar1 = process_ae_metering_update(param_1,auStack_78,iVar1,(int)&cStack_4a0,*piVar10);
  }
  else {
    iVar7 = *(int *)(param_1 + 0xd0);
    iVar8 = *(int *)(param_1 + 0xd4);
    *piVar10 = *(int *)(param_1 + 0xcc);
    piVar10[1] = iVar7;
    piVar10[2] = iVar8;
    iVar1 = process_event_with_state_update(param_1,auStack_78,iVar1,(int)&cStack_4a0,*piVar10,piVar10[1],piVar10[2]);
  }
  if (iVar1 != 0) {
    alloc_and_zero_struct_104bb416(auStack_70);
    uVar3 = return_first_word_1045c514((uint32_t *)(param_1 + 0xc4));
    uVar4 = read_struct_field_at_offset_4((uint32_t *)(param_1 + 0xc4));
    uVar5 = return_first_word_1045c514((uint32_t *)(*(int *)(param_1 + 0xbc) + 0x2c));
    uVar6 = read_struct_field_at_offset_4((void *)(*(int *)(param_1 + 0xbc) + 0x2c));
    *(short *)((int)piVar10 + 2) = (short)uVar6;
    *(uint16_t *)((int)piVar10 + 6) = 100;
    dispatch_six_param_object_ops(auStack_70,uVar3 & 0xffff,uVar4 & 0xffff,uVar5 & 0xffff,
                 *(uint16_t *)((int)piVar10 + 2),*(uint16_t *)((int)piVar10 + 6));
    if (*(char *)(param_1 + 0xe0) == '\0') {
      uVar6 = 5;
    }
    else {
      uVar6 = read_struct_field_at_index_104c2890(&cStack_4a0.field_0x34,0);
    }
    transform_and_store_value(auStack_70,uVar6);
    *piVar10 = *(uint32_t *)(param_1 + 0xdc);
    iVar7 = process_sensor_readout_request_104ca646(param_1,auStack_70,(int)&cStack_4a0,(int)&cStack_28c,*piVar10);
    iVar1 = 0;
    if (iVar7 != 0) {
      iVar1 = compare_two_structs_by_mode(param_1,iStack_44,&cStack_28c,*(void **)(param_1 + 0xc0));
    }
    destroy_five_member_objects(auStack_70,2);
    if (iVar1 != 0) {
      uVar6 = 1;
      goto LAB_104cc8a6;
    }
  }
  uVar6 = 3;
  if (*(char *)(param_1 + 0x219) == '\0') {
    uVar6 = 0;
  }
LAB_104cc8a6:
  *(uint32_t *)(param_1 + 0x214) = uVar6;
  free_heap_if_flagged_1045c402(auStack_78,2);
  cls_105b9458_delete(&cStack_28c,2);
  cls_105b9458_delete(&cStack_4a0,2);
  return;
}
