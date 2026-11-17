/* @k10d dispatch_command_by_type_1042e402 @ 0x1042e402
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 110_io_control_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_command_by_type_1042e402(int param_1,uint32_t param_2,int param_3)

{
  uint8_t uVar1;
  bool bVar2;
  int iVar3;
  uint32_t uVar4;
  uint uVar5;
  int *piVar6;
  uint32_t uVar7;
  uintptr_t sp;
  int aiStack_14 [2];
  ushort uStack_a;
  
  uVar1 = *(uint8_t *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  iVar3 = read_virtual_property_field(*(uint32_t *)(param_1 + 0x10),1);
  bVar2 = false;
  if ((iVar3 == 2) || (iVar3 == 3)) {
    bVar2 = true;
  }
  if (bVar2) {
    switch(uVar1) {
    case 0:
      set_struct_field_at_offset_4(param_3,0);
      uVar7 = read_struct_field_at_index_1046c7ca(param_3,0);
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,1);
      iVar3 = call_helper_with_two_byte_args(*(int **)(param_1 + 0xc),(char)uVar7,(char)uVar4);
      if (iVar3 == 0) {
        uVar7 = 0x82;
      }
      else {
        uVar7 = 0;
      }
      break;
    case 1:
      set_struct_field_at_offset_4(param_3,0);
      piVar6 = *(int **)(param_1 + 0xc);
      uVar5 = read_struct_field_at_index_1046c7ca(param_3,0);
      iVar3 = call_helper_with_offset_args_10462da8(piVar6,uVar5 & 0xff);
      if (iVar3 == 0) {
        uVar7 = 0x82;
      }
      else {
        uVar7 = 0;
      }
      break;
    case 2:
      set_struct_field_at_offset_4(param_3,0);
      piVar6 = *(int **)(param_1 + 0xc);
      uVar5 = read_struct_field_at_index_1046c7ca(param_3,0);
      iVar3 = call_helper_with_stack_param_10462dcc(piVar6,uVar5 & 0xff);
      if (iVar3 == 0) {
        uVar7 = 0x82;
      }
      else {
        uVar7 = 0;
      }
      break;
    case 3:
      set_struct_field_at_offset_4(param_3,0);
      piVar6 = *(int **)(param_1 + 0xc);
      iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
      iVar3 = set_flag_in_struct_10462df0(piVar6,(uint)(iVar3 != 0));
      if (iVar3 == 0) {
        uVar7 = 0x82;
      }
      else {
        uVar7 = 0;
      }
      break;
    case 4:
      set_struct_field_at_offset_4(param_3,1);
      uStack_a = 0;
      uVar7 = *(uint32_t *)(param_1 + 0xc);
      iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
      iVar3 = query_two_byte_value(uVar7,iVar3 != 0,&uStack_a);
      uVar7 = 0;
      if (iVar3 == 0) {
        uVar7 = 0x82;
      }
      write_word_to_struct_array(param_3,(uint)uStack_a,0);
      break;
    case 5:
      set_struct_field_at_offset_4(param_3,1);
      cls_105a6e64_new(aiStack_14);
      copy_four_bytes_from_struct_field_1045e556(*(int *)(param_1 + 8),aiStack_14);
      uVar7 = invoke_virtual_slot_two_104602ce(aiStack_14);
      write_word_to_struct_array(param_3,uVar7,0);
      cls_105a6e64_delete(aiStack_14,2);
      uVar7 = 0;
      break;
    default:
      uVar7 = 0x81;
    }
  }
  else {
    uVar7 = 0x84;
  }
  return uVar7;
}
