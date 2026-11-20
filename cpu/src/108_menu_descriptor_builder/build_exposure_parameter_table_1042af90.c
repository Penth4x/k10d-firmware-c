/* @k10d build_exposure_parameter_table_1042af90 @ 0x1042af90
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Constructs a 22-entry parameter array from four camera subsystem objects and a context
 *   handle.
 * summary:
 *   The function instantiates four C++ objects (cls_105a6abc, cls_105a6cfc, cls_105a6d8c,
 *   cls_105a6ef4) using a pointer from param_1. It extracts scalar values and boolean flags
 *   from these objects via virtual calls (extract_bitfield_from_byte_array,
 *   test_flag_bit_in_table, etc.) and passes them to helper functions
 *   (validate_and_lookup_pair, dispatch_rtos_call_with_conditional_args, etc.) to compute
 *   derived values. The results are stored sequentially in the array pointed to by param_2,
 *   with specific indices (3, 5, 7, 0xf, 0x11, 0x15) hardcoded to the value 10. The
 *   function returns the constant 0x16 (22), indicating the number of entries populated.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_exposure_parameter_table_1042af90(int param_1,uint *param_2)

{
  uint8_t uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint32_t uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ushort uVar18;
  bool bVar19;
  bool bVar20;
  uintptr_t sp;
  int *piVar21;
  uint8_t local_110 [20];
  cls_105a6abc acStack_ac [5];
  cls_105a6cfc acStack_98 [19];
  cls_105a6d8c acStack_4c [7];
  cls_105a6ef4 acStack_30 [8];
  ushort uStack_10;
  ushort uStack_e;
  ushort uStack_c;
  ushort uStack_a;
  
  piVar21 = (int *)local_110;
  uVar8 = get_or_init_heap_block();
  cls_105a6abc_new(acStack_ac);
  copy_buffer_with_lock_1045e22a(*(int *)(param_1 + 8),acStack_ac);
  cls_105a6cfc_new(acStack_98);
  copy_0x45_byte_block(*(int *)(param_1 + 8),acStack_98);
  cls_105a6d8c_new(acStack_4c);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_4c);
  cls_105a6ef4_new(acStack_30);
  copy_27_bytes_to_buffer(*(int *)(param_1 + 8),acStack_30);
  uVar9 = extract_field_from_struct_1045ff0e(acStack_4c,3);
  uVar9 = uVar9 & 0xff;
  uVar10 = extract_bitfield_from_byte_array(acStack_ac,5);
  uVar10 = uVar10 & 0xff;
  uVar11 = extract_field_from_struct_1045ff0e(acStack_4c,0);
  if (((uVar11 & 0xff) == 0x10) || ((uVar11 & 0xff) == 0x11)) {
    *param_2 = 1;
    uVar11 = 0xb4;
  }
  else {
    uStack_c = 0;
    uStack_a = 0;
    uVar11 = extract_bitfield_from_byte_array(acStack_ac,0);
    *piVar21 = (int)&uStack_c;
    piVar21[1] = (int)&uStack_a;
    piVar21[2] = (int)acStack_30;
    validate_and_lookup_pair(uVar8,uVar11 & 0xff,uVar9,uVar10,(uint16_t *)*piVar21,(uint16_t *)piVar21[1],
                 (int *)piVar21[2]);
    *param_2 = (uint)uStack_c;
    uVar11 = (uint)uStack_a;
  }
  param_2[1] = uVar11;
  uVar11 = extract_bitfield_from_byte_array(acStack_ac,1);
  uVar12 = extract_bitfield_from_byte_array(acStack_ac,0x10);
  iVar13 = extract_bitfield_from_byte_array(acStack_ac,0x12);
  uVar14 = extract_field_from_struct_1045fc62(acStack_98,0x29);
  iVar15 = extract_field_from_struct_1045fc62(acStack_98,1);
  iVar16 = extract_field_from_struct_1045fc62(acStack_98,8);
  iVar17 = extract_bitfield_from_byte_array(acStack_ac,0x13);
  uVar1 = (uint8_t)iVar13;
  *(uint8_t *)((int)piVar21 + 3) = uVar1;
  *(char *)((int)piVar21 + 7) = (char)uVar14;
  *(char *)((int)piVar21 + 0xb) = (char)iVar15;
  *(short *)((int)piVar21 + 0xe) = (short)iVar16;
  *(char *)((int)piVar21 + 0x13) = (char)iVar17;
  uVar11 = dispatch_rtos_call_with_conditional_args(uVar8,uVar11 & 0xff,uVar9,uVar12 & 0xff,*(byte *)((int)piVar21 + 3),
                        *(uint8_t *)((int)piVar21 + 7),*(uint8_t *)((int)piVar21 + 0xb),
                        *(uint16_t *)((int)piVar21 + 0xe),*(byte *)((int)piVar21 + 0x13));
  param_2[2] = uVar11;
  param_2[3] = 10;
  uVar11 = extract_bitfield_from_byte_array(acStack_ac,3);
  uVar11 = lookup_two_byte_table_entry_1045a89c(uVar8,uVar9,uVar11 & 0xff);
  param_2[4] = uVar11;
  param_2[5] = 10;
  uVar11 = extract_bitfield_from_byte_array(acStack_ac,4);
  uVar11 = map_code_to_value(uVar8,uVar11 & 0xff);
  param_2[6] = uVar11;
  param_2[7] = 10;
  uStack_10 = 0;
  uStack_e = 0;
  *piVar21 = (int)&uStack_10;
  piVar21[1] = (int)&uStack_e;
  piVar21[2] = (int)acStack_30;
  validate_and_lookup_pair(uVar8,uVar10,uVar9,uVar10,(uint16_t *)*piVar21,(uint16_t *)piVar21[1],
               (int *)piVar21[2]);
  param_2[8] = (uint)uStack_10;
  param_2[9] = (uint)uStack_e;
  uVar10 = extract_field_from_struct_1045ff0e(acStack_4c,0x29);
  uVar11 = extract_bitfield_from_byte_array(acStack_ac,2);
  iVar13 = extract_field_from_struct_1045ff0e(acStack_4c,0);
  *(char *)((int)piVar21 + 3) = (char)iVar13;
  uVar18 = lookup_two_byte_table_entry_1045a6c0(uVar8,uVar11 & 0xff,uVar10 & 0xff,uVar9,*(char *)((int)piVar21 + 3));
  param_2[10] = (uint)uVar18;
  uVar10 = extract_bitfield_from_byte_array(acStack_ac,8);
  param_2[0xb] = uVar10;
  bVar19 = test_flag_bit_in_table(acStack_ac,9);
  bVar20 = test_flag_bit_in_table(acStack_ac,10);
  uVar10 = 2;
  if (!bVar20) {
    uVar10 = 0;
  }
  bVar20 = test_flag_bit_in_table(acStack_ac,0xb);
  uVar11 = 4;
  if (!bVar20) {
    uVar11 = 0;
  }
  bVar20 = test_flag_bit_in_table(acStack_ac,0xc);
  uVar12 = 8;
  if (!bVar20) {
    uVar12 = 0;
  }
  bVar20 = test_flag_bit_in_table(acStack_ac,0xd);
  uVar2 = 0x10;
  if (!bVar20) {
    uVar2 = 0;
  }
  bVar20 = test_flag_bit_in_table(acStack_ac,0xe);
  uVar3 = 0x20;
  if (!bVar20) {
    uVar3 = 0;
  }
  bVar20 = test_flag_bit_in_table(acStack_ac,0xf);
  uVar4 = 0x40;
  if (!bVar20) {
    uVar4 = 0;
  }
  bVar20 = test_flag_bit_in_table(acStack_ac,0x10);
  uVar5 = 0x80;
  if (!bVar20) {
    uVar5 = 0;
  }
  bVar20 = test_flag_bit_in_table(acStack_ac,6);
  if (bVar20) {
    uVar6 = 0x100;
  }
  else {
    uVar6 = 0;
  }
  bVar20 = test_flag_bit_in_table(acStack_ac,7);
  if (bVar20) {
    uVar7 = 0x200;
  }
  else {
    uVar7 = 0;
  }
  param_2[0xc] = bVar19 | uVar10 | uVar11 | uVar12 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
  uVar10 = extract_bitfield_from_byte_array(acStack_ac,0x11);
  param_2[0xd] = uVar10;
  *(char *)((int)piVar21 + 3) = (char)iVar15;
  *(short *)((int)piVar21 + 6) = (short)iVar16;
  *(char *)((int)piVar21 + 0xb) = (char)iVar17;
  uVar10 = wrap_kernel_call_with_flag_override(uVar8,uVar1,uVar9,uVar14 & 0xff,*(char *)((int)piVar21 + 3),
                        *(short *)((int)piVar21 + 6),*(uint8_t *)((int)piVar21 + 0xb));
  param_2[0xe] = uVar10;
  param_2[0xf] = 10;
  extract_bitfield_from_byte_array(acStack_ac,0x14);
  *(uint8_t *)((int)piVar21 + 3) = uVar1;
  uVar10 = forward_five_args_to_helper_1045a57a();
  param_2[0x10] = uVar10;
  param_2[0x11] = 10;
  uVar10 = extract_bitfield_from_byte_array(acStack_ac,0x15);
  param_2[0x12] = uVar10;
  param_2[0x13] = 0;
  uVar10 = extract_bitfield_from_byte_array(acStack_ac,0x16);
  uVar9 = lookup_two_byte_table_entry_1045a89c(uVar8,uVar9,uVar10 & 0xff);
  param_2[0x14] = uVar9;
  param_2[0x15] = 10;
  cls_105a6ef4_delete(acStack_30,2);
  cls_105a6d8c_delete(acStack_4c,2);
  cls_105a6cfc_delete(acStack_98,2);
  cls_105a6abc_delete(acStack_ac,2);
  return 0x16;
}
