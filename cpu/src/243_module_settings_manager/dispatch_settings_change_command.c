/* @k10d dispatch_settings_change_command @ 0x104d1cfc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 243_module_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_settings_change_command(cls_105b9e6c *param_1,uint32_t param_2,int param_3)

{
  uint8_t uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint32_t uVar5;
  uint uVar6;
  uint uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uintptr_t sp;
  uint *puVar10;
  uint8_t auStack_24 [4];
  uint32_t uStack_c;
  
  puVar10 = (uint *)auStack_24;
  uVar1 = *(uint8_t *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  uVar9 = 0x81;
  iVar3 = read_virtual_property_field((int *)(param_1->field_0x10),(int)(1));
  bVar2 = false;
  if ((iVar3 == 2) || (iVar3 == 3)) {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0x84;
  }
  settings_refresh_working_copy((void *)(param_1->field_0x14));
  switch(uVar1) {
  case 0:
    uVar9 = add_eight_to_param(param_3);
    uVar9 = build_settings_output_array((int)(param_1),(int *)(uVar9));
    goto LAB_104d1d82;
  case 1:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar8 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar9 = set_setting_from_lookup((int)(param_1),(int)(uVar9),(uint8_t)(uVar8));
    break;
  case 2:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar9 = return_constant_0x81((uint32_t)(param_1),(uint32_t)(uVar9));
    break;
  case 3:
    set_struct_field_at_offset_4(param_3,0);
    uVar8 = param_1->field_0xc;
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    guarded_call_with_lock_104b8484(uVar8,uVar9);
    goto LAB_104d21a8;
  case 4:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar9 = compute_and_store_setting_value_104d3af8((int)(param_1),(uint)(uVar9));
    break;
  case 5:
  case 6:
    set_struct_field_at_offset_4(param_3,0);
    goto LAB_104d2224;
  case 7:
    set_struct_field_at_offset_4(param_3,0);
    uVar8 = param_1->field_0xc;
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar3 = send_two_byte_command(uVar8,uVar9);
    goto joined_r0x104d21a6;
  case 8:
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x23:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    break;
  case 0xb:
    set_struct_field_at_offset_4(param_3,0);
    uVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar7 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar4 = read_struct_field_at_index_1046c7ca(param_3,2);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,3);
    *puVar10 = uVar9;
    uVar9 = write_setting_entry_with_index((int)param_1,uVar6,uVar7 & 0xffff,uVar4 & 0xffff,*puVar10);
    break;
  case 0x10:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar9 = write_setting_by_index_and_value((int)(param_1),(uint)(uVar9));
    iVar3 = read_virtual_property_field((int *)(param_1->field_0x10),(int)(3));
    if (iVar3 == 1) {
      uVar5 = param_1->field_0xc;
      uVar8 = read_struct_field_at_index_1046c7ca(param_3,0);
      send_message_with_timeout_104b8a3c(uVar5,uVar8);
      return uVar9;
    }
    break;
  case 0x11:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar8 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar5 = read_struct_field_at_index_1046c7ca(param_3,2);
    uVar9 = write_setting_pair_by_id((int)(param_1),(int)(uVar9),(uint)(uVar8),(uint)(uVar5));
    break;
  case 0x12:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar8 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar9 = compute_and_store_setting_value_104d40cc((int)(param_1),(uint32_t)(uVar9),(uint)(uVar8));
    break;
  case 0x13:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar8 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar9 = compute_and_store_setting_value_104d413a((int)(param_1),(uint32_t)(uVar9),(uint)(uVar8));
    break;
  case 0x14:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar8 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar9 = compute_and_store_setting_value_104d41a8((int)(param_1),(uint32_t)(uVar9),(uint)(uVar8));
    break;
  case 0x15:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar8 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar5 = read_struct_field_at_index_1046c7ca(param_3,2);
    uVar9 = apply_three_setting_groups((int)(param_1),(uint)(uVar9),(uint)(uVar8),(uint)(uVar5));
    break;
  case 0x16:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = param_1->field_0xc;
    uVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar7 = read_struct_field_at_index_1046c7ca(param_3,1);
    iVar3 = process_event_with_two_params(uVar9,uVar6 & 0xffff,uVar7 & 0xffff);
    goto joined_r0x104d21a6;
  case 0x17:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = param_1->field_0xc;
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,2);
    uVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar7 = read_struct_field_at_index_1046c7ca(param_3,1);
    iVar3 = process_event_with_two_objects(uVar9,iVar3 != 0,uVar6 & 0xffff,uVar7 & 0xffff);
joined_r0x104d21a6:
    if (iVar3 == 0) {
      return 0x82;
    }
LAB_104d21a8:
    uVar9 = 0;
    break;
  case 0x18:
    set_struct_field_at_offset_4(param_3,0);
    uVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar7 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar9 = compute_and_store_setting_value_104d39dc((int)(param_1),(short)(uVar6 & 0xffff),(int)(uVar7 & 0xffff));
    break;
  case 0x19:
    set_struct_field_at_offset_4(param_3,0);
    uVar8 = param_1->field_0xc;
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    acquire_lock_and_dispatch_event(uVar8,uVar9);
LAB_104d2224:
    uVar9 = 0x81;
    break;
  case 0x1a:
    set_struct_field_at_offset_4(param_3,0);
    uVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar7 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar9 = write_setting_pair_from_object((int)(param_1),(short)(uVar6 & 0xffff),(int)(uVar7 & 0xffff));
    break;
  case 0x1b:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar9 = compute_and_store_setting_value_104d4284((int)(param_1),(uint)(uVar9));
    break;
  case 0x1c:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar9 = compute_and_store_setting_value_104d3a8a((int)(param_1),(uint)(uVar9));
    break;
  case 0x1d:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar9 = compute_and_store_setting_value_104d3e0a((int)(param_1),(uint)(uVar9));
    break;
  case 0x1e:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar8 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar9 = write_setting_from_index((int)(param_1),(int)(uVar9),(uint)(uVar8));
    break;
  case 0x1f:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar8 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar9 = compute_and_store_setting_value_104d4216((int)(param_1),(uint32_t)(uVar9),(uint)(uVar8));
    break;
  case 0x20:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar8 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar9 = set_mode_dependent_setting_104d42f2((int)(param_1),(int)(uVar9),(uint)(uVar8));
    break;
  case 0x21:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar8 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar9 = compute_and_set_setting_value((int)(param_1),(int)(uVar9),(uint)(uVar8));
    break;
  case 0x22:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar8 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar9 = set_mode_dependent_setting_104d451a((int)(param_1),(int)(uVar9),(uint)(uVar8));
    break;
  case 0x24:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar8 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar9 = set_setting_by_index_and_flag((int)(param_1),(int)(uVar9),(uint16_t)(uVar8));
    break;
  case 0x32:
    set_struct_field_at_offset_4(param_3,0);
    uVar9 = add_eight_to_param(param_3);
    uVar9 = write_exposure_settings_block((int)(param_1),(int *)(uVar9));
    break;
  case 0x33:
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
    uStack_c = 0;
    uVar8 = add_eight_to_param(param_3);
    uVar9 = query_exposure_status_block((int)(param_1),(int)(uVar9),(uint32_t *)(&uStack_c),(int *)(uVar8));
    set_struct_field_at_offset_4(param_3,uStack_c);
    return uVar9;
  case 100:
    uVar9 = add_eight_to_param(param_3);
    uVar9 = build_mode_settings_snapshot_104d25d0((int)(param_1),(int *)(uVar9));
LAB_104d1d82:
    set_struct_field_at_offset_4(param_3,uVar9);
    goto LAB_104d21a8;
  default:
  }
  return uVar9;
}
