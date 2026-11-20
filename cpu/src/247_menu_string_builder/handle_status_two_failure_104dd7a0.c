/* @k10d handle_status_two_failure_104dd7a0 @ 0x104dd7a0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Checks a status code and executes a fallback sequence if it is not equal to 2.
 * summary:
 *   The function calls an indirect function at 0x104d6dbc with param_3 to retrieve a status
 *   value. If the value is not 2, it calls append_string_to_buffer with a constant address,
 *   calls add_offset_to_pointer_104d6882, retrieves a value via an indirect call and
 *   call_subroutine_with_field_104d5a1a, and finally calls build_and_apply_param_string.
 *   The specific subsystem is not identifiable from the provided pseudocode and unknown
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void handle_status_two_failure_104dd7a0(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t r7_in;
  
  iVar1 = (*(code *)0x104d6dbc/*ROM*/)(param_3);
  if (iVar1 != 2) {
    append_string_to_buffer((int *)(param_2),(char *)(0x105baef4/*ROM*/));
    add_offset_to_pointer_104d6882(param_3);
    iVar1 = (*(code *)0x104d8aec/*ROM*/)();
    uVar2 = call_subroutine_with_field_104d5a1a(iVar1);
    build_and_apply_param_string((int *)(param_2),(void *)(uVar2),(int)(1),(void *)(r7_in));
    append_string_to_buffer((int *)(param_2),(char *)(0x105baf00/*ROM*/));
  }
  return;
}
