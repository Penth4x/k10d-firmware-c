/* @k10d dispatch_state_transition_104d95b4 @ 0x104d95b4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Checks a state via a function pointer and dispatches to different handlers based on the
 *   result.
 * summary:
 *   The function calls a function pointer at 0x104d68a6 with param_3 to determine a state.
 *   If the state is 0, it calls append_string_to_buffer with one constant; otherwise, it
 *   calls append_string_to_buffer with a different constant and then calls
 *   dispatch_two_event_ids. It then calls dispatch_virtual_call_by_index_104d967a and
 *   repeats the state check to call append_string_to_buffer with one of two final
 *   constants. The specific roles of the callees and the state variable are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_104d95b4(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = (*(code *)0x104d68a6/*ROM*/)(param_3);
  if (iVar1 == 0) {
    append_string_to_buffer((int *)(param_2),(char *)(0x105ba4e4/*ROM*/));
  }
  else {
    append_string_to_buffer((int *)(param_2),(char *)(0x105ba4f0/*ROM*/));
    dispatch_two_event_ids(param_1,param_2,param_3);
  }
  dispatch_virtual_call_by_index_104d967a(param_1,param_2,param_3);
  iVar1 = (*(code *)0x104d68a6/*ROM*/)(param_3);
  if (iVar1 == 0) {
    uVar2 = 0x105ba4fc/*ROM*/;
  }
  else {
    uVar2 = 0x105ba508/*ROM*/;
  }
  append_string_to_buffer((int *)(param_2),(char *)(uVar2));
  return;
}
