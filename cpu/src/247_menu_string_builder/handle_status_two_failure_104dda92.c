/* @k10d handle_status_two_failure_104dda92 @ 0x104dda92
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Checks a status code and executes a cleanup sequence if it is not equal to 2.
 * summary:
 *   Calls an unknown function at 0x104d6dbc with param_3 to retrieve a status value. If the
 *   value is not 2, it calls append_string_to_buffer with a constant pointer, calls
 *   add_offset_to_pointer_104d6882, retrieves a value from 0x104d8aca, and calls
 *   build_and_apply_param_string with that value and in_r7. Finally, it calls
 *   append_string_to_buffer again with a different constant pointer. The specific subsystem
 *   is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void handle_status_two_failure_104dda92(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t r7_in;
  
  iVar1 = (*(code *)0x104d6dbc/*ROM*/)(param_3);
  if (iVar1 != 2) {
    append_string_to_buffer((int *)(param_2),(char *)(0x105bafc0/*ROM*/));
    add_offset_to_pointer_104d6882(param_3);
    uVar2 = (*(code *)0x104d8aca/*ROM*/)();
    build_and_apply_param_string((int *)(param_2),(void *)(uVar2),(int)(0),(void *)(r7_in));
    append_string_to_buffer((int *)(param_2),(char *)(0x105bafcc/*ROM*/));
  }
  return;
}
