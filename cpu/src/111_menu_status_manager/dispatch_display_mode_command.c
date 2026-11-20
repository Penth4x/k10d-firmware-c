/* @k10d dispatch_display_mode_command @ 0x1042ecc0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 111_menu_status_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_display_mode_command(int param_1,uint32_t param_2,int param_3)

{
  uint8_t uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  uint32_t uVar7;
  
  uVar1 = *(uint8_t *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  iVar3 = read_virtual_property_field((int *)(*(uint32_t *)(param_1 + 0x68)),(int)(1));
  bVar2 = false;
  if ((iVar3 == 2) || (iVar3 == 3)) {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0x84;
  }
  switch(uVar1) {
  case 0:
    set_struct_field_at_offset_4(param_3,1);
    iVar3 = extract_bits_5_to_12_from_virtual_call((int *)(*(uint32_t *)(param_1 + 0x70)));
    uVar4 = invoke_virtual_slot_11_10464cb2(*(int **)(param_1 + 0x70));
    uVar4 = (iVar3 << 5 | uVar4) & 0xff;
    goto LAB_1042ed4c;
  case 1:
    set_struct_field_at_offset_4(param_3,1);
    uVar4 = chain_three_context_helpers(*(int **)(param_1 + 0x70));
    goto LAB_1042ed4c;
  case 2:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    return 0x81;
  case 3:
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = get_sensor_singleton();
    configure_display_layer_params(*(uint32_t *)(iVar3 + 4));
    break;
  case 4:
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = get_sensor_singleton();
    iVar6 = *(int *)(iVar3 + 4);
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    if (iVar3 == 0) {
      deactivate_display_state(iVar6);
    }
    else {
      display_output_enable(__frv_reg_unset(4));
    }
    break;
  case 5:
    set_struct_field_at_offset_4(param_3,0);
    pvVar5 = (void *)get_or_init_sram_buffer_104277bc();
    uVar7 = read_table_entry_field(pvVar5,0xa9);
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    if (iVar3 == 0) {
      call_single_helper_with_param_104436e2((void *)(uVar7));
    }
    else {
      call_single_helper_with_param_104436da(__frv_reg_unset(4));
    }
    break;
  case 8:
    set_struct_field_at_offset_4(param_3,0);
    pvVar5 = (void *)get_or_init_sram_buffer_104277bc();
    pvVar5 = (void *)read_table_entry_field(pvVar5,0xcd);
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    if (iVar3 == 0) {
      invoke_object_method_at_offset_0x10_104ea71c(pvVar5);
    }
    else {
      call_subroutine_on_field_16_104ea70a(pvVar5);
    }
    break;
  case 0xe:
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = get_or_init_singleton_104aa272();
    uVar7 = *(uint32_t *)(iVar3 + 8);
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    store_byte_at_offset_0x18(uVar7,iVar3 != 0);
    break;
  case 0xf:
    set_struct_field_at_offset_4(param_3,1);
    iVar3 = get_or_init_singleton_104aa272();
    iVar3 = read_byte_at_offset_0x18_104aa6f0(*(uint32_t *)(iVar3 + 8));
    uVar4 = (uint)(iVar3 != 0);
LAB_1042ed4c:
    write_word_to_struct_array(param_3,uVar4,0);
    break;
  default:
    return 0x81;
  }
  return 0;
}
