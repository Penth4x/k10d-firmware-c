/* @k10d build_and_send_parameter_block @ 0x1036a49c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Constructs a multi-field parameter structure from object members and passes it to a
 *   transmission routine.
 * summary:
 *   The function reads various fields from the object at param_1 (including bytes at
 *   offsets 0x2a8-0x2b4 and a word at 0x6e) and calls a series of helper functions
 *   (FUN_10382xxx) to populate a structure at param_1+0x14. It then calls
 *   configure_four_region_objects with these collected values, followed by cleanup calls to
 *   free_heap_if_flagged_1045c402 and free_heap_block_if_flagged_1045bc54. The pattern
 *   suggests preparing and sending a configuration or status packet.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void build_and_send_parameter_block(int param_1)

{
  byte bVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t *puVar5;
  uint8_t auStack_58 [4];
  uint32_t auStack_38 [2];
  uint32_t auStack_30 [2];
  uint8_t auStack_28 [32];
  
  puVar5 = (uint32_t *)auStack_58;
  iVar4 = param_1 + 0x14;
  dispatch_virtual_slot_two_10382654(iVar4,0);
  register_two_menu_items_10382b02(iVar4,_DAT_80015d3c/*SDRAM*/,_DAT_80015d3e/*SDRAM*/);
  puVar3 = (uint32_t *)(param_1 + 0x3c);
  uVar2 = dispatch_by_mode_field_104bb922(puVar3);
  dispatch_two_object_virtual_calls(iVar4,uVar2,*(uint8_t *)(param_1 + 0x2b1));
  uVar2 = dispatch_on_mode_field_104bb9c2(puVar3);
  dispatch_virtual_command(iVar4,uVar2,*(uint8_t *)(param_1 + 0x2b3));
  uVar2 = dispatch_on_mode_field_104bb972(puVar3);
  dispatch_object_state_change_10382d98(iVar4,uVar2,*(uint8_t *)(param_1 + 0x2b2));
  uVar2 = dispatch_on_mode_field_104bba12(puVar3);
  dispatch_virtual_call_on_pair(iVar4,uVar2,*(uint8_t *)(param_1 + 0x2b4));
  format_and_register_menu_item_10382b60(iVar4,*(uint16_t *)(param_1 + 0x6e));
  bVar1 = *(byte *)(param_1 + 0x2a8);
  (*(code *)0x104bbbc2/*ROM*/)(auStack_38,puVar3);
  compute_two_16bit_deltas(auStack_30,puVar3);
  compute_signed_16bit_deltas(auStack_28,(int)puVar3);
  *puVar5 = (uintptr_t)(auStack_28);
  configure_four_region_objects(iVar4,(uint)bVar1,auStack_38,auStack_30,(uint32_t *)*puVar5);
  free_heap_if_flagged_1045c402(auStack_28,2);
  free_heap_block_if_flagged_1045bc54(auStack_30,2);
  free_heap_if_flagged_1045c402(auStack_38,2);
  update_two_short_fields_and_flag(param_1);
  return;
}
