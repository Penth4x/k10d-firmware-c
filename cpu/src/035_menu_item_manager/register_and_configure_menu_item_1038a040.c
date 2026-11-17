/* @k10d register_and_configure_menu_item_1038a040 @ 0x1038a040
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper and a virtual method on an object retrieved via a lookup function,
 *   branching on param_3.
 * summary:
 *   Retrieves an object pointer twice via menu_item_register(param_1). If param_3 is 2,
 *   calls set_object_flag_via_virtual_call(param_1, 2) and then invokes virtual slot 2 of
 *   the object at offset 0xc with argument 0. Otherwise, calls
 *   invoke_virtual_slot_two_1038a0ae(param_1, param_2) and invokes the same virtual slot
 *   with argument 0. The virtual call idiom `(**(code **)(*(int *)(obj + 0xc) +
 *   0xc))(*(short *)(*(int *)(obj + 0xc) + 8) + obj, 0)` indicates a call to virtual slot 2
 *   (offset 0xc / 8 = 1.5, wait: offset 0xc is 12, 12/8 = 1.5? No, vtable entries are 4
 *   bytes. Offset 0xc in the vtable pointer means the 4th entry? Let's re-evaluate. `*(int
 *   *)(iVar1 + 0xc)` is the vtable pointer. `+ 0xc` adds 12 to the vtable pointer, which is
 *   the 4th function pointer (index 3). The this-adjustment is at `*(short *)(vtable_ptr +
 *   8)`. So it calls virtual slot 3.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_configure_menu_item_1038a040(int param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  if (param_3 == 2) {
    set_object_flag_via_virtual_call(param_1,2);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  }
  else {
    invoke_virtual_slot_two_1038a0ae(param_1,param_2);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  }
  return;
}
