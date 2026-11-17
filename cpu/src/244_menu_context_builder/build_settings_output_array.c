/* @k10d build_settings_output_array @ 0x104d345a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 244_menu_context_builder (unit names are model-proposed)
 * purpose:
 *   Populates a 30-element integer array with values extracted from a settings object and
 *   helper calculations.
 * summary:
 *   The function refreshes the settings working copy, instantiates a temporary object
 *   (cls_105a6d8c), and fills param_2 with 30 integers. Most values are retrieved via
 *   virtual method slot 2 (extract_field_from_struct_1045ff0e) from the temporary object
 *   using specific indices, while others are derived from setting_get and helper functions
 *   lookup_two_byte_table_entry_1045a6c0 and map_code_to_value. It returns the constant
 *   0x1e (30), indicating the number of elements written.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_settings_output_array(int param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  uintptr_t sp;
  uint8_t *puVar8;
  uint8_t auStack_44 [4];
  uint32_t auStack_24 [7];
  
  puVar8 = auStack_44;
  settings_refresh_working_copy(*(void **)(param_1 + 0x14));
  iVar1 = get_or_create_singleton_object_10485138();
  iVar1 = *(int *)(iVar1 + 4);
  uVar2 = get_or_init_heap_block();
  cls_105a6d8c_new(auStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),auStack_24);
  uVar3 = extract_field_from_struct_1045ff0e((int)auStack_24,3);
  iVar1 = setting_get(iVar1,0xb3);
  iVar4 = extract_field_from_struct_1045ff0e((int)auStack_24,0);
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_24,0);
  *param_2 = iVar5;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_24,1);
  param_2[1] = iVar5;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_24,2);
  param_2[2] = iVar5;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_24,6);
  param_2[3] = iVar5;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_24,7);
  param_2[4] = iVar5;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_24,8);
  param_2[5] = iVar5;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_24,9);
  param_2[6] = iVar5;
  iVar5 = extract_field_from_struct_1045ff0e((int)auStack_24,10);
  param_2[7] = iVar5;
  uVar6 = extract_field_from_struct_1045ff0e((int)auStack_24,0xb);
  puVar8[3] = (char)iVar4;
  uVar7 = lookup_two_byte_table_entry_1045a6c0(uVar2,uVar6 & 0xff,iVar1,uVar3 & 0xff,puVar8[3]);
  param_2[8] = (uint)uVar7;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0xc);
  param_2[9] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0xd);
  param_2[10] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0xe);
  param_2[0xb] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0xf);
  param_2[0xc] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x10);
  param_2[0xd] = iVar1;
  uVar3 = extract_field_from_struct_1045ff0e((int)auStack_24,0x11);
  iVar1 = map_code_to_value(uVar2,uVar3 & 0xff);
  param_2[0xe] = iVar1;
  param_2[0xf] = 10;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x12);
  param_2[0x10] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x13);
  param_2[0x11] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x14);
  param_2[0x12] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x15);
  param_2[0x13] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x16);
  param_2[0x14] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x19);
  param_2[0x15] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x1a);
  param_2[0x16] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x1d);
  param_2[0x17] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x1e);
  param_2[0x18] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x27);
  param_2[0x19] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x28);
  param_2[0x1a] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x2b);
  param_2[0x1b] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x2c);
  param_2[0x1c] = iVar1;
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x2d);
  param_2[0x1d] = iVar1;
  cls_105a6d8c_delete(auStack_24,2);
  return 0x1e;
}
