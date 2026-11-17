/* @k10d handle_state_two_event @ 0x104dd906
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Checks a state value and if it equals 2, performs a sequence of operations on param_2
 *   and param_3.
 * summary:
 *   The function calls an indirect function at 0x104d6dbc with param_3 to get a state
 *   value. If the value is 2, it calls append_string_to_buffer with param_2 and a constant
 *   address, then add_offset_to_pointer_104d6882 with param_3. It then calls an indirect
 *   function at 0x104d8b20, passes the result to call_subroutine_with_field_9c, and finally
 *   calls build_and_apply_param_string with param_2, the result, 1, and in_r7. It ends by
 *   calling append_string_to_buffer again with a different constant address. The specific
 *   roles of the callees are unknown, so the exact camera subsystem is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void handle_state_two_event(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t r7_in;
  
  iVar1 = (*(code *)0x104d6dbc/*ROM*/)(param_3);
  if (iVar1 == 2) {
    append_string_to_buffer(param_2,(void *)0x105baf60/*ROM*/);
    add_offset_to_pointer_104d6882(param_3);
    iVar1 = (*(code *)0x104d8b20/*ROM*/)();
    uVar2 = call_subroutine_with_field_9c(iVar1);
    build_and_apply_param_string(param_2,(void *)uVar2,1,(void *)r7_in);
    append_string_to_buffer(param_2,(void *)0x105baf6c/*ROM*/);
  }
  return;
}
