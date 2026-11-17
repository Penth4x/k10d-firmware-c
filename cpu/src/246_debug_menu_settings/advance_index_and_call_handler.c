/* @k10d advance_index_and_call_handler @ 0x104d7ca4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Checks a counter at offset 0x148, calls a handler with a computed pointer, and
 *   increments the counter.
 * summary:
 *   The function reads a 32-bit value from param_1 + 0x148. If the value is less than 10,
 *   it calls write_byte_at_offset_104de518 with param_2 and a pointer calculated as param_1
 *   + 8 + (value * 0x20). It then increments the value at param_1 + 0x148. This pattern
 *   suggests iterating through an array of 10 elements (each 0x20 bytes) starting at offset
 *   8 in the object pointed to by param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void advance_index_and_call_handler(int param_1,void *param_2)

{
  if (*(uint *)(param_1 + 0x148) < 10) {
    write_byte_at_offset_104de518(param_2,param_1 + 8 + *(uint *)(param_1 + 0x148) * 0x20);
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
  }
  return;
}
