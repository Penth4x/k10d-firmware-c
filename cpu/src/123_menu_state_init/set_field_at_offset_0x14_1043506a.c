/* @k10d set_field_at_offset_0x14_1043506a @ 0x1043506a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 123_menu_state_init (unit names are model-proposed)
 * purpose:
 *   Writes a value to the field at offset 0x14 of a structure, optionally computing it from
 *   two parameters.
 * summary:
 *   The function first calls store_value_to_pointer_1043554a with the address of the field
 *   at offset 0x14 (param_2 + 0x14) and 0, likely clearing or initializing it. If param_3
 *   is non-zero, it calls dispatch_param_two_recursive with param_1 and param_3, then
 *   stores the result into that same field via write_field_at_offset_four_1043554e. It
 *   always returns 1. The specific roles of the callees and the data structures are
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_field_at_offset_0x14_1043506a(uint32_t param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  
  store_value_to_pointer_1043554a((uint32_t *)(param_2 + 0x14),(uint32_t)(0));
  if (param_3 != 0) {
    uVar1 = dispatch_param_two_recursive(param_1,param_3);
    write_field_at_offset_four_1043554e(param_2 + 0x14,uVar1);
  }
  return 1;
}
