/* @k10d select_one_of_three_slots @ 0x1039b796
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores param_2 at offset 0x44 of param_1, then calls invoke_virtual_slot_two_1039ca9a
 *   with 0 for all three pointers at 0x98/0x9c/0xa0, then calls it with 1 for the pointer
 *   selected by param_2.
 * summary:
 *   The function writes the integer param_2 into the object at offset 0x44. It then invokes
 *   the single callee invoke_virtual_slot_two_1039ca9a four times: first with the values
 *   stored at offsets 0x98, 0x9c, and 0xa0 of param_1 and a trailing 0, and finally with
 *   the value at the offset determined by param_2 (0x98 for 0, 0x9c for 1, 0xa0 for 2) and
 *   a trailing 1. If param_2 is not 0, 1, or 2, the function returns after the three zero-
 *   calls. The role of invoke_virtual_slot_two_1039ca9a and the object layout are unknown,
 *   so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_one_of_three_slots(void *param_1,int param_2)

{
  int iVar1;
  
  *(int *)((int)param_1 + 0x44) = param_2;
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x98),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x9c),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0xa0),0);
  if (param_2 == 0) {
    iVar1 = 0x98;
  }
  else if (param_2 == 1) {
    iVar1 = 0x9c;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    iVar1 = 0xa0;
  }
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)(iVar1 + (int)param_1),1);
  return;
}
