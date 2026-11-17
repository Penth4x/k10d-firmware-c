/* @k10d activate_object_list_items @ 0x104943d2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on the object, and if it returns non-zero, iterates a linked
 *   list calling a virtual method on each element.
 * summary:
 *   The function performs a virtual call on the object at param_1 using vtable offset 0x7c.
 *   If the result is non-zero, it iterates through a list of pointers stored between
 *   offsets 0x18 and 0x1c of the object. For each item in the list, it performs another
 *   virtual call using the item's own vtable at offset 0xc. Finally, it calls
 *   invoke_virtual_slot_3_on_member_104946a2 and sets a flag at offset 9 of the object to
 *   1. The specific camera subsystem role is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void activate_object_list_items(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x7c))
                    (*(short *)(*(int *)(param_1 + 0xc) + 0x78) + param_1);
  if (iVar1 != 0) {
    piVar2 = *(int **)(param_1 + 0x18);
    if (piVar2 != *(int **)(param_1 + 0x1c)) {
      do {
        iVar1 = *(int *)(*piVar2 + 0xc);
        (**(code **)(iVar1 + 0xc))(*piVar2 + (int)*(short *)(iVar1 + 8),1);
        piVar2 = piVar2 + 1;
      } while (piVar2 != *(int **)(param_1 + 0x1c));
    }
    invoke_virtual_slot_3_on_member_104946a2(param_1);
    *(uint8_t *)(param_1 + 9) = 1;
  }
  return;
}
