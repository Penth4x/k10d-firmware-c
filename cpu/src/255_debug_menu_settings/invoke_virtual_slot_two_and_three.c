/* @k10d invoke_virtual_slot_two_and_three @ 0x104eab86
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 on the object at offset 0xc, then virtual slot 3 on the object at
 *   offset 0x90 with argument 0, returning the first result.
 * summary:
 *   The function first calls initialize_object_and_call_virtual_slot_2 on the pointer at
 *   param_1+8. It then performs a virtual call to slot 2 (vtable offset 0x14) on the object
 *   stored at param_1+0xc, passing the this-adjusted pointer. It subsequently calls virtual
 *   slot 3 (vtable offset 0x1c) on the object at param_1+0x90 with a second argument of 0.
 *   The return value of the first virtual call is returned to the caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_and_three(cls_105c26f0 *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  initialize_object_and_call_virtual_slot_2((void*)(param_1->field_0x8));
  iVar2 = *(int *)param_1->field_0xc;
  uVar1 = (((vtbl_entry*)(iVar2))[2].fn)
                    ((void *)((int)param_1->field_0xc + (int)((vtbl_entry*)(iVar2))[2].adj));
  iVar2 = *(int *)param_1->field_0x90;
  (((vtbl_entry*)(iVar2))[3].fn)((int)param_1->field_0x90 + (int)((vtbl_entry*)(iVar2))[3].adj,0);
  return uVar1;
}
