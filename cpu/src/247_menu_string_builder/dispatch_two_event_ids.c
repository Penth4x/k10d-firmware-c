/* @k10d dispatch_two_event_ids @ 0x104d962a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Calls a helper with two fixed constants and an intermediate value derived from param_3.
 * summary:
 *   Invokes append_string_to_buffer with param_2 and constant 0x105ba514, then computes a
 *   value via add_offset_by_flag and call_helper_with_field_0x20_104d7ef0. Passes this
 *   result to build_and_apply_param_string along with param_2, 1, and in_r7. Finally calls
 *   append_string_to_buffer again with param_2 and constant 0x105ba520. The function
 *   appears to be a virtual method (slot 19) that triggers a sequence of state changes or
 *   event notifications.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_two_event_ids(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t r7_in;
  
  append_string_to_buffer(param_2,0x105ba514/*ROM*/);
  iVar1 = add_offset_by_flag(param_3,0);
  uVar2 = call_helper_with_field_0x20_104d7ef0(iVar1);
  build_and_apply_param_string(param_2,uVar2,1,r7_in);
  append_string_to_buffer(param_2,0x105ba520/*ROM*/);
  return;
}
