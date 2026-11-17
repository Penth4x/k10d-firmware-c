/* @k10d dispatch_state_change_event_103a9c3e @ 0x103a9c3e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Reads a state value from an object, conditionally processes it based on a switch, and
 *   triggers a virtual callback.
 * summary:
 *   The function retrieves a state integer from offset 0x28 of the input object via
 *   get_setting_by_mode_flag_104f07f4. It performs a virtual call (slot 2) with argument 0,
 *   then switches on the state value. For cases 0xc-0xe, it calls a sequence of helpers
 *   (get_setting_by_mode_flag_104f0946, get_setting_by_mode_index_104f0e20,
 *   select_and_copy_rodata_entry) and passes the result to glyph_draw. It then makes
 *   another virtual call with argument 1, calls read_setting_by_index with the state, and
 *   conditionally makes a final virtual call if specific status checks
 *   (get_setting_by_index_and_mode, check_setting_0xbb_is_one) do not return specific
 *   values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_change_event_103a9c3e(void *param_1)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  byte *pbVar4;
  void *pvVar5;
  int extraout_r4;
  int iVar6;
  int iVar7;
  
  uVar1 = get_setting_by_mode_flag_104f07f4(*(int *)((int)param_1 + 0x28));
  iVar6 = (int)param_1 + 8;
  iVar2 = menu_item_register(iVar6);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  switch(uVar1) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
  case 10:
  case 0xb:
    break;
  case 0xc:
  case 0xd:
  case 0xe:
    iVar7 = *(int *)((int)param_1 + 0x28);
    iVar2 = get_setting_by_mode_flag_104f0946(iVar7);
    uVar3 = get_setting_by_mode_index_104f0e20(iVar7,iVar2);
    pbVar4 = (byte *)select_and_copy_rodata_entry(*(uint32_t *)((int)param_1 + 0x28),uVar3);
    pvVar5 = (void *)menu_item_register(iVar6);
    glyph_draw(pvVar5,pbVar4);
  }
  iVar2 = menu_item_register(iVar6);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  read_setting_by_index(*(int *)((int)param_1 + 0x28),uVar1);
  if (((extraout_r4 != 7) || (iVar2 = get_setting_by_index_and_mode(*(int *)((int)param_1 + 0x28),uVar1), iVar2 != 7)
      ) && ((iVar2 = check_setting_0xbb_is_one(*(uint32_t *)((int)param_1 + 0x28)), iVar2 != 0 ||
            (iVar2 = get_setting_by_mode_flag_104f07f4(*(int *)((int)param_1 + 0x28)), iVar2 != 0)))) {
    iVar2 = menu_item_register(iVar6);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  return;
}
