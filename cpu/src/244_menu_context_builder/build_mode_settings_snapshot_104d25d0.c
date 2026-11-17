/* @k10d build_mode_settings_snapshot_104d25d0 @ 0x104d25d0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 244_menu_context_builder (unit names are model-proposed)
 * purpose:
 *   Populates a 54-entry integer array with camera settings and computed parameters for the
 *   current shooting mode.
 * summary:
 *   The function refreshes the settings working copy, instantiates four helper objects
 *   (cls_105a6d8c, cls_105a6abc, cls_105a6cfc, cls_105a6ef4), and extracts numerous
 *   parameters via virtual calls and setting_get. It branches on a mode identifier (uVar7)
 *   to select specific setting offsets and compute derived values (e.g., via
 *   map_mode_code_to_index_1045b3e8, lookup_two_byte_table_entry_1045a690) before writing
 *   them into the output array param_2. The function returns the constant 0x36 (54),
 *   indicating the number of entries filled.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104d270e) overlaps instruction at (ram,0x104d270c)
    */

uint32_t build_mode_settings_snapshot_104d25d0(int param_1,int *param_2)

{
  void *puVar1;
  uint32_t uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint32_t uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ushort uVar17;
  uint8_t uVar18;
  uintptr_t sp;
  int *piVar19;
  uint8_t local_178 [20];
  uint32_t uStack_12c;
  uint32_t uStack_128;
  int iStack_110;
  int iStack_e8;
  int iStack_e4;
  uint32_t auStack_ac [7];
  uint8_t auStack_90 [20];
  uint32_t auStack_7c [19];
  uint8_t auStack_30 [32];
  ushort uStack_10;
  ushort uStack_e;
  ushort local_c;
  ushort uStack_a;
  
  piVar19 = (int *)local_178;
  settings_refresh_working_copy(*(void **)(param_1 + 0x14));
  uVar2 = get_or_init_heap_block();
  cls_105a6d8c_new(auStack_ac);
  copy_status_block_bytes(*(int *)(param_1 + 8),auStack_ac);
  uVar3 = extract_field_from_struct_1045ff0e((int)auStack_ac,3);
  uVar3 = uVar3 & 0xff;
  uVar4 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x29);
  uVar4 = uVar4 & 0xff;
  iVar5 = check_field_bit_or_string(auStack_ac,0x2a);
  uVar6 = extract_field_from_struct_1045ff0e((int)auStack_ac,0);
  uVar7 = uVar6 & 0xff;
  iVar8 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x2b);
  iVar9 = extract_field_from_struct_1045ff0e((int)auStack_ac,0xc);
  iVar10 = extract_field_from_struct_1045ff0e((int)auStack_ac,0xd);
  iVar11 = extract_field_from_struct_1045ff0e((int)auStack_ac,0xe);
  iVar9 = map_mode_params_to_index(*(uint32_t *)(param_1 + 0xc),iVar9,iVar10,iVar11);
  cls_105a6abc_new(auStack_90);
  copy_buffer_with_lock_1045e22a(*(int *)(param_1 + 8),auStack_90);
  cls_105a6cfc_new(auStack_7c);
  copy_0x45_byte_block(*(int *)(param_1 + 8),auStack_7c);
  cls_105a6ef4_new(auStack_30);
  copy_27_bytes_to_buffer(*(int *)(param_1 + 8),auStack_30);
  uVar18 = (uint8_t)uVar6;
  if (0 < iVar8) {
    iVar10 = (iVar8 + -1) * 0x80;
    *param_2 = iVar8;
    uVar6 = extract_field_from_struct_1045ff0e((int)auStack_ac,7);
    iVar8 = map_mode_code_to_index_1045b3e8(uVar2,uVar6 & 0xff,uVar7);
    param_2[1] = iVar8;
    if (uVar3 == 0) {
      iVar8 = 0x12a;
    }
    else {
      iVar8 = 299;
    }
    uVar12 = setting_get(*(int *)(param_1 + 0x14),iVar8 + iVar10);
    uVar12 = map_index_to_code_value(uVar2,uVar12);
    iVar8 = lookup_exposure_compensation_table(uVar2,uVar3,uVar12);
    param_2[2] = iVar8;
    param_2[3] = 0x100;
    if ((uVar7 == 0x10) || (uVar7 == 0x11)) {
      param_2[4] = 1;
      uVar6 = 0xb4;
    }
    else {
      uStack_10 = 0;
      uStack_e = 0;
      uVar6 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x2e);
      uVar13 = extract_bitfield_from_byte_array(auStack_90,5);
      *piVar19 = (int)&uStack_10;
      piVar19[1] = (int)&uStack_e;
      piVar19[2] = (int)auStack_30;
      validate_and_lookup_pair(uVar2,uVar6 & 0xff,uVar3,uVar13 & 0xff,(uint16_t *)*piVar19,
                   (uint16_t *)piVar19[1],(int *)piVar19[2]);
      param_2[4] = (uint)uStack_10;
      uVar6 = (uint)uStack_e;
    }
    param_2[5] = uVar6;
    uVar6 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x2f);
    uVar13 = extract_bitfield_from_byte_array(auStack_90,0x10);
    iVar8 = extract_bitfield_from_byte_array(auStack_90,0x12);
    iVar11 = extract_field_from_struct_1045fc62(auStack_7c,0x29);
    iVar14 = extract_field_from_struct_1045fc62(auStack_7c,1);
    iVar15 = extract_field_from_struct_1045fc62(auStack_7c,8);
    iVar16 = extract_bitfield_from_byte_array(auStack_90,0x13);
    *(char *)((int)piVar19 + 3) = (char)iVar8;
    *(char *)((int)piVar19 + 7) = (char)iVar11;
    *(char *)((int)piVar19 + 0xb) = (char)iVar14;
    *(short *)((int)piVar19 + 0xe) = (short)iVar15;
    *(char *)((int)piVar19 + 0x13) = (char)iVar16;
    iVar8 = dispatch_rtos_call_with_conditional_args(uVar2,uVar6 & 0xff,uVar3,uVar13 & 0xff,*(byte *)((int)piVar19 + 3),
                         *(uint8_t *)((int)piVar19 + 7),*(uint8_t *)((int)piVar19 + 0xb),
                         *(uint16_t *)((int)piVar19 + 0xe),*(byte *)((int)piVar19 + 0x13));
    param_2[6] = iVar8;
    param_2[7] = 10;
    uVar6 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x31);
    iVar8 = lookup_two_byte_table_entry_1045a89c(uVar2,uVar3,uVar6 & 0xff);
    param_2[8] = iVar8;
    param_2[9] = 10;
    iVar8 = extract_field_from_struct_1045ff0e((int)auStack_ac,0xf);
    param_2[10] = iVar8;
    uVar6 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x11);
    iVar8 = map_index_to_offset_1045a954(uVar2,1,uVar6 & 0xff);
    param_2[0xb] = iVar8;
    param_2[0xc] = 10;
    iVar8 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x12);
    param_2[0xd] = iVar8;
    iVar8 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x128);
    param_2[0xe] = iVar8;
    iVar8 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x16b);
    param_2[0xf] = iVar8;
    if (iVar8 == 1) {
      iVar8 = 0x16c;
code_r0x104d295c:
      iVar8 = setting_get(*(int *)(param_1 + 0x14),iVar8 + iVar10);
      param_2[0x10] = iVar8;
    }
    else {
      if (iVar8 == 2) {
        iVar8 = 0x16d;
        goto code_r0x104d295c;
      }
      if (iVar8 == 3) {
        iVar8 = 0x16e;
        goto code_r0x104d295c;
      }
      if (iVar8 == 4) {
        iVar8 = 0x16f;
        goto code_r0x104d295c;
      }
      param_2[0x10] = 0;
    }
    uVar6 = extract_field_from_struct_1045ff0e((int)auStack_ac,0xb);
    if (((((uVar7 == 0xf) || (uVar7 == 8)) || (uVar7 == 0xb)) || ((uVar7 == 9 || (uVar7 == 0xc))))
       || ((uVar7 == 0x10 || (uVar7 == 0x11)))) {
      *(uint8_t *)((int)piVar19 + 3) = uVar18;
      uVar17 = lookup_two_byte_table_entry_1045a6c0(uVar2,uVar6 & 0xff,uVar4,uVar3,*(char *)((int)piVar19 + 3));
      uVar6 = (uint)uVar17;
    }
    else if ((uVar7 == 0xd) || (uVar7 == 0xe)) {
      uVar6 = 0;
    }
    else if (iVar5 == 0) {
      *(uint8_t *)((int)piVar19 + 3) = uVar18;
      uVar17 = lookup_two_byte_table_entry_1045a6c0(uVar2,uVar6 & 0xff,uVar4,uVar3,*(char *)((int)piVar19 + 3));
      uVar6 = (uint)uVar17;
    }
    else {
      uVar6 = 0;
    }
    param_2[0x11] = uVar6;
    if (uVar4 == 0) {
      uVar12 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x12d);
      uStack_128 = read_byte_from_rodata_table(uVar2,uVar12);
      uVar12 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x12e);
    }
    else if (uVar3 == 0) {
      uVar12 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x133);
      uStack_128 = read_byte_from_rodata_table(uVar2,uVar12);
      uVar12 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x134);
    }
    else {
      uVar12 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x130);
      uStack_128 = read_byte_from_rodata_table(uVar2,uVar12);
      uVar12 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x131);
    }
    uVar12 = read_byte_from_rodata_table(uVar2,uVar12);
    iVar5 = lookup_two_byte_table_entry_1045a690(uVar2,uStack_128,uVar4,uVar3);
    param_2[0x12] = iVar5;
    iVar5 = lookup_two_byte_table_entry_1045a690(uVar2,uVar12,uVar4,uVar3);
    param_2[0x13] = iVar5;
    iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x15);
    param_2[0x14] = iVar5;
    iVar11 = 0;
    iVar8 = 0;
    puVar1 = &DAT_105b9d04/*ROM*/;
    do {
      if (*(int *)(puVar1 + 0xb4) == iVar5) {
        iVar5 = setting_get(*(int *)(param_1 + 0x14),
                             *(int *)(&DAT_105b9dbc/*ROM*/ + iVar11 * 0xc) + iVar10);
        param_2[0x15] = iVar5;
        iVar5 = setting_get(*(int *)(param_1 + 0x14),
                             *(int *)(&DAT_105b9dc0/*ROM*/ + iVar11 * 0xc) + iVar10);
        param_2[0x16] = iVar5;
        break;
      }
      iVar11 = iVar11 + 1;
      iVar8 = iVar8 + 0xc;
      puVar1 = puVar1 + 0xc;
    } while (iVar8 < 0xb4);
    uVar12 = get_or_init_heap_block();
    uVar6 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x1b);
    iVar5 = map_mode_code_to_index_1045b5a6(uVar12,uVar6 & 0xff);
    param_2[0x17] = iVar5;
    iVar5 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x162);
    param_2[0x18] = iVar5;
    iVar5 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x163);
    param_2[0x19] = iVar5;
    iVar5 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x164);
    param_2[0x1a] = iVar5;
    iVar5 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x160);
    param_2[0x1b] = iVar5;
    if (iVar5 == 0) {
      iStack_e4 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x168);
      iStack_e8 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x169);
      iVar5 = 0x16a;
    }
    else {
      iStack_e4 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x165);
      iStack_e8 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x166);
      iVar5 = 0x167;
    }
    iVar5 = setting_get(*(int *)(param_1 + 0x14),iVar5 + iVar10);
    param_2[0x1c] = iStack_e4;
    param_2[0x1d] = iStack_e8;
    param_2[0x1e] = iVar5;
    iVar5 = setting_get(*(int *)(param_1 + 0x14),0xc2);
    param_2[0x1f] = iVar5;
    param_2[0x20] = uVar3;
    param_2[0x21] = uVar4;
    iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,5);
    param_2[0x22] = iVar5;
    iVar5 = setting_get(*(int *)(param_1 + 0x14),0xab);
    param_2[0x23] = iVar5;
    param_2[0x24] = uVar7;
    iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,1);
    param_2[0x25] = iVar5;
    iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,6);
    param_2[0x26] = iVar5;
    iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,8);
    param_2[0x27] = iVar5;
    iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,9);
    param_2[0x28] = iVar5;
    iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,10);
    param_2[0x29] = iVar5;
    iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x27);
    param_2[0x2a] = iVar5;
    uVar3 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x28);
    iVar5 = map_mode_code_to_index_1045b3e8(uVar2,uVar3 & 0xff,uVar7);
    param_2[0x2b] = iVar5;
    param_2[0x2c] = iVar9;
    iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,2);
    param_2[0x2d] = iVar5;
    iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x2c);
    param_2[0x2e] = iVar5;
    iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x2d);
    param_2[0x2f] = iVar5;
    iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x13);
    param_2[0x30] = iVar5;
    iVar5 = map_mode_index_to_code_1045b524(uVar2,uVar7);
    param_2[0x31] = iVar5;
    iVar5 = setting_get(*(int *)(param_1 + 0x14),0xb0);
    param_2[0x32] = iVar5;
    iVar5 = setting_get(*(int *)(param_1 + 0x14),0xbb);
    param_2[0x33] = iVar5;
    iVar5 = setting_get(*(int *)(param_1 + 0x14),0xc3);
    param_2[0x34] = iVar5;
    iVar5 = setting_get(*(int *)(param_1 + 0x14),iVar10 + 0x138);
    if (iVar5 == 0xd) {
      iVar5 = 0x156;
    }
    else if (iVar5 == 0xe) {
      iVar5 = 0x159;
    }
    else {
      iVar5 = 0x153;
    }
    iVar8 = *(int *)(param_1 + 0x14);
    iVar5 = iVar5 + iVar10;
    goto LAB_104d3406;
  }
  *param_2 = iVar8;
  uVar6 = extract_field_from_struct_1045ff0e((int)auStack_ac,7);
  iVar8 = map_mode_code_to_index_1045b3e8(uVar2,uVar6 & 0xff,uVar7);
  param_2[1] = iVar8;
  iVar8 = 2;
  if (uVar3 != 0) {
    iVar8 = 3;
  }
  uVar12 = setting_get(*(int *)(param_1 + 0x14),iVar8);
  uVar12 = map_index_to_code_value(uVar2,uVar12);
  iVar8 = lookup_exposure_compensation_table(uVar2,uVar3,uVar12);
  param_2[2] = iVar8;
  param_2[3] = 0x100;
  if ((uVar7 == 0x10) || (uVar7 == 0x11)) {
    param_2[4] = 1;
    uVar6 = 0xb4;
  }
  else {
    local_c = 0;
    uStack_a = 0;
    uVar6 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x2e);
    uVar13 = extract_bitfield_from_byte_array(auStack_90,5);
    *piVar19 = (int)&local_c;
    piVar19[1] = (int)&uStack_a;
    piVar19[2] = (int)auStack_30;
    validate_and_lookup_pair(uVar2,uVar6 & 0xff,uVar3,uVar13 & 0xff,(uint16_t *)*piVar19,
                 (uint16_t *)piVar19[1],(int *)piVar19[2]);
    param_2[4] = (uint)local_c;
    uVar6 = (uint)uStack_a;
  }
  param_2[5] = uVar6;
  uVar6 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x2f);
  uVar13 = extract_bitfield_from_byte_array(auStack_90,0x10);
  iVar8 = extract_bitfield_from_byte_array(auStack_90,0x12);
  iVar10 = extract_field_from_struct_1045fc62(auStack_7c,0x29);
  iVar11 = extract_field_from_struct_1045fc62(auStack_7c,1);
  iVar14 = extract_field_from_struct_1045fc62(auStack_7c,8);
  iVar15 = extract_bitfield_from_byte_array(auStack_90,0x13);
  *(char *)((int)piVar19 + 3) = (char)iVar8;
  *(char *)((int)piVar19 + 7) = (char)iVar10;
  *(char *)((int)piVar19 + 0xb) = (char)iVar11;
  *(short *)((int)piVar19 + 0xe) = (short)iVar14;
  *(char *)((int)piVar19 + 0x13) = (char)iVar15;
  iVar8 = dispatch_rtos_call_with_conditional_args(uVar2,uVar6 & 0xff,uVar3,uVar13 & 0xff,*(byte *)((int)piVar19 + 3),
                       *(uint8_t *)((int)piVar19 + 7),*(uint8_t *)((int)piVar19 + 0xb),
                       *(uint16_t *)((int)piVar19 + 0xe),*(byte *)((int)piVar19 + 0x13));
  param_2[6] = iVar8;
  param_2[7] = 10;
  uVar6 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x31);
  iVar8 = lookup_two_byte_table_entry_1045a89c(uVar2,uVar3,uVar6 & 0xff);
  param_2[8] = iVar8;
  param_2[9] = 10;
  iVar8 = extract_field_from_struct_1045ff0e((int)auStack_ac,0xf);
  param_2[10] = iVar8;
  uVar6 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x11);
  iVar8 = map_index_to_offset_1045a954(uVar2,1,uVar6 & 0xff);
  param_2[0xb] = iVar8;
  param_2[0xc] = 10;
  iVar8 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x12);
  param_2[0xd] = iVar8;
  iVar8 = setting_get(*(int *)(param_1 + 0x14),0);
  param_2[0xe] = iVar8;
  iVar8 = setting_get(*(int *)(param_1 + 0x14),0x5b);
  param_2[0xf] = iVar8;
  if (iVar8 == 1) {
    iVar8 = 0x5c;
LAB_104d3012:
    iVar8 = setting_get(*(int *)(param_1 + 0x14),iVar8);
    param_2[0x10] = iVar8;
  }
  else {
    if (iVar8 == 2) {
      iVar8 = 0x5d;
      goto LAB_104d3012;
    }
    if (iVar8 == 3) {
      iVar8 = 0x5e;
      goto LAB_104d3012;
    }
    if (iVar8 == 4) {
      iVar8 = 0x5f;
      goto LAB_104d3012;
    }
    param_2[0x10] = 0;
  }
  uVar6 = extract_field_from_struct_1045ff0e((int)auStack_ac,0xb);
  if ((((uVar7 == 0xf) || (uVar7 == 8)) || (uVar7 == 0xb)) ||
     (((uVar7 == 9 || (uVar7 == 0xc)) || ((uVar7 == 0x10 || (uVar7 == 0x11)))))) {
    *(uint8_t *)((int)piVar19 + 3) = uVar18;
LAB_104d307c:
    uVar17 = lookup_two_byte_table_entry_1045a6c0(uVar2,uVar6 & 0xff,uVar4,uVar3,*(char *)((int)piVar19 + 3));
    uVar6 = (uint)uVar17;
  }
  else if ((uVar7 == 0xd) || (uVar7 == 0xe)) {
    uVar6 = 0;
  }
  else {
    if (iVar5 == 0) {
      *(uint8_t *)((int)piVar19 + 3) = uVar18;
      goto LAB_104d307c;
    }
    uVar6 = 0;
  }
  param_2[0x11] = uVar6;
  if (uVar4 == 0) {
    uVar12 = setting_get(*(int *)(param_1 + 0x14),5);
    uStack_12c = read_byte_from_rodata_table(uVar2,uVar12);
    uVar12 = setting_get(*(int *)(param_1 + 0x14),6);
  }
  else if (uVar3 == 0) {
    uVar12 = setting_get(*(int *)(param_1 + 0x14),0xb);
    uStack_12c = read_byte_from_rodata_table(uVar2,uVar12);
    uVar12 = setting_get(*(int *)(param_1 + 0x14),0xc);
  }
  else {
    uVar12 = setting_get(*(int *)(param_1 + 0x14),8);
    uStack_12c = read_byte_from_rodata_table(uVar2,uVar12);
    uVar12 = setting_get(*(int *)(param_1 + 0x14),9);
  }
  uVar12 = read_byte_from_rodata_table(uVar2,uVar12);
  iVar5 = lookup_two_byte_table_entry_1045a690(uVar2,uStack_12c,uVar4,uVar3);
  param_2[0x12] = iVar5;
  iVar5 = lookup_two_byte_table_entry_1045a690(uVar2,uVar12,uVar4,uVar3);
  param_2[0x13] = iVar5;
  iVar8 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x15);
  param_2[0x14] = iVar8;
  iVar5 = 0;
  iVar10 = 0;
  do {
    if (*(int *)(&DAT_105b9d04/*ROM*/ + iVar10) == iVar8) {
      iVar8 = setting_get(*(int *)(param_1 + 0x14),*(int *)(&DAT_105b9d08/*ROM*/ + iVar5 * 0xc));
      param_2[0x15] = iVar8;
      iVar5 = setting_get(*(int *)(param_1 + 0x14),*(int *)(&DAT_105b9d0c/*ROM*/ + iVar5 * 0xc));
      param_2[0x16] = iVar5;
      break;
    }
    iVar10 = iVar10 + 0xc;
    iVar5 = iVar5 + 1;
  } while (iVar10 < 0xb4);
  uVar12 = get_or_init_heap_block();
  uVar6 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x1b);
  iVar5 = map_mode_code_to_index_1045b5a6(uVar12,uVar6 & 0xff);
  param_2[0x17] = iVar5;
  iVar5 = setting_get(*(int *)(param_1 + 0x14),0x52);
  param_2[0x18] = iVar5;
  iVar5 = setting_get(*(int *)(param_1 + 0x14),0x53);
  param_2[0x19] = iVar5;
  iVar5 = setting_get(*(int *)(param_1 + 0x14),0x54);
  param_2[0x1a] = iVar5;
  iVar5 = setting_get(*(int *)(param_1 + 0x14),0x50);
  param_2[0x1b] = iVar5;
  if (iVar5 == 0) {
    iStack_110 = setting_get(*(int *)(param_1 + 0x14),0x58);
    iVar5 = setting_get(*(int *)(param_1 + 0x14),0x59);
    iVar8 = 0x5a;
  }
  else {
    iStack_110 = setting_get(*(int *)(param_1 + 0x14),0x55);
    iVar5 = setting_get(*(int *)(param_1 + 0x14),0x56);
    iVar8 = 0x57;
  }
  iVar8 = setting_get(*(int *)(param_1 + 0x14),iVar8);
  param_2[0x1c] = iStack_110;
  param_2[0x1d] = iVar5;
  param_2[0x1e] = iVar8;
  iVar5 = setting_get(*(int *)(param_1 + 0x14),0xc2);
  param_2[0x1f] = iVar5;
  param_2[0x20] = uVar3;
  param_2[0x21] = uVar4;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,5);
  param_2[0x22] = iVar5;
  iVar5 = setting_get(*(int *)(param_1 + 0x14),0xab);
  param_2[0x23] = iVar5;
  param_2[0x24] = uVar7;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,1);
  param_2[0x25] = iVar5;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,6);
  param_2[0x26] = iVar5;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,8);
  param_2[0x27] = iVar5;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,9);
  param_2[0x28] = iVar5;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,10);
  param_2[0x29] = iVar5;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x27);
  param_2[0x2a] = iVar5;
  uVar3 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x28);
  iVar5 = map_mode_code_to_index_1045b3e8(uVar2,uVar3 & 0xff,uVar7);
  param_2[0x2b] = iVar5;
  param_2[0x2c] = iVar9;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,2);
  param_2[0x2d] = iVar5;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x2c);
  param_2[0x2e] = iVar5;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x2d);
  param_2[0x2f] = iVar5;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_ac,0x13);
  param_2[0x30] = iVar5;
  iVar5 = map_mode_index_to_code_1045b524(uVar2,uVar7);
  param_2[0x31] = iVar5;
  iVar5 = setting_get(*(int *)(param_1 + 0x14),0xb0);
  param_2[0x32] = iVar5;
  iVar5 = setting_get(*(int *)(param_1 + 0x14),0xbb);
  param_2[0x33] = iVar5;
  iVar5 = setting_get(*(int *)(param_1 + 0x14),0xc3);
  param_2[0x34] = iVar5;
  iVar5 = setting_get(*(int *)(param_1 + 0x14),0x10);
  if (iVar5 == 0xd) {
    iVar8 = *(int *)(param_1 + 0x14);
    iVar5 = 0x2e;
  }
  else if (iVar5 == 0xe) {
    iVar8 = *(int *)(param_1 + 0x14);
    iVar5 = 0x31;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x14);
    iVar5 = 0x2b;
  }
LAB_104d3406:
  uVar12 = setting_get(iVar8,iVar5);
  iVar5 = read_two_byte_table_entry_1045b5f2(uVar2,uVar12);
  param_2[0x35] = iVar5;
  cls_105a6ef4_delete(auStack_30,2);
  cls_105a6cfc_delete(auStack_7c,2);
  cls_105a6abc_delete(auStack_90,2);
  cls_105a6d8c_delete(auStack_ac,2);
  return 0x36;
}
