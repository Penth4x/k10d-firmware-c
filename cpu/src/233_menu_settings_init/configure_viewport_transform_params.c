/* @k10d configure_viewport_transform_params @ 0x104c6160
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 233_menu_settings_init (unit names are model-proposed)
 * purpose:
 *   Computes center offsets and scaling factors from input coordinates, then configures a
 *   transform structure via helper calls.
 * summary:
 *   The function initializes a local structure with default values and computes center
 *   offsets (uStack_302, uStack_306) by averaging differences between input coordinates
 *   (param_2) and reference values. It checks status flags in param_4 and param_5 to
 *   determine if a special scaling or transformation path is needed, calling helpers like
 *   compute_six_fixed_point_values and clamp_crop_to_sensor_bounds to apply the calculated
 *   parameters. It sets a flag at param_1 + 0x219 to indicate success or a specific state
 *   based on the results of these helper calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104c64c2) overlaps instruction at (ram,0x104c64c0)
    */
/* WARNING: Type propagation algorithm not settling */

int configure_viewport_transform_params(int param_1,uint32_t *param_2,int param_3,uint8_t *param_4,int param_5,
                int param_6)

{
  struct {
    uint32_t uStack_2d8;
    uint32_t uStack_2d4;
    uint32_t uStack_2d0;
    uint32_t uStack_2cc;
    uint16_t uStack_2c8;
    uint16_t uStack_2c6;
    uint16_t uStack_2c4;
    uint16_t uStack_2c2;
    uint16_t uStack_2c0;
  } _cfg_2d8;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint16_t uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint32_t uVar13;
  char cVar15;
  uint *puVar14;
  uint8_t *puVar16;
  uint uVar17;
  uint32_t *puVar18;
  uint32_t *puVar19;
  int iVar20;
  uintptr_t sp;
  int *piVar21;
  uint8_t auStack_3b4 [40];
  uint uStack_368;
  uint8_t *puStack_35c;
  uint uStack_310;
  uint uStack_30c;
  uint16_t uStack_306;
  uint16_t uStack_302;
  int aiStack_300 [7];
  uint16_t uStack_2e4;
  uint16_t uStack_2e2;
  uint16_t uStack_2e0;
  uint16_t uStack_2de;
  uint16_t uStack_2dc;
  uint8_t auStack_2bc [532];
  uint8_t auStack_a8 [8];
  uint32_t auStack_a0 [2];
  uint8_t auStack_98 [92];
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint8_t auStack_34 [4];
  uint32_t uStack_30;
  uint8_t auStack_2c [8];
  int iStack_24;
  int iStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint16_t uStack_c;
  uint16_t uStack_a;
  
  piVar21 = (int *)auStack_3b4;
  *(uint8_t *)(param_1 + 0x219) = 0;
  piVar5 = aiStack_300 + 3;
  aiStack_300[0] = -0xf4;
  aiStack_300[3] = 1;
  aiStack_300[4] = 0;
  aiStack_300[5] = 0;
  aiStack_300[6] = 0;
  uStack_2e4 = 0;
  uStack_2e2 = 0;
  uStack_2e0 = 0;
  uStack_2de = 0;
  uStack_2dc = 0;
  _cfg_2d8.uStack_2d8 = 1;
  _cfg_2d8.uStack_2d4 = 0;
  _cfg_2d8.uStack_2d0 = 0;
  _cfg_2d8.uStack_2cc = 0;
  _cfg_2d8.uStack_2c8 = 0;
  _cfg_2d8.uStack_2c6 = _cfg_2d8.uStack_2c8;
  _cfg_2d8.uStack_2c4 = _cfg_2d8.uStack_2c8;
  _cfg_2d8.uStack_2c2 = _cfg_2d8.uStack_2c8;
  _cfg_2d8.uStack_2c0 = _cfg_2d8.uStack_2c8;
  copy_transformed_pair(auStack_a8,(void *)param_3);
  iVar10 = 8;
  do {
    iVar20 = iVar10 + -4;
    *(uint32_t *)((int)aiStack_300 + iVar10) = *(uint32_t *)(auStack_2bc + iVar10 + 0x210);
    iVar10 = iVar20;
  } while (iVar20 != 0);
  piVar6 = aiStack_300 + 1;
  uStack_30c = return_first_word_1045c514(piVar6);
  uStack_30c = uStack_30c & 0xffff;
  free_heap_if_flagged_1045c402(piVar6,2);
  copy_transformed_pair(auStack_a8,(void *)param_3);
  iVar10 = 8;
  do {
    iVar20 = iVar10 + -4;
    *(uint32_t *)((int)aiStack_300 + iVar10) = *(uint32_t *)(auStack_2bc + iVar10 + 0x210);
    iVar10 = iVar20;
  } while (iVar20 != 0);
  uStack_310 = read_struct_field_at_offset_4(piVar6);
  uStack_310 = uStack_310 & 0xffff;
  free_heap_if_flagged_1045c402(piVar6,2);
  iVar10 = return_first_word_1045c514(param_2);
  uStack_302 = (uint16_t)(iVar10 - uStack_30c >> 1);
  iVar10 = read_struct_field_at_offset_4(param_2);
  uStack_306 = (uint16_t)(iVar10 - uStack_310 >> 1);
  uStack_c = *(uint16_t *)(param_3 + 0x50);
  uStack_a = *(uint16_t *)(param_3 + 0x52);
  iStack_24 = *(int *)(param_3 + 0x38);
  iStack_20 = *(int *)(param_3 + 0x3c);
  cls_105b9458_new((cls_105b9458 *)auStack_2bc);
  puStack_35c = param_4;
  if (*(int *)(param_4 + 0x18) == 1) {
    puVar16 = param_4 + 0x34;
    iVar10 = read_struct_field_at_index_104c2890(puVar16,0x28);
    if (((iVar10 == 1) && (iVar10 = read_struct_field_at_index_104c2890(puVar16,0x29), iVar10 == 1)) &&
       (*(short *)(param_3 + 0x32) == 100)) {
      iVar10 = (*(code *)0x104c284c/*ROM*/)(puVar16,1);
      uVar9 = *(uint *)(iVar10 + 8) & 0xfffe;
      uVar17 = *(uint *)(iVar10 + 0x10) & 0xfffe;
      uVar8 = *(uint *)(iVar10 + 0xc) & 0xfffe;
      uVar4 = *(uint *)(iVar10 + 0x14) & 0xfffe;
      puVar18 = (uint32_t *)(param_4 + 0x2c);
      uVar11 = return_first_word_1045c514(puVar18);
      uVar12 = read_struct_field_at_offset_4(puVar18);
      if ((((uVar17 + uVar9 * 2 & 0xffff) == (uVar11 & 0xffff)) &&
          ((uVar4 + uVar8 * 2 & 0xffff) == (uVar12 & 0xffff))) && ((uVar9 == 0 && (uVar8 != 0)))) {
        alloc_two_word_pair_1045c3dc(auStack_a0,uVar17,uVar4);
        iVar10 = compute_buffer_size_and_init((cls_105b9458 *)auStack_2bc,auStack_a0,2);
        if (iVar10 == 0) {
          if (((uint32_t)((uint64_t)(auStack_2bc) >> 128)) == 2) {
            *(uint8_t *)(param_1 + 0x219) = 1;
          }
        }
        else {
          aiStack_300[4] = *(int *)(param_4 + 0x20);
          aiStack_300[5] = *(int *)(param_4 + 0x24);
          aiStack_300[6] = *(int *)(param_4 + 0x28);
          aiStack_300[3] = *(int *)(param_4 + 0x1c);
          uVar13 = return_first_word_1045c514(puVar18);
          uStack_2e4 = (uint16_t)uVar17;
          uStack_2e2 = (uint16_t)uVar4;
          uStack_2de = 0;
          uStack_2dc = (uint16_t)uVar8;
          _cfg_2d8.uStack_2d4 = ((uint32_t)((uint64_t)(auStack_2bc) >> 256));
          _cfg_2d8.uStack_2d0 = ((uint32_t)((uint64_t)(auStack_2bc) >> 288));
          _cfg_2d8.uStack_2cc = ((uint32_t)((uint64_t)(auStack_2bc) >> 320));
          _cfg_2d8.uStack_2d8 = ((uint32_t)((uint64_t)(auStack_2bc) >> 224));
          puVar18 = (uint32_t *)(auStack_2bc + 0x2c);
          uStack_2e0 = (short)uVar13;
          uVar13 = return_first_word_1045c514(puVar18);
          _cfg_2d8.uStack_2c4 = (short)uVar13;
          uVar13 = return_first_word_1045c514(puVar18);
          _cfg_2d8.uStack_2c8 = (short)uVar13;
          uVar13 = read_struct_field_at_offset_4(puVar18);
          _cfg_2d8.uStack_2c2 = 0;
          _cfg_2d8.uStack_2c0 = 0;
          _cfg_2d8.uStack_2c6 = (short)uVar13;
          iVar10 = register_two_pointers_with_flags(*(uint32_t *)(param_1 + 0x4c),piVar5,&_cfg_2d8.uStack_2d8);
          if (iVar10 != 0) {
            alloc_and_zero_struct_104bb416(auStack_98);
            cVar15 = read_byte_at_offset_104c2842(param_4 + 0x34,2);
            if (cVar15 == '\0') {
              uStack_368 = return_first_word_1045c514(puVar18);
              uVar13 = read_struct_field_at_offset_4(puVar18);
              uVar7 = (uint16_t)uVar13;
            }
            else {
              puVar14 = (uint *)(*(code *)0x104c284c/*ROM*/)(param_4 + 0x34,2);
              uStack_368 = *puVar14;
              uVar7 = (uint16_t)puVar14[1];
            }
            uStack_368 = uStack_368 & 0xffff;
            (*(code *)0x104bbace/*ROM*/)(&uStack_3c,param_3);
            uVar4 = return_first_word_1045c514(&uStack_3c);
            (*(code *)0x104bbace/*ROM*/)(auStack_2c,param_3);
            iVar10 = 8;
            do {
              iVar20 = iVar10 + -4;
              *(uint32_t *)((int)&uStack_38 + iVar10) = *(uint32_t *)(auStack_2c + iVar10 + -4);
              iVar10 = iVar20;
            } while (iVar20 != 0);
            uVar8 = read_struct_field_at_offset_4(auStack_34);
            *(uint16_t *)((int)piVar21 + 2) = uVar7;
            *(uint16_t *)((int)piVar21 + 6) = 100;
            dispatch_six_param_object_ops(auStack_98,uVar4 & 0xffff,uVar8 & 0xffff,uStack_368,
                         *(uint16_t *)((int)piVar21 + 2),*(uint16_t *)((int)piVar21 + 6));
            free_heap_if_flagged_1045c402(auStack_34,2);
            free_heap_if_flagged_1045c402(&uStack_3c,2);
            if (*(char *)(param_1 + 0x6c) == '\0') {
              uVar13 = 5;
            }
            else {
              uVar13 = read_struct_field_at_index_104c2890(param_4 + 0x34,0);
            }
            transform_and_store_value(auStack_98,uVar13);
            copy_transformed_pair(auStack_34,auStack_98);
            uStack_30c = return_first_word_1045c514((uint32_t *)auStack_34);
            uStack_30c = uStack_30c & 0xffff;
            free_heap_if_flagged_1045c402(auStack_34,2);
            copy_transformed_pair(auStack_34,auStack_98);
            uStack_310 = read_struct_field_at_offset_4(auStack_34);
            uStack_310 = uStack_310 & 0xffff;
            free_heap_if_flagged_1045c402(auStack_34,2);
            iVar10 = return_first_word_1045c514(param_2);
            uStack_302 = (uint16_t)(iVar10 - uStack_30c >> 1);
            iVar10 = read_struct_field_at_offset_4(param_2);
            uStack_306 = (uint16_t)(iVar10 - uStack_310 >> 1);
            uVar4 = return_first_word_1045c514(puVar18);
            uStack_c = (uint16_t)(((uVar4 & 0xffff) << 8) / uStack_30c);
            uVar4 = read_struct_field_at_offset_4(puVar18);
            uStack_a = (uint16_t)(((uVar4 & 0xffff) << 8) / uStack_310);
            uVar4 = return_first_word_1045c514(puVar18);
            iStack_24 = (int)(uVar4 & 0xffff) >> 1;
            uVar4 = read_struct_field_at_offset_4(puVar18);
            iStack_20 = (int)(uVar4 & 0xffff) >> 1;
            puStack_35c = auStack_2bc;
            destroy_five_member_objects(auStack_98,2);
            free_heap_if_flagged_1045c402(auStack_a0,2);
            goto code_r0x104c6a34;
          }
        }
        free_heap_if_flagged_1045c402(auStack_a0,2);
        goto code_r0x104c6de0;
      }
    }
  }
code_r0x104c6a34:
  iVar20 = compute_buffer_size_and_init((void *)param_5,param_2,2);
  iVar10 = aiStack_300[0];
  if (iVar20 == 0) {
    if (*(int *)(param_5 + 0x10) == 2) {
      *(uint8_t *)(param_1 + 0x219) = 1;
    }
  }
  else {
    *(uint32_t *)(auStack_2bc + aiStack_300[0] + 0xdc) = *(uint32_t *)(param_5 + 0x20);
    *(uint32_t *)(auStack_2bc + aiStack_300[0] + 0xe0) = *(uint32_t *)(param_5 + 0x24);
    *(uint32_t *)(auStack_2bc + aiStack_300[0] + 0xe4) = *(uint32_t *)(param_5 + 0x28);
    *(uint32_t *)(auStack_2bc + aiStack_300[0] + 0xd8) = *(uint32_t *)(param_5 + 0x1c);
    puVar18 = (uint32_t *)(param_5 + 0x2c);
    uVar13 = return_first_word_1045c514(puVar18);
    *(short *)(auStack_2bc + iVar10 + 0xec) = (short)uVar13;
    uVar13 = return_first_word_1045c514(puVar18);
    *(short *)(auStack_2bc + iVar10 + 0xe8) = (short)uVar13;
    uVar13 = read_struct_field_at_offset_4(puVar18);
    *(short *)(auStack_2bc + iVar10 + 0xea) = (short)uVar13;
    *(uint16_t *)(auStack_2bc + iVar10 + 0xee) = 0;
    *(uint16_t *)(auStack_2bc + iVar10 + 0xf0) = 0;
    iVar20 = param_6 * 3;
    uVar13 = *(uint32_t *)(param_1 + 0x4c);
    bVar2 = (&DAT_105b94e1/*ROM*/)[iVar20];
    bVar1 = (&DAT_105b94e0/*ROM*/)[iVar20];
    *(ushort *)((int)piVar21 + 2) = (ushort)(byte)(&DAT_105b94e2/*ROM*/)[iVar20];
    forward_event_with_payload(uVar13,&_cfg_2d8.uStack_2d8,(ushort)bVar1,(ushort)bVar2,*(uint16_t *)((int)piVar21 + 2));
    *(uint32_t *)(auStack_2bc + iVar10 + 0xc0) = *(uint32_t *)(puStack_35c + 0x20);
    *(uint32_t *)(auStack_2bc + iVar10 + 0xc4) = *(uint32_t *)(puStack_35c + 0x24);
    *(uint32_t *)(auStack_2bc + iVar10 + 200) = *(uint32_t *)(puStack_35c + 0x28);
    *(uint32_t *)(auStack_2bc + iVar10 + 0xbc) = *(uint32_t *)(puStack_35c + 0x1c);
    puVar19 = (uint32_t *)(puStack_35c + 0x2c);
    uVar13 = return_first_word_1045c514(puVar19);
    *(short *)(auStack_2bc + iVar10 + 0xd0) = (short)uVar13;
    uVar13 = return_first_word_1045c514(puVar19);
    *(short *)(auStack_2bc + iVar10 + 0xcc) = (short)uVar13;
    uVar13 = read_struct_field_at_offset_4(puVar19);
    *(short *)(auStack_2bc + iVar10 + 0xce) = (short)uVar13;
    *(uint16_t *)(auStack_2bc + iVar10 + 0xd2) = 0;
    *(uint16_t *)(auStack_2bc + iVar10 + 0xd4) = 0;
    *piVar21 = (int)&uStack_c;
    piVar21[1] = (int)&uStack_a;
    piVar21[2] = (int)&iStack_24;
    piVar21[3] = (int)&iStack_20;
    clamp_crop_to_sensor_bounds(param_1,(int)puStack_35c,uStack_30c,uStack_310,(ushort *)*piVar21,
                 (ushort *)piVar21[1],(uint *)piVar21[2],(uint *)piVar21[3]);
    *(uint32_t *)(auStack_2bc + iVar10 + 0xdc) = *(uint32_t *)(param_5 + 0x20);
    *(uint32_t *)(auStack_2bc + iVar10 + 0xe0) = *(uint32_t *)(param_5 + 0x24);
    *(uint32_t *)(auStack_2bc + iVar10 + 0xe4) = *(uint32_t *)(param_5 + 0x28);
    *(uint32_t *)(auStack_2bc + iVar10 + 0xd8) = *(uint32_t *)(param_5 + 0x1c);
    uVar13 = return_first_word_1045c514(puVar18);
    *(short *)(auStack_2bc + iVar10 + 0xec) = (short)uVar13;
    *(short *)(auStack_2bc + iVar10 + 0xe8) = (short)uStack_30c;
    *(short *)(auStack_2bc + iVar10 + 0xea) = (short)uStack_310;
    *(uint16_t *)(auStack_2bc + iVar10 + 0xee) = uStack_302;
    *(uint16_t *)(auStack_2bc + iVar10 + 0xf0) = uStack_306;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    bVar2 = (&DAT_105b94e1/*ROM*/)[iVar20];
    bVar3 = (&DAT_105b94e2/*ROM*/)[iVar20];
    bVar1 = (&DAT_105b94e0/*ROM*/)[iVar20];
    uVar13 = *(uint32_t *)(param_1 + 0x4c);
    *(uint16_t *)((int)piVar21 + 2) = uStack_a;
    *(int **)((int)piVar21 + 4) = &iStack_24;
    *(int **)((int)piVar21 + 8) = &iStack_20;
    *(uint32_t **)((int)piVar21 + 0xc) = &uStack_1c;
    *(uint32_t **)((int)piVar21 + 0x10) = &uStack_18;
    *(uint32_t **)((int)piVar21 + 0x14) = &uStack_14;
    *(uint32_t **)((int)piVar21 + 0x18) = &uStack_10;
    *(ushort *)((int)piVar21 + 0x1e) = (ushort)bVar1;
    *(ushort *)((int)piVar21 + 0x22) = (ushort)bVar2;
    *(ushort *)((int)piVar21 + 0x26) = (ushort)bVar3;
    iVar10 = compute_six_fixed_point_values(uVar13,piVar5,&_cfg_2d8.uStack_2d8,uStack_c,*(uint16_t *)((int)piVar21 + 2),
                          *(int **)((int)piVar21 + 4),*(int **)((int)piVar21 + 8),
                          *(int **)((int)piVar21 + 0xc),*(int **)((int)piVar21 + 0x10),
                          *(int **)((int)piVar21 + 0x14),*(int **)((int)piVar21 + 0x18),
                          *(uint16_t *)((int)piVar21 + 0x1e),*(uint16_t *)((int)piVar21 + 0x22),
                          *(uint16_t *)((int)piVar21 + 0x26));
    if (iVar10 != 0) {
      *(uint16_t *)((int)piVar21 + 2) = uStack_a;
      *(int *)((int)piVar21 + 4) = iStack_24;
      *(int *)((int)piVar21 + 8) = iStack_20;
      *(uint32_t *)((int)piVar21 + 0xc) = uStack_1c;
      *(uint32_t *)((int)piVar21 + 0x10) = uStack_18;
      *(uint32_t *)((int)piVar21 + 0x14) = uStack_14;
      *(uint32_t *)((int)piVar21 + 0x18) = uStack_10;
      update_viewfinder_overlay_bounds(param_3,piVar5);
      cls_105b9458_delete((cls_105b9458 *)auStack_2bc,2);
      return iVar10;
    }
  }
code_r0x104c6de0:
  cls_105b9458_delete((cls_105b9458 *)auStack_2bc,2);
  return 0;
}
