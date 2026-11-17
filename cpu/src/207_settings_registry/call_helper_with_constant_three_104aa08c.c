/* @k10d call_helper_with_constant_three_104aa08c @ 0x104aa08c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls set_bitfield_in_table_entry with param_1, the constant 3, and param_2.
 * summary:
 *   This function is a thin wrapper that forwards its two arguments to
 *   set_bitfield_in_table_entry, inserting the constant value 3 as the second parameter. It
 *   has no other logic or side effects. The specific role of set_bitfield_in_table_entry is
 *   unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_constant_three_104aa08c(uint32_t param_1,uint8_t param_2)

{
  set_bitfield_in_table_entry(param_1,3,param_2);
  return;
}
