/* @k10d reset_and_select_channel_10399eb0 @ 0x10399eb0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores a selector in the object, resets all 11 channel pointers via a helper, then re-
 *   enables the selected one.
 * summary:
 *   Writes param_2 to offset 0x24 of the object. Calls invoke_virtual_slot_two_1039ca9a
 *   with 0 for each of the 11 pointers at offsets 0x30-0x58. Then uses a switch on param_2
 *   to select one of those offsets and calls invoke_virtual_slot_two_1039ca9a with 1 for
 *   that specific pointer. The caller is call_helper_with_offset_eight_10393de4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_and_select_channel_10399eb0(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  *(uint32_t *)((int)param_1 + 0x24) = param_2;
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x30),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x34),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x38),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x3c),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x40),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x44),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x48),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x4c),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x50),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x54),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x58),0);
  switch(param_2) {
  case 0:
    iVar1 = 0x30;
    break;
  case 1:
    iVar1 = 0x34;
    break;
  case 2:
    iVar1 = 0x38;
    break;
  case 3:
    iVar1 = 0x3c;
    break;
  case 4:
    iVar1 = 0x40;
    break;
  case 5:
    iVar1 = 0x44;
    break;
  case 6:
    iVar1 = 0x48;
    break;
  case 7:
    iVar1 = 0x4c;
    break;
  case 8:
    iVar1 = 0x50;
    break;
  case 9:
    iVar1 = 0x54;
    break;
  case 10:
    iVar1 = 0x58;
    break;
  default:
    goto LAB_10399fb2;
  }
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)(iVar1 + (int)param_1),1);
LAB_10399fb2:
  return;
}
