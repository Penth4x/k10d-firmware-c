/* @k10d apply_context_state_flags @ 0x103a3184
 * name: model (proposed by the local model from the decompile, confidence 0.50)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Reads flag bytes from a context object and issues a sequence of virtual calls and
 *   helper functions to update state.
 * summary:
 *   The function accesses bytes at offsets 0x41, 0x42, 0x44, and 0x45 of the input object.
 *   It repeatedly calls menu_item_register to obtain a pointer and invokes a virtual method
 *   (slot 2) with arguments 0 or 1, likely toggling flags or states. It also calls
 *   render_decimal_digits_to_object with calculated offsets and lookup_shutter_speed_value,
 *   suggesting updates to a status or control interface. The specific subsystem is not
 *   explicitly identified in the callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_context_state_flags(void *param_1)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint32_t uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uintptr_t sp;
  uint8_t *puVar10;
  uint8_t auStack_38 [4];
  uint32_t auStack_10 [2];
  
  puVar10 = auStack_38;
  iVar7 = (int)param_1 + 8;
  iVar4 = menu_item_register(iVar7);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  cVar2 = *(char *)((int)param_1 + 0x41);
  if (cVar2 == '\x02') {
    iVar4 = menu_item_register(iVar7);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
  }
  else if ((cVar2 == '\0') && (*(char *)((int)param_1 + 0x42) == '\0')) {
    iVar4 = menu_item_register(iVar7);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
  }
  else if (cVar2 == '\x01') {
    iVar4 = menu_item_register(iVar7);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
  }
  iVar4 = menu_item_register(iVar7);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  iVar4 = menu_item_register(iVar7);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  if (*(char *)((int)param_1 + 0x42) == '\0') {
    iVar4 = menu_item_register(iVar7);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
  }
  else if (*(char *)((int)param_1 + 0x41) != '\0') {
    iVar4 = menu_item_register(iVar7);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
  }
  iVar4 = menu_item_register(iVar7);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  if (*(char *)((int)param_1 + 0x42) == '\0') {
    iVar4 = menu_item_register(iVar7);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
  }
  else if (*(char *)((int)param_1 + 0x41) == '\0') {
    switch(*(char *)((int)param_1 + 0x42)) {
    case '\x01':
      break;
    case '\x05':
      break;
    case '\t':
      break;
    case '\r':
      break;
    case '\x11':
      break;
    case '\x15':
      break;
    case '\x19':
    }
    iVar4 = menu_item_register(iVar7);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
  }
  iVar4 = menu_item_register(iVar7);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  if (*(char *)((int)param_1 + 0x42) == '\0') {
    iVar4 = lookup_shutter_speed_value(*(uint32_t *)((int)param_1 + 0x28),(uint)*(byte *)((int)param_1 + 0x45));
    uVar9 = (uint)(iVar4 < 1000);
    iVar4 = lookup_shutter_speed_value(*(uint32_t *)((int)param_1 + 0x28),(uint)*(byte *)((int)param_1 + 0x44));
    bVar3 = *(byte *)((int)param_1 + 0x44);
    puVar10[3] = 1;
    render_decimal_digits_to_object((int)param_1,(uint)bVar3,(0xb - ((iVar4 < 1000) + uVar9)) * 0x18 + 0x20 & 0xffff,
                 0x108,puVar10[3]);
    bVar3 = *(byte *)((int)param_1 + 0x45);
    puVar10[3] = 2;
    render_decimal_digits_to_object((int)param_1,(uint)bVar3,(6 - uVar9) * 0x18 + 0x20 & 0xffff,0x108,puVar10[3]);
    iVar8 = (int)param_1 + 8;
    iVar4 = menu_item_register(iVar8);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
    iVar4 = menu_item_register(iVar8);
    iVar5 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,(10 - uVar9) * 0x18 + 0x20 & 0xffff,0x108));
    (((vtbl_entry*)(iVar5))[2].fn)(iVar4 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(auStack_10,2);
    iVar4 = menu_item_register(iVar8);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
  }
  iVar4 = menu_item_register(iVar7);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  bVar3 = *(byte *)((int)param_1 + 0x42);
  if (bVar3 != 0) {
    puVar10[3] = 0;
    render_decimal_digits_to_object((int)param_1,(uint)bVar3,0x80,0xf0,puVar10[3]);
  }
  compute_exposure_timing_params((int)param_1);
  return;
}
