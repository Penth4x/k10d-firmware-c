/* @k10d dispatch_virtual_slot_51_104dd85a @ 0x104dd85a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Executes a sequence of helper calls and a function pointer invocation as part of a
 *   virtual method.
 * summary:
 *   The function calls append_string_to_buffer with a constant address, then
 *   add_offset_to_pointer_104d6882 with param_3. It invokes a function pointer at
 *   0x104d8ad8, passes the result to call_helper_with_field_0x14_104d5c88, and finally
 *   calls build_and_apply_param_string with the intermediate result. It concludes by
 *   calling append_string_to_buffer again with a different constant address. The caller
 *   identifies this as virtual method slot 51 of class cls_105ba1b8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_51_104dd85a(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t r7_in;
  
  append_string_to_buffer(param_2,(void *)0x105baf28/*ROM*/);
  add_offset_to_pointer_104d6882(param_3);
  iVar1 = (*(code *)0x104d8ad8/*ROM*/)();
  uVar2 = call_helper_with_field_0x14_104d5c88(iVar1);
  build_and_apply_param_string(param_2,(void *)uVar2,1,(void *)r7_in);
  append_string_to_buffer(param_2,(void *)0x105baf34/*ROM*/);
  return;
}
