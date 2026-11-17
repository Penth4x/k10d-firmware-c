/* @k10d dispatch_virtual_call_with_cleanup @ 0x104d6f00
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object derived from param_1, handling the return value
 *   and performing object construction/destruction.
 * summary:
 *   The function calls several helper functions (write_field_at_offset_0x2370,
 *   add_offset_to_param_104d6ef6) and then performs a virtual call via a vtable pointer at
 *   offset 0x54 of an object pointed to by *(param_1 + 0x2b18). It passes the result of
 *   add_offset_to_param_104d6ef6 and the virtual call result to another function. If the
 *   virtual call returns 0, it calls add_offset_by_flag and another function. Finally, it
 *   constructs a temporary object (cls_105ba0ac), calls
 *   invoke_virtual_slot_on_two_objects_104d8c46 (virtual slot 7 of cls_105ba1b8) with
 *   param_2 and param_1, and then destroys the temporary object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_call_with_cleanup(int param_1,uint32_t param_2)

{
  short sVar1;
  uint32_t uVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_28 [28];
  uint32_t uStack_c;
  
  (*(code *)0x104de094/*ROM*/)();
  write_field_at_offset_0x2370(param_1,8);
  iVar3 = *(int *)(param_1 + 0x2b18);
  sVar1 = *(short *)(iVar3 + 0x50);
  add_offset_to_param_104d6ef6(param_1);
  uVar2 = (*(code *)0x104d7a06/*ROM*/)();
  iVar3 = (**(code **)(iVar3 + 0x54))(sVar1 + param_1,uVar2);
  uVar2 = add_offset_to_param_104d6ef6(param_1);
  (*(code *)0x104d7a0a/*ROM*/)(uVar2,iVar3);
  if (iVar3 == 0) {
    uVar2 = add_offset_by_flag(param_1,0);
    (*(code *)0x104d7eb2/*ROM*/)(uVar2,1);
  }
  cls_105ba0ac_new(auStack_28);
  uStack_c = 0x105ba1d8/*ROM*/;
  invoke_virtual_slot_on_two_objects_104d8c46(auStack_28,param_2,param_1);
  (*(code *)0x104de82c/*ROM*/)(param_2);
  uStack_c = 0x105ba1d8/*ROM*/;
  cls_105ba0ac_delete(auStack_28,0);
  return 1;
}
