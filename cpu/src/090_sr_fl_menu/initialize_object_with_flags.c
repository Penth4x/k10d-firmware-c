/* @k10d initialize_object_with_flags @ 0x10406f96
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Initializes a C++ object by setting flags, calling virtual constructors, and
 *   configuring internal state.
 * summary:
 *   The function clears specific bytes in the object, stores a pointer to a global context,
 *   and sets boolean flags based on param_2. It invokes a virtual method if a specific byte
 *   is zero, then calls several helper functions to initialize sub-objects and compute
 *   values stored in the object's fields. It performs conditional logic involving virtual
 *   calls and data copying before finalizing the initialization with additional helper
 *   calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_with_flags(int *param_1,uint param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  uint8_t extraout_r4;
  byte *pbVar4;
  void *pvVar5;
  int *piVar6;
  
  *(uint8_t *)((int)param_1 + 0xbd) = 0;
  *(uint8_t *)((int)param_1 + 0xbe) = 0;
  iVar1 = get_or_create_singleton_object_1050b118();
  *(int **)(iVar1 + 0x58) = param_1 + 0x10;
  *(bool *)((int)param_1 + 0xba) = (param_2 & 1) != 0;
  *(bool *)((int)param_1 + 0xbb) = (param_2 & 0x10) != 0;
  if (*(char *)(param_1 + 1) == '\0') {
    (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1,0);
  }
  compute_and_send_two_offsets_1040848e(param_1);
  piVar6 = param_1 + 2;
  call_helper_on_fetched_object(piVar6,0x10);
  call_helper_on_fetched_object(piVar6,0xf);
  call_helper_on_fetched_object(piVar6,0xd);
  call_helper_on_fetched_object(piVar6,0xe);
  uVar2 = get_setting_by_mode_flag_104f07f4(param_1[10]);
  *(char *)(param_1 + 0x15) = (char)uVar2;
  uVar3 = check_object_property_43(param_1[10]);
  *(char *)(param_1 + 0x2f) = (char)uVar3;
  read_setting_by_index(param_1[10],(uint)*(byte *)(param_1 + 0x15));
  *(uint8_t *)((int)param_1 + 0x57) = extraout_r4;
  uVar2 = get_setting_by_index_and_mode(param_1[10],(uint)*(byte *)(param_1 + 0x15));
  *(char *)(param_1 + 0x16) = (char)uVar2;
  *(byte *)((int)param_1 + 0x55) = *(byte *)((int)param_1 + 0x57);
  *(char *)((int)param_1 + 0x56) = (char)uVar2;
  set_mode_index_and_dispatch_10407a52(param_1,(uint)*(byte *)((int)param_1 + 0x57));
  set_mode_index_and_dispatch_10407c62(param_1,(uint)*(byte *)(param_1 + 0x16));
  iVar1 = menu_item_register((int)piVar6);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = check_mode_byte_is_special(param_1);
  if (iVar1 != 0) {
    iVar1 = menu_item_register((int)piVar6);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    uVar2 = get_setting_by_mode_flag_104f0946(param_1[10]);
    *(char *)((int)param_1 + 0x5a) = (char)uVar2;
    uVar2 = get_setting_0xc3(param_1[10]);
    *(char *)((int)param_1 + 0x59) = (char)uVar2;
    uVar2 = get_setting_by_mode_index_104f0e20(param_1[10],(uint)*(byte *)((int)param_1 + 0x5a));
    *(char *)((int)param_1 + 0x5b) = (char)uVar2;
    *(char *)(param_1 + 0x17) = (char)uVar2;
    pbVar4 = (byte *)select_and_copy_rodata_entry(param_1[10],uVar2);
    if (*(char *)((int)param_1 + 0x5b) == 'X') {
      iVar1 = menu_item_register((int)piVar6);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      iVar1 = menu_item_register((int)piVar6);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    }
    else {
      iVar1 = menu_item_register((int)piVar6);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
      pvVar5 = (void *)menu_item_register((int)piVar6);
      glyph_draw(pvVar5,pbVar4);
      iVar1 = menu_item_register((int)piVar6);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
  }
  configure_menu_items_by_mode(param_1);
  update_viewfinder_overlay(param_1);
  if (((param_2 & 2) == 0) || ((param_2 & 8) == 0)) {
    iVar1 = menu_item_register((int)piVar6);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  else {
    iVar1 = menu_item_register((int)piVar6);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  iVar1 = *(int *)param_1[0xb];
  (**(code **)(iVar1 + 0x14))(param_1[0xb] + (int)*(short *)(iVar1 + 0x10),0x1120075,0);
  dispatch_event_to_object_10492252(piVar6,param_1);
  request_ui_sync_and_set_flag(piVar6);
  request_ui_sync_with_flag_10491f5c(piVar6,1);
  iVar1 = *(int *)param_1[0xb];
  (**(code **)(iVar1 + 0x14))(param_1[0xb] + (int)*(short *)(iVar1 + 0x10),0x1120064,0);
  return;
}
