/* @k10d configure_mode_dependent_struct @ 0x1036f5c6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Populates a sub-structure at offset 0x30 or 0x58 based on a mode flag at offset 0xb4.
 * summary:
 *   The function reads a mode flag from the input object. If the flag is 0, it initializes
 *   a structure at offset 0x30 using a specific set of helper functions. If the flag is
 *   non-zero, it initializes a structure at offset 0x58 using a different set of helpers,
 *   passing four distinct parameter blocks. It also conditionally calls
 *   allocate_and_register_buffer_blocks and performs cleanup calls on local variables.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure_mode_dependent_struct(void *param_1)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  int iStack_50;
  uint32_t uStack_4c;
  int iStack_48;
  uint32_t uStack_44;
  int iStack_40;
  uint32_t uStack_3c;
  int iStack_38;
  uint32_t uStack_34;
  int iStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  int iStack_28;
  uint16_t uStack_24;
  uint16_t uStack_22;
  int iStack_20;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  int iStack_18;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint8_t auStack_10 [8];
  
  bVar1 = false;
  iStack_50 = 0;
  uStack_4c = 0x10001;
  iStack_48 = 0;
  uStack_44 = 0x10001;
  iStack_40 = 0;
  uStack_3c = 0x10001;
  iStack_38 = 0;
  uStack_34 = 0x10001;
  iVar4 = 0;
  if ((iRam80015b08 == 2) && (cRam80015d00 != '\0')) {
    bVar1 = true;
    iVar4 = 1;
  }
  if (*(int *)((int)param_1 + 0xb4) == 1) {
    iVar4 = 1;
  }
  if (bVar1) {
    allocate_and_register_buffer_blocks((int)param_1,&iStack_50,&iStack_48,&iStack_40,&iStack_38);
  }
  uStack_2c = ((uint16_t)((uint64_t)(uStack_4c) >> 0));
  iStack_30 = iStack_50;
  uStack_2a = ((uint16_t)((uint64_t)(uStack_4c) >> 16));
  uStack_24 = ((uint16_t)((uint64_t)(uStack_44) >> 0));
  iStack_28 = iStack_48;
  uStack_22 = ((uint16_t)((uint64_t)(uStack_44) >> 16));
  uStack_1c = ((uint16_t)((uint64_t)(uStack_3c) >> 0));
  iStack_20 = iStack_40;
  uStack_1a = ((uint16_t)((uint64_t)(uStack_3c) >> 16));
  uStack_14 = ((uint16_t)((uint64_t)(uStack_34) >> 0));
  iStack_18 = iStack_38;
  uStack_12 = ((uint16_t)((uint64_t)(uStack_34) >> 16));
  if (*(int *)((int)param_1 + 0xb4) == 0) {
    iVar3 = (int)param_1 + 0x30;
    apply_mode_state_to_object_group(iVar3,2);
    uVar2 = init_sram_block_and_store_param(param_1);
    register_and_select_menu_items_1038deb2(iVar3,uVar2);
    store_two_values_and_copy(iVar3,_DAT_80015d3c/*SDRAM*/,_DAT_80015d3e/*SDRAM*/);
    invoke_virtual_slot_two_1038e170(iVar3,uRam80015d60);
    dispatch_virtual_call_on_object_1038e19e(iVar3,sRam80015f0c != 0);
    iVar6 = 8;
    do {
      iVar5 = iVar6 + -4;
      *(uint32_t *)((int)&uStack_14 + iVar6) = *(uint32_t *)((int)&uStack_34 + iVar6);
      iVar6 = iVar5;
    } while (iVar5 != 0);
    register_and_notify_menu_items(iVar3,iVar4,auStack_10);
  }
  else {
    iVar3 = (int)param_1 + 0x58;
    uVar2 = init_sram_block_and_store_param(param_1);
    register_and_select_menu_items_10408ab8(iVar3,uVar2);
    register_two_menu_items_10408c0e(iVar3,_DAT_80015d3c/*SDRAM*/,_DAT_80015d3e/*SDRAM*/);
    register_menu_item_with_param(iVar3,uRam80015d60);
    invoke_virtual_method_on_object_10408c9a(iVar3,sRam80015f0c != 0);
    iVar6 = 8;
    do {
      iVar5 = iVar6 + -4;
      *(uint32_t *)((int)&uStack_14 + iVar6) = *(uint32_t *)((int)&uStack_34 + iVar6);
      iVar6 = iVar5;
    } while (iVar5 != 0);
    dispatch_event_to_object_10408d62(iVar3,iVar4,auStack_10,0);
    iVar6 = 8;
    do {
      iVar5 = iVar6 + -4;
      *(uint32_t *)((int)&uStack_14 + iVar6) = *(uint32_t *)((int)&uStack_2c + iVar6);
      iVar6 = iVar5;
    } while (iVar5 != 0);
    dispatch_event_to_object_10408d62(iVar3,iVar4,auStack_10,1);
    iVar6 = 8;
    do {
      iVar5 = iVar6 + -4;
      *(uint32_t *)((int)&uStack_14 + iVar6) = *(uint32_t *)((int)&uStack_24 + iVar6);
      iVar6 = iVar5;
    } while (iVar5 != 0);
    dispatch_event_to_object_10408d62(iVar3,iVar4,auStack_10,2);
    iVar6 = 8;
    do {
      iVar5 = iVar6 + -4;
      *(uint32_t *)((int)&uStack_14 + iVar6) = *(uint32_t *)((int)&uStack_1c + iVar6);
      iVar6 = iVar5;
    } while (iVar5 != 0);
    dispatch_event_to_object_10408d62(iVar3,iVar4,auStack_10,3);
  }
  update_object_state_and_data((int)param_1);
  heap_free_2(iStack_50);
  heap_free_2(iStack_48);
  heap_free_2(iStack_40);
  heap_free_2(iStack_38);
  return;
}
