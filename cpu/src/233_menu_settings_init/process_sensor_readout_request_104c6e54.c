/* @k10d process_sensor_readout_request_104c6e54 @ 0x104c6e54
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 233_menu_settings_init (unit names are model-proposed)
 * purpose:
 *   Processes a sensor readout request by validating parameters, preparing a data buffer,
 *   and dispatching the readout command.
 * summary:
 *   The function initializes a local object and extracts 16-bit values from param_4. It
 *   calls compute_buffer_size_and_init to validate or prepare the request; if successful,
 *   it sets a flag at param_1+0x219. If the initial check fails, it constructs a detailed
 *   structure with coordinates and parameters, calls register_two_pointers_with_flags for
 *   further processing, and finally invokes configure_viewport_transform_params to execute
 *   the operation, updating fields in param_3 with derived values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

int process_sensor_readout_request_104c6e54(int param_1,uint32_t *param_2,int param_3,int param_4,uint32_t param_5,
                int param_6)

{
  uint32_t *puVar1;
  uint uVar2;
  uint uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint32_t *puVar10;
  int iVar11;
  uintptr_t sp;
  int *piVar12;
  uint8_t auStack_34c [8];
  uint32_t *puStack_2ec;
  uint8_t auStack_2e8 [4];
  uint32_t uStack_2e4;
  uint8_t auStack_2e0 [8];
  uint8_t auStack_2d8 [16];
  int iStack_2c8;
  uint32_t uStack_2b8;
  uint32_t uStack_2b4;
  uint32_t uStack_2b0;
  uint32_t auStack_2ac [122];
  uint32_t auStack_c4 [2];
  uint32_t uStack_bc;
  uint32_t auStack_b8 [4];
  uint32_t uStack_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint16_t uStack_9c;
  uint16_t uStack_9a;
  uint16_t uStack_98;
  uint16_t uStack_96;
  uint16_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint32_t uStack_88;
  uint32_t uStack_84;
  uint16_t uStack_80;
  uint16_t uStack_7e;
  uint16_t uStack_7c;
  uint16_t uStack_7a;
  uint16_t uStack_78;
  uint8_t auStack_74 [88];
  uint32_t uStack_1c;
  uint8_t auStack_18 [4];
  uint32_t uStack_14;
  uint8_t auStack_10 [8];
  
  piVar12 = (int *)auStack_34c;
  *(uint8_t *)(param_1 + 0x219) = 0;
  puStack_2ec = param_2;
  uVar2 = return_first_word_1045c514((uint32_t *)(param_4 + 0x2c));
  uVar2 = uVar2 & 0xffff;
  uVar3 = read_struct_field_at_offset_4((uint32_t *)(param_4 + 0x2c));
  uVar3 = uVar3 & 0xffff;
  cls_105b9458_new((void *)auStack_2d8);
  alloc_two_word_pair_1045c3dc(auStack_c4,uVar2,uVar3);
  copy_transformed_pair(auStack_18,(void *)param_3);
  iVar6 = 8;
  do {
    iVar11 = iVar6 + -4;
    *(uint32_t *)((int)&puStack_2ec + iVar6) = *(uint32_t *)((int)&uStack_1c + iVar6);
    iVar6 = iVar11;
  } while (iVar11 != 0);
  uVar4 = return_first_word_1045c514((uint32_t *)auStack_2e8);
  copy_transformed_pair(auStack_10,(void *)param_3);
  iVar6 = 8;
  do {
    iVar11 = iVar6 + -4;
    *(uint32_t *)((int)auStack_2e0 + iVar6 + 0xfffffffcU) =
         *(uint32_t *)((int)&uStack_14 + iVar6);
    iVar6 = iVar11;
  } while (iVar11 != 0);
  uVar5 = read_struct_field_at_offset_4(auStack_2e0);
  alloc_two_word_pair_1045c3dc(&uStack_bc,uVar4,uVar5);
  free_heap_if_flagged_1045c402(auStack_2e0,2);
  free_heap_if_flagged_1045c402(auStack_2e8,2);
  (*(code *)0x104c6026/*ROM*/)(auStack_10,param_1,auStack_c4,&uStack_bc);
  iVar6 = 8;
  do {
    iVar11 = iVar6 + -4;
    *(uint32_t *)((int)auStack_b8 + iVar6) = *(uint32_t *)((int)&uStack_14 + iVar6);
    iVar6 = iVar11;
  } while (iVar11 != 0);
  puVar1 = auStack_b8 + 1;
  iVar6 = compute_buffer_size_and_init(auStack_2d8,puVar1,2);
  if (iVar6 == 0) {
    if (iStack_2c8 == 2) {
      *(uint8_t *)(param_1 + 0x219) = 1;
    }
    free_heap_if_flagged_1045c402(puVar1,2);
    free_heap_if_flagged_1045c402(&uStack_bc,2);
    free_heap_if_flagged_1045c402(auStack_c4,2);
    cls_105b9458_delete(auStack_2d8,2);
    iVar6 = 0;
  }
  else {
    uStack_9c = 0;
    uStack_9a = 0;
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_94 = 0;
    uStack_a8 = *(uint32_t *)(param_4 + 0x20);
    uStack_a4 = *(uint32_t *)(param_4 + 0x24);
    uStack_a0 = *(uint32_t *)(param_4 + 0x28);
    auStack_b8[3] = *(uint32_t *)(param_4 + 0x1c);
    puVar10 = (uint32_t *)(param_4 + 0x2c);
    uVar4 = return_first_word_1045c514(puVar10);
    uStack_98 = (short)uVar4;
    uVar4 = return_first_word_1045c514(puVar10);
    uStack_9c = (short)uVar4;
    uVar4 = read_struct_field_at_offset_4(puVar10);
    uStack_9a = (short)uVar4;
    uStack_96 = 0;
    uStack_94 = 0;
    uStack_90 = 1;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_78 = 0;
    uStack_8c = uStack_2b8;
    uStack_88 = uStack_2b4;
    uStack_84 = uStack_2b0;
    uVar4 = return_first_word_1045c514(auStack_2ac);
    uStack_7c = (short)uVar4;
    uVar4 = return_first_word_1045c514(auStack_2ac);
    uStack_80 = (short)uVar4;
    uVar4 = read_struct_field_at_offset_4(auStack_2ac);
    uStack_7a = 0;
    uStack_78 = 0;
    uStack_7e = (short)uVar4;
    iVar6 = register_two_pointers_with_flags(*(uint32_t *)(param_1 + 0x4c),auStack_b8 + 3,&uStack_90);
    if (iVar6 == 0) {
      free_heap_if_flagged_1045c402(puVar1,2);
      free_heap_if_flagged_1045c402(&uStack_bc,2);
      free_heap_if_flagged_1045c402(auStack_c4,2);
      cls_105b9458_delete(auStack_2d8,2);
      iVar6 = 0;
    }
    else {
      alloc_and_zero_struct_104bb416((void *)auStack_74);
      (*(code *)0x104bbace/*ROM*/)(auStack_2e0,param_3);
      uVar7 = return_first_word_1045c514((uint32_t *)auStack_2e0);
      (*(code *)0x104bbace/*ROM*/)(auStack_2e8,param_3);
      uVar8 = read_struct_field_at_offset_4(auStack_2e8);
      uVar9 = return_first_word_1045c514(puVar1);
      uVar4 = read_struct_field_at_offset_4(puVar1);
      *(short *)((int)piVar12 + 2) = (short)uVar4;
      *(uint16_t *)((int)piVar12 + 6) = 100;
      dispatch_six_param_object_ops(auStack_74,uVar7 & 0xffff,uVar8 & 0xffff,uVar9 & 0xffff,
                   *(uint16_t *)((int)piVar12 + 2),*(uint16_t *)((int)piVar12 + 6));
      free_heap_if_flagged_1045c402(auStack_2e8,2);
      free_heap_if_flagged_1045c402(auStack_2e0,2);
      set_field_and_call_handler(auStack_74,*(uint32_t *)(param_3 + 0x2c));
      *piVar12 = param_5;
      piVar12[1] = param_6;
      iVar6 = configure_viewport_transform_params(param_1,puStack_2ec,(int)auStack_74,auStack_2d8,*piVar12,piVar12[1]);
      *(int *)(param_3 + 0x38) = (int)uVar2 >> 1;
      *(int *)(param_3 + 0x3c) = (int)uVar3 >> 1;
      *(uint32_t *)(param_3 + 0x40) = 0;
      *(uint32_t *)(param_3 + 0x44) = 0;
      *(uint *)(param_3 + 0x48) = uVar2 - 1;
      *(uint *)(param_3 + 0x4c) = uVar3 - 1;
      destroy_five_member_objects(auStack_74,2);
      free_heap_if_flagged_1045c402(puVar1,2);
      free_heap_if_flagged_1045c402(&uStack_bc,2);
      free_heap_if_flagged_1045c402(auStack_c4,2);
      cls_105b9458_delete(auStack_2d8,2);
    }
  }
  return iVar6;
}
