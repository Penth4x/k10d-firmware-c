/* @k10d call_subobject_slot1_then_parent_slot1 @ 0x10494996
 * name: model (proposed by the local model from the decompile, confidence 0.92)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 1 on a sub-object at offset 0x48, then calls the parent class's
 *   virtual slot 1.
 * summary:
 *   Reads a pointer from param_1+0x48, dereferences its vtable to get slot 1 (offset 0xc),
 *   and calls it with a this-adjustment from the vtable. Then calls
 *   notify_range_end_to_observers, which is virtual slot 1 of the parent class
 *   cls_105b48dc. This is a standard C++ virtual method override that delegates to a sub-
 *   object before calling the base implementation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subobject_slot1_then_parent_slot1(int param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0xc);
  (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x48) + (int)*(short *)(iVar1 + 8));
  notify_range_end_to_observers(param_1,param_2);
  return;
}
