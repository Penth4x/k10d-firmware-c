/* @k10d dispatch_virtual_slot_51_104dd804 @ 0x104dd804
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Executes a sequence of helper calls and a virtual method invocation on an object
 *   pointer.
 * summary:
 *   The function calls append_string_to_buffer with a constant address, invokes
 *   add_offset_to_pointer_104d6882, and then calls a function pointer at 0x104d8ae2. It
 *   passes the result to call_helper_with_field_0x14_104d5460 and finally calls
 *   build_and_apply_param_string with the object pointer and the computed value. It is
 *   called as virtual method slot 51 of class cls_105ba1b8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_51_104dd804(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t r7_in;
  
  append_string_to_buffer(param_2,(char *)0x105baf10/*ROM*/);
  add_offset_to_pointer_104d6882(param_3);
  iVar1 = (*(code *)0x104d8ae2/*ROM*/)();
  uVar2 = call_helper_with_field_0x14_104d5460(iVar1);
  build_and_apply_param_string(param_2,(int *)uVar2,1,(int *)r7_in);
  append_string_to_buffer(param_2,(char *)0x105baf1c/*ROM*/);
  return;
}
