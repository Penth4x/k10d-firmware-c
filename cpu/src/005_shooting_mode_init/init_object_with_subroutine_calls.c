/* @k10d init_object_with_subroutine_calls @ 0x10365c66
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 005_shooting_mode_init (unit names are model-proposed)
 * purpose:
 *   Zeroes two fields in a struct and calls four helper functions to initialize or
 *   configure the object.
 * summary:
 *   The function takes a pointer to a data structure, sets offsets 0x14 and 0x68 to zero,
 *   and then invokes four callees. It passes a pointer to offset 0x18 and a byte from
 *   offset 0x80 to register_ten_menu_items_1037bee4, calls
 *   call_helper_on_struct_field_1036c46c with no arguments, calls
 *   register_two_menu_items_1037bc0e with the offset 0x18 pointer, and finally calls
 *   call_helper_on_struct_field_1036c41a with the base pointer, the offset 0x18 pointer,
 *   and the constant 1. The specific roles of the callees are unknown, but the pattern
 *   suggests an initialization or setup routine for a complex object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_subroutine_calls(void *param_1)

{
  cls_10558b34 *pcVar1;
  
  *(uint32_t *)((int)param_1 + 0x68) = 0;
  *(uint32_t *)((int)param_1 + 0x14) = 0;
  pcVar1 = (cls_10558b34 *)((int)param_1 + 0x18);
  register_ten_menu_items_1037bee4((int)pcVar1,(uint)*(byte *)((int)param_1 + 0x80));
  call_helper_on_struct_field_1036c46c();
  register_two_menu_items_1037bc0e(pcVar1);
  call_helper_on_struct_field_1036c41a(param_1,pcVar1,1);
  return;
}
