/* @k10d append_ten_entries_to_list @ 0x104da07e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Appends ten items to a list by calling a helper with fixed addresses and three computed
 *   values.
 * summary:
 *   The function calls append_string_to_buffer ten times, passing param_2 and a mix of
 *   fixed ROM addresses (0x105ba67c..0x105ba72c) and values returned from three indirect
 *   function pointers. It also calls adjust_pointer_by_offset with param_3 and 0 three
 *   times, likely resetting a state or counter before each computed value is appended. The
 *   pattern suggests building a list or queue of ten specific items, possibly for a UI menu
 *   or event sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void append_ten_entries_to_list(uint32_t param_1,int *param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  append_string_to_buffer(param_2,(void *)0x105ba67c/*ROM*/);
  append_string_to_buffer(param_2,(void *)0x105ba698/*ROM*/);
  append_string_to_buffer(param_2,(void *)0x105ba6b8/*ROM*/);
  adjust_pointer_by_offset(param_3,0);
  uVar1 = (*(code *)0x104d7d1a/*ROM*/)();
  append_string_to_buffer(param_2,(void *)uVar1);
  append_string_to_buffer(param_2,(void *)0x105ba6c8/*ROM*/);
  append_string_to_buffer(param_2,(void *)0x105ba6d8/*ROM*/);
  adjust_pointer_by_offset(param_3,0);
  uVar1 = (*(code *)0x104d7d4c/*ROM*/)();
  append_string_to_buffer(param_2,(void *)uVar1);
  append_string_to_buffer(param_2,(void *)0x105ba6f0/*ROM*/);
  append_string_to_buffer(param_2,(void *)0x105ba70c/*ROM*/);
  adjust_pointer_by_offset(param_3,0);
  uVar1 = (*(code *)0x104d7d7e/*ROM*/)();
  append_string_to_buffer(param_2,(void *)uVar1);
  append_string_to_buffer(param_2,(void *)0x105ba71c/*ROM*/);
  append_string_to_buffer(param_2,(void *)0x105ba72c/*ROM*/);
  return;
}
