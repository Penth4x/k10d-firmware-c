/* @k10d dispatch_virtual_slot_51_104dd96e @ 0x104dd96e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Executes a sequence of helper calls and a function pointer invocation as part of a
 *   virtual method dispatch.
 * summary:
 *   The function calls append_string_to_buffer with a constant address, then
 *   add_offset_to_pointer_104d6882 with param_3. It invokes a function pointer at
 *   0x104d8b22, passes the result to call_subroutine_with_field_104d5e9a, and finally calls
 *   build_and_apply_param_string with the processed value. It concludes by calling
 *   append_string_to_buffer again with a different constant address. The caller indicates
 *   this is virtual method slot 51 of class cls_105ba1b8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_51_104dd96e(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t r7_in;
  
  append_string_to_buffer(param_2,(void *)0x105baf7c/*ROM*/);
  add_offset_to_pointer_104d6882(param_3);
  iVar1 = (*(code *)0x104d8b22/*ROM*/)();
  uVar2 = call_subroutine_with_field_104d5e9a(iVar1);
  build_and_apply_param_string(param_2,(void *)uVar2,1,(void *)r7_in);
  append_string_to_buffer(param_2,(void *)0x105baf88/*ROM*/);
  return;
}
