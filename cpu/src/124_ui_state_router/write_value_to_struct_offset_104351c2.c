/* @k10d write_value_to_struct_offset_104351c2 @ 0x104351c2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 124_ui_state_router (unit names are model-proposed)
 * purpose:
 *   Writes a computed value to offset 0x14 of a structure, optionally after calling a
 *   helper.
 * summary:
 *   The function first calls store_value_to_pointer_1043554a with the address of the field
 *   at offset 0x14 and the constant 2. If param_3 is non-zero, it calls
 *   return_zero_stub_104351ec with param_1 and param_3, then writes the result to the same
 *   field via write_field_at_offset_four_1043554e. It always returns 1. The specific role
 *   of the structure and the helper functions is not determinable from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_value_to_struct_offset_104351c2(uint32_t param_1,void *param_2,int param_3)

{
  uint32_t uVar1;
  
  store_value_to_pointer_1043554a((int)param_2 + 0x14,2);
  if (param_3 != 0) {
    uVar1 = return_zero_stub_104351ec(param_1,param_3);
    write_field_at_offset_four_1043554e((int)param_2 + 0x14,uVar1);
  }
  return 1;
}
