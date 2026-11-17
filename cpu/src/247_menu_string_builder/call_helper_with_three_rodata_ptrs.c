/* @k10d call_helper_with_three_rodata_ptrs @ 0x104dc230
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper three times with three consecutive ROM data pointers.
 * summary:
 *   The function takes an object pointer (param_2) and an unused first argument (param_1).
 *   It calls append_string_to_buffer three times, passing param_2 and three distinct ROM
 *   addresses (0x105babe8, 0x105babf4, 0x105bac18) as the second argument. The helper's
 *   role is unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_three_rodata_ptrs(uint32_t param_1,int *param_2)

{
  append_string_to_buffer(param_2,(void *)0x105babe8/*ROM*/);
  append_string_to_buffer(param_2,(void *)0x105babf4/*ROM*/);
  append_string_to_buffer(param_2,(void *)0x105bac18/*ROM*/);
  return;
}
