/* @k10d dispatch_command_by_type_1042b546 @ 0x1042b546
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Dispatches a command based on a type byte, calling specific handlers and returning
 *   status codes.
 * summary:
 *   Reads a command type from param_3+0x859 and checks a state via
 *   read_virtual_property_field. If the state is 2 or 3, it switches on the command type
 *   (0-0x11) to call one of many handler functions (call_helper_with_fixed_args_10462e64
 *   through call_helper_with_two_byte_param_10463016) with parameters derived from param_1
 *   and param_3. Returns 0 on success, 0x82 on handler failure, 0x83 for unknown command,
 *   or 0x84 if the state check fails.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1042b648) overlaps instruction at (ram,0x1042b646)
    */

int dispatch_command_by_type_1042b546(cls_1059e7c8 *param_1,uint32_t param_2,int param_3)

{
  uint8_t uVar1;
  bool bVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  uint uVar6;
  uintptr_t sp;
  ushort uStack_c;
  byte bStack_9;
  
  uVar1 = *(uint8_t *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  iVar3 = read_virtual_property_field((int *)(param_1->field_0x10),(int)(1));
  bVar2 = false;
  if ((iVar3 == 2) || (iVar3 == 3)) {
    bVar2 = true;
  }
  if (bVar2) {
    switch(uVar1) {
    case 0:
      set_struct_field_at_offset_4(param_3,0);
      iVar3 = call_helper_with_fixed_args_10462e64((int *)param_1->field_0xc);
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = 0;
      }
      break;
    case 1:
      set_struct_field_at_offset_4(param_3,0);
      iVar3 = call_helper_with_fixed_args_10462e7c((int *)param_1->field_0xc);
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = 0;
      }
      break;
    case 2:
      set_struct_field_at_offset_4(param_3,1);
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,0);
      bStack_9 = 0;
      iVar5 = write_two_byte_value_via_helper_10462e94((int *)param_1->field_0xc,(int)(short)uVar4,(int)&bStack_9);
      iVar3 = 0;
      if (iVar5 == 0) {
        iVar3 = 0x82;
      }
      if (iVar3 == 0) {
        write_word_to_struct_array(param_3,(uint)bStack_9,0);
      }
      break;
    case 3:
      set_struct_field_at_offset_4(param_3,0);
      uVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
      iVar3 = call_helper_with_two_byte_param_10462eb6((int *)param_1->field_0xc,uVar6 & 0xffff);
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = 0;
      }
      break;
    case 4:
      set_struct_field_at_offset_4(param_3,0);
      uVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
      iVar3 = call_helper_with_stack_param_10462ed8((int *)param_1->field_0xc,uVar6 & 0xff);
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = 0;
      }
      break;
    case 5:
      set_struct_field_at_offset_4(param_3,0);
      uVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
      iVar3 = call_helper_with_stack_arg_10462ef6((int *)param_1->field_0xc,uVar6 & 0xff);
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = 0;
      }
      break;
    case 6:
      set_struct_field_at_offset_4(param_3,0);
      iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
      iVar3 = set_flag_in_struct_10462f14((int *)param_1->field_0xc,(uint)(iVar3 != 0));
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = 0;
      }
      break;
    case 7:
      set_struct_field_at_offset_4(param_3,0);
      uVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
      iVar3 = call_helper_with_stack_arg_10462f38((int *)param_1->field_0xc,uVar6 & 0xff);
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = 0;
      }
      break;
    case 8:
      set_struct_field_at_offset_4(param_3,0);
      iVar3 = call_helper_with_offset_and_size_10462f56((int *)param_1->field_0xc);
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = 0;
      }
      break;
    case 9:
      set_struct_field_at_offset_4(param_3,0);
      iVar3 = call_helper_with_fixed_args_10462f6e((int *)param_1->field_0xc);
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = 0;
      }
      break;
    case 10:
      set_struct_field_at_offset_4(param_3,0);
      iVar3 = call_helper_with_fixed_args_10462f86((int *)param_1->field_0xc);
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = 0;
      }
      break;
    case 0xb:
      set_struct_field_at_offset_4(param_3,0);
      iVar3 = call_subroutine_with_fixed_args_10462f9e((int *)param_1->field_0xc);
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = 0;
      }
      break;
    case 0xc:
      set_struct_field_at_offset_4(param_3,0);
      iVar3 = call_helper_with_offset_and_size_10462fb6((int *)param_1->field_0xc);
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = 0;
      }
      break;
    case 0xd:
      set_struct_field_at_offset_4(param_3,0);
      iVar3 = call_helper_with_fixed_args_10462fce((int *)param_1->field_0xc);
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = 0;
      }
      break;
    case 0xe:
      set_struct_field_at_offset_4(param_3,0);
      iVar3 = call_helper_with_fixed_args_10462fe6((int *)param_1->field_0xc);
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = 0;
      }
      break;
    case 0xf:
      set_struct_field_at_offset_4(param_3,0);
      iVar3 = call_helper_with_fixed_args_10462ffe((int *)param_1->field_0xc);
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = 0;
      }
      break;
    case 0x10:
      set_struct_field_at_offset_4(param_3,0);
      uVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
      iVar3 = call_helper_with_two_byte_param_10463016((int *)param_1->field_0xc,uVar6 & 0xffff);
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = 0;
      }
      break;
    case 0x11:
      set_struct_field_at_offset_4(param_3,1);
      uStack_c = 0;
      compute_two_byte_result((int *)(param_1->field_0xc),(ushort *)(&uStack_c));
      write_word_to_struct_array(param_3,(uint)uStack_c,0);
      iVar3 = 0;
      break;
    default:
      iVar3 = 0x83;
    }
  }
  else {
    iVar3 = 0x84;
  }
  return iVar3;
}
