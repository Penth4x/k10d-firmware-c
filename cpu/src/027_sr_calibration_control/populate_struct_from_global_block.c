/* @k10d populate_struct_from_global_block @ 0x1036f82c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Copies numerous fields from a global data block at 0x80015d38 into a structure at
 *   param_1+0x80 via a series of setter calls.
 * summary:
 *   The function calls update_object_state_and_data on param_1, then uses
 *   read_struct_field_at_index_104c2890 to read many individual fields (indices 1-0x2c)
 *   from the global block at 0x80015d38. It passes these values to a series of setter
 *   functions (register_and_select_menu_items_1038929e through format_menu_item_string)
 *   that write to the structure located at param_1+0x80. It also reads a status word from
 *   param_1 via init_sram_block_and_store_param to conditionally call
 *   dispatch_event_and_return_offset. The pattern of reading many fields from a source and
 *   writing them to a destination struct suggests a configuration or state synchronization
 *   operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void populate_struct_from_global_block(void *param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  uint8_t *puVar7;
  uint8_t auStack_4c [4];
  uint16_t auStack_1c [8];
  void *pvStack_c;
  
  puVar7 = auStack_4c;
  update_object_state_and_data((int)param_1);
  iVar5 = (int)param_1 + 0x80;
  if (DAT_800043a0/*SDRAM*/ == '\0') {
    uVar1 = 5;
  }
  else {
    uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0);
  }
  register_and_select_menu_items_1038929e(iVar5,uVar1);
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x14);
  uVar2 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x15);
  register_and_select_menu_items_1038936a(iVar5,uVar1,uVar2);
  register_two_menu_items_103896ba(iVar5,_DAT_80015d3c/*SDRAM*/,_DAT_80015d3e/*SDRAM*/);
  invoke_virtual_method_on_object_10389746(iVar5,uRam80015d60);
  invoke_virtual_method_on_object_10389718(iVar5,sRam80015f0c != 0);
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x1b);
  register_and_select_menu_items_10389b7a(iVar5,uVar1);
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0xb);
  uVar2 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0xc);
  format_and_render_menu_item_10389774((int)(iVar5),(uint)(uVar1),(uint ***)(uVar2));
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x1f);
  uVar2 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x20);
  format_and_register_menu_item_103898da((int)(iVar5),(uint)(uVar1),(void *)(uVar2),(void *)__frv_reg_unset(7));
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0xd);
  uVar2 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0xe);
  format_and_log_buffer_state((int)(iVar5),(uint)(uVar1),(void *)(uVar2));
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x12);
  register_and_select_menu_items_10389c46(iVar5,uVar1);
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x25);
  uVar2 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x24);
  register_and_set_menu_item_flag(iVar5,uVar1,uVar2);
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x17);
  uVar2 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x18);
  uVar3 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x19);
  register_and_select_menu_items_10389e9a(iVar5,uVar1,uVar2,uVar3);
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x21);
  uVar2 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x1a);
  register_and_configure_menu_item_1038a040(iVar5,uVar1,uVar2);
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x22);
  register_and_select_menu_items_1038a148(iVar5,uVar1);
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0xf);
  uVar2 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x10);
  uVar3 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x11);
  register_menu_item_with_status_1038a260(iVar5,uVar1,uVar2,uVar3);
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,7);
  uVar2 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,10);
  register_and_activate_menu_items_1038a3d0((int)(iVar5),(uint32_t)(uVar1),(void *)(uVar2),(void *)__frv_reg_unset(7));
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,9);
  uVar2 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,8);
  format_two_menu_items((int)(iVar5),(void *)(uVar1),(void *)(uVar2),(void *)__frv_reg_unset(7));
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x25);
  uVar2 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x26);
  uVar3 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x27);
  register_menu_item_with_status_1038a88e(iVar5,uVar1,uVar2,uVar3);
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x1c);
  uVar2 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x1d);
  uVar3 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x28);
  dispatch_exposure_mode_command(iVar5,uVar1,uVar2,uVar3);
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x13);
  format_and_register_menu_item_1038ac7e((int)(iVar5),(void *)(uVar1),(uint32_t)(__frv_reg_unset(6)),(void *)__frv_reg_unset(7));
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,6);
  register_menu_item_with_label_1038ace0(iVar5,uVar1,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,1);
  register_and_select_menu_items_1038ad3c(iVar5,uVar1);
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,2);
  register_and_dispatch_menu_mode_1038b194(iVar5,uVar1);
  uVar1 = init_sram_block_and_store_param(param_1);
  dispatch_mode_state_change_1038adc6(iVar5,uVar1);
  pvStack_c = (void *)0x80015d38/*SDRAM*/;
  uVar4 = init_sram_block_and_store_param(param_1);
  if ((uVar4 & 1) == 0) {
    if ((uVar4 & 2) != 0) {
      dispatch_event_and_return_offset(param_1,&pvStack_c,1);
    }
  }
  else {
    dispatch_event_and_return_offset(param_1,&pvStack_c,0);
  }
  iVar6 = (int)param_1 + 0x80;
  uVar1 = (*(code *)0x104c285c/*ROM*/)(pvStack_c,2);
  uVar2 = (*(code *)0x104c286c/*ROM*/)(pvStack_c,2);
  uVar3 = init_sram_block_and_store_param(param_1);
  register_and_select_menu_items_1038af1c(iVar6,uVar1,uVar2,uVar3);
  uVar1 = read_struct_field_at_index_104c2890(pvStack_c,5);
  register_and_select_menu_item_1038b0c8(iVar6,uVar1);
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,4);
  register_and_dispatch_menu_mode_1038b278(iVar6,uVar1);
  iVar5 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0x2c);
  (*(code *)0x104c289e/*ROM*/)(auStack_1c,0x80015d38/*SDRAM*/);
  uVar4 = get_setting_0xa3_with_refresh((int *)0x800158d4/*SDRAM*/);
  uVar1 = get_setting_0xa4_with_refresh((int *)0x800158d4/*SDRAM*/);
  puVar7[3] = (char)uVar1;
  format_menu_item_string(iVar6,iVar5,auStack_1c,uVar4,puVar7[3]);
  free_heap_if_flag_set_1045c56c(auStack_1c,2);
  uVar1 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,3);
  dispatch_mode_change_request_1038b35c(iVar6,uVar1);
  return;
}
