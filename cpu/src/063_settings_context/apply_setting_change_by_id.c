/* @k10d apply_setting_change_by_id @ 0x103cbaee
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 063_settings_context (unit names are model-proposed)
 * purpose:
 *   Updates a setting value in a struct and persists it via setting_set based on the
 *   setting ID and new value.
 * summary:
 *   Stores param_3 into the struct at offset 0x14. Depending on the setting ID (param_2),
 *   it calls setting_set with specific indices (0x9c, 0x99, 0xaa, 0x98, 0x9b, 0x97) and the
 *   value from offset 0x20 or 0x23. For certain IDs and values, it also sets a flag at
 *   offset 0x22 to 0x8c and calls helper functions get_or_init_sram_block_1052b6fc,
 *   call_three_helpers_on_struct_1052b8d6, call_three_helpers_on_struct_1052b7f2, and
 *   init_two_magic_fields_104849d8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105958e8 * apply_setting_change_by_id(cls_105958e8 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  cls_105958e8 *pcVar4;
  
  param_1->field_0x14 = param_3;
  pcVar4 = param_1;
  if (param_2 == 0x105001a) {
    if ((param_3 == 0x11) || (param_3 == 0xe)) {
      setting_set(param_1->field_0x8,0x9c,(uint)(byte)param_1->field_0x20);
    }
    else if ((((param_3 == 7) || (param_3 == 0)) || (param_3 == 1)) || (param_3 == 3)) {
      setting_set(param_1->field_0x8,0x9c,(uint)(byte)param_1->field_0x20);
      param_1->field_0x22 = 0x8c;
      pcVar4 = (cls_105958e8 *)0x0;
    }
  }
  if (param_2 == 0x1050027) {
    iVar1 = param_1->field_0x14;
    if ((iVar1 == 0x11) || (iVar1 == 0xe)) {
      setting_set(param_1->field_0x8,0x99,(uint)(byte)param_1->field_0x20);
    }
    else if (((iVar1 == 7) || (iVar1 == 0)) || ((iVar1 == 1 || (iVar1 == 3)))) {
      setting_set(param_1->field_0x8,0x99,(uint)(byte)param_1->field_0x20);
      param_1->field_0x22 = 0x8c;
      pcVar4 = (cls_105958e8 *)0x0;
    }
  }
  if (param_2 == 0x1050032) {
    iVar1 = param_1->field_0x14;
    if ((iVar1 == 0x11) || (iVar1 == 0xe)) {
      setting_set(param_1->field_0x8,0xaa,(uint)(byte)param_1->field_0x20);
      puVar2 = (uint32_t *)get_or_init_sram_block_1052b6fc();
      call_three_helpers_on_struct_1052b8d6(puVar2);
      init_two_magic_fields_104849d8(param_1->field_0x8,1);
    }
    else if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
      setting_set(param_1->field_0x8,0xaa,(uint)(byte)param_1->field_0x20);
      puVar2 = (uint32_t *)get_or_init_sram_block_1052b6fc();
      call_three_helpers_on_struct_1052b8d6(puVar2);
      param_1->field_0x22 = 0x8c;
      pcVar4 = (cls_105958e8 *)0x0;
      init_two_magic_fields_104849d8(param_1->field_0x8,1);
    }
  }
  if (param_2 == 0x105005d) {
    iVar1 = param_1->field_0x14;
    if ((iVar1 == 0x11) || (iVar1 == 0xe)) {
      param_1->field_0x23 = param_1->field_0x20;
      setting_set(param_1->field_0x8,0x98,(uint)(byte)param_1->field_0x20);
    }
    else if (iVar1 == 0xc) {
      setting_set(param_1->field_0x8,0x98,(uint)(byte)param_1->field_0x23);
      uVar3 = get_or_init_sram_block_1052b6fc();
      call_three_helpers_on_struct_1052b7f2((uint32_t *)(uVar3),(uint32_t)((int)*(char *)((byte)param_1->field_0x23 + 0x105958d9/*ROM*/)));
    }
    else if (((iVar1 == 7) || (iVar1 == 0)) || ((iVar1 == 1 || (iVar1 == 3)))) {
      param_1->field_0x23 = param_1->field_0x20;
      setting_set(param_1->field_0x8,0x98,(uint)(byte)param_1->field_0x20);
      param_1->field_0x22 = 0x8c;
      pcVar4 = (cls_105958e8 *)0x0;
    }
  }
  if (param_2 == 0x1050070) {
    iVar1 = param_1->field_0x14;
    if ((iVar1 == 0x11) || (iVar1 == 0xe)) {
      setting_set(param_1->field_0x8,0x9b,(uint)(byte)param_1->field_0x20);
    }
    else if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
      setting_set(param_1->field_0x8,0x9b,(uint)(byte)param_1->field_0x20);
      param_1->field_0x22 = 0x8c;
      pcVar4 = (cls_105958e8 *)0x0;
    }
  }
  if (param_2 == 0x105007e) {
    iVar1 = param_1->field_0x14;
    if ((iVar1 == 0x11) || (iVar1 == 0xe)) {
      setting_set(param_1->field_0x8,0x97,(uint)(byte)param_1->field_0x20);
    }
    else if (((iVar1 == 7) || (iVar1 == 0)) || ((iVar1 == 1 || (iVar1 == 3)))) {
      setting_set(param_1->field_0x8,0x97,(uint)(byte)param_1->field_0x20);
      param_1->field_0x22 = 0x8c;
      pcVar4 = (cls_105958e8 *)0x0;
    }
  }
  return pcVar4;
}
