/* @k10d select_one_of_twelve_slots_1039b56c @ 0x1039b56c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores param_2 at offset 0x38 of the object, resets all twelve slot pointers via
 *   invoke_virtual_slot_two_1039ca9a, then re-arms the slot matching param_2.
 * summary:
 *   The function writes the selector value (param_2) into the object at offset 0x38. It
 *   then calls invoke_virtual_slot_two_1039ca9a with a third argument of 0 for each of the
 *   twelve pointers stored at offsets 0x68 through 0x94, effectively clearing or
 *   deactivating them. Finally, it uses a switch statement on param_2 to identify the
 *   specific offset corresponding to the selected slot and calls
 *   invoke_virtual_slot_two_1039ca9a with a third argument of 1 to activate or set that
 *   specific slot. The role of invoke_virtual_slot_two_1039ca9a and the specific subsystem
 *   (e.g., AE, AF, WB) is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_one_of_twelve_slots_1039b56c(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  *(uint32_t *)((int)param_1 + 0x38) = param_2;
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x68),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x6c),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x70),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x74),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x78),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x7c),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x80),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x84),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x88),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x8c),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x90),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x94),0);
  switch(param_2) {
  case 0:
    iVar1 = 0x68;
    break;
  case 1:
    iVar1 = 0x6c;
    break;
  case 2:
    iVar1 = 0x70;
    break;
  case 3:
    iVar1 = 0x74;
    break;
  case 4:
    iVar1 = 0x78;
    break;
  case 5:
    iVar1 = 0x7c;
    break;
  case 6:
    iVar1 = 0x80;
    break;
  case 7:
    iVar1 = 0x84;
    break;
  case 8:
    iVar1 = 0x88;
    break;
  case 9:
    iVar1 = 0x8c;
    break;
  case 10:
    iVar1 = 0x90;
    break;
  case 0xb:
    iVar1 = 0x94;
    break;
  default:
    goto LAB_1039b682;
  }
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)(iVar1 + (int)param_1),1);
LAB_1039b682:
  return;
}
