/* @k10d invoke_virtual_slot_5_104949f6 @ 0x104949f6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 5 of an object's vtable and sets a flag byte at offset 9.
 * summary:
 *   The function dereferences a pointer at offset 0x20 of the object pointed to by param_1
 *   to get a sub-object. It then performs a virtual call to slot 5 (offset 0x2c) of that
 *   sub-object, passing the adjusted this pointer and param_2. Finally, it sets the byte at
 *   offset 9 of the original object to 1. No specific camera subsystem behavior is evident
 *   from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_5_104949f6(cls_105b989c *param_1,uint16_t param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1->field_0x0 + 0x20);
  (((vtbl_entry*)(iVar1))[5].fn)((int)param_1->field_0x0 + (int)((vtbl_entry*)(iVar1))[5].adj,param_2);
  param_1->field_0x9 = 1;
  return;
}
