/* @k10d reset_and_select_channel_1039a462 @ 0x1039a462
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resets seven sub-objects of a container and then activates one selected by index.
 * summary:
 *   The function calls invoke_virtual_slot_two_1039ca9a seven times with a third argument
 *   of 0, passing pointers to fields at offsets 0x24 through 0x3c of the object in param_1.
 *   It then uses param_2 to select one of the first six fields (or the sixth field for case
 *   5) and calls invoke_virtual_slot_two_1039ca9a again with a third argument of 1.
 *   Finally, it calls invoke_virtual_slot_two_1039ca9a on the field at offset 0x3c with a
 *   third argument of 1 or 0 depending on the case. The specific role of
 *   invoke_virtual_slot_two_1039ca9a and the object structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_and_select_channel_1039a462(void *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x24),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x28),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x2c),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x30),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x34),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x38),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x3c),0);
  switch(param_2) {
  case 0:
    iVar2 = 0x24;
    break;
  case 1:
    iVar2 = 0x28;
    break;
  case 2:
    iVar2 = 0x2c;
    break;
  case 3:
    iVar2 = 0x30;
    break;
  case 4:
    iVar2 = 0x34;
    break;
  case 5:
    invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x38),1);
    uVar1 = 0;
    goto LAB_1039a51e;
  default:
    goto LAB_1039a52c;
  }
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)(iVar2 + (int)param_1),1);
  uVar1 = 1;
LAB_1039a51e:
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x3c),uVar1);
LAB_1039a52c:
  return;
}
