/* @k10d call_helper_and_set_flag_104cf6c8 @ 0x104cf6c8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 240_menu_event_system (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the object and a parameter, then sets byte offset 9 of the object
 *   to 1.
 * summary:
 *   The function takes a pointer param_1 and a 16-bit param_2. It invokes
 *   write_two_bytes_at_offset_0x2c with both arguments, then writes the value 1 to the byte
 *   at offset 9 of the object pointed to by param_1. The role of
 *   write_two_bytes_at_offset_0x2c is unknown, so the specific subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_and_set_flag_104cf6c8(int *param_1,uint16_t param_2)

{
  write_two_bytes_at_offset_0x2c(*param_1,param_2);
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
