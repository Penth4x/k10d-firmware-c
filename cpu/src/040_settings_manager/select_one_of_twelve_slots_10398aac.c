/* @k10d select_one_of_twelve_slots_10398aac @ 0x10398aac
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores param_2 at offset 0x24, resets twelve pointers via
 *   invoke_virtual_slot_two_1039ca9a, then re-sets the one selected by param_2.
 * summary:
 *   The function writes param_2 into the object at offset 0x24. It then calls
 *   invoke_virtual_slot_two_1039ca9a with a third argument of 0 for twelve pointer fields
 *   (offsets 0x9c through 0xc4 and 0xc8), effectively clearing or deactivating them.
 *   Finally, it uses a switch on param_2 to call invoke_virtual_slot_two_1039ca9a with a
 *   third argument of 1 for the single field corresponding to the selected index,
 *   activating it. The role of invoke_virtual_slot_two_1039ca9a and the specific subsystem
 *   (e.g., metering, AF) is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_one_of_twelve_slots_10398aac(int param_1,uint param_2)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x24) = param_2;
  invoke_virtual_slot_two_1039ca9a((void *)param_1,*(int *)(param_1 + 0x9c),0);
  invoke_virtual_slot_two_1039ca9a((void *)param_1,*(int *)(param_1 + 0xa0),0);
  invoke_virtual_slot_two_1039ca9a((void *)param_1,*(int *)(param_1 + 0xa4),0);
  invoke_virtual_slot_two_1039ca9a((void *)param_1,*(int *)(param_1 + 0xa8),0);
  invoke_virtual_slot_two_1039ca9a((void *)param_1,*(int *)(param_1 + 0xac),0);
  invoke_virtual_slot_two_1039ca9a((void *)param_1,*(int *)(param_1 + 0xb0),0);
  invoke_virtual_slot_two_1039ca9a((void *)param_1,*(int *)(param_1 + 0xb4),0);
  invoke_virtual_slot_two_1039ca9a((void *)param_1,*(int *)(param_1 + 0xb8),0);
  invoke_virtual_slot_two_1039ca9a((void *)param_1,*(int *)(param_1 + 0xbc),0);
  invoke_virtual_slot_two_1039ca9a((void *)param_1,*(int *)(param_1 + 0xc0),0);
  invoke_virtual_slot_two_1039ca9a((void *)param_1,*(int *)(param_1 + 0xc4),0);
  invoke_virtual_slot_two_1039ca9a((void *)param_1,*(int *)(param_1 + 200),0);
  switch(param_2) {
  case 0:
    iVar1 = 0x9c;
    break;
  case 1:
    iVar1 = 0xa0;
    break;
  case 2:
    iVar1 = 0xa4;
    break;
  case 3:
    iVar1 = 0xa8;
    break;
  case 4:
    iVar1 = 0xac;
    break;
  case 5:
    iVar1 = 0xb0;
    break;
  case 6:
    iVar1 = 0xb4;
    break;
  case 7:
    iVar1 = 0xb8;
    break;
  case 8:
    iVar1 = 0xbc;
    break;
  case 9:
    iVar1 = 0xc0;
    break;
  case 10:
    iVar1 = 0xc4;
    break;
  case 0xb:
    iVar1 = 200;
    break;
  default:
    goto LAB_10398bc2;
  }
  invoke_virtual_slot_two_1039ca9a((void *)param_1,*(int *)(iVar1 + param_1),1);
LAB_10398bc2:
  return;
}
