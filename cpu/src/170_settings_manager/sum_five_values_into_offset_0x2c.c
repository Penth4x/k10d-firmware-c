/* @k10d sum_five_values_into_offset_0x2c @ 0x1047ee14
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls five helpers, sums their results, stores the total at param_1+0x2c, then calls a
 *   sixth helper.
 * summary:
 *   The function takes a pointer param_1 and invokes five small helper functions
 *   (return_one_constant_1047ee44, check_short_field_at_offset_0x28,
 *   check_short_field_equals_0x20, get_byte_or_default_0x20, shift_struct_field_left_one),
 *   most of which receive param_1 as an argument. It adds the integer results together
 *   (zero-extending the byte result from get_byte_or_default_0x20) and writes the 32-bit
 *   sum to the field at offset 0x2c of the object pointed to by param_1. Finally it calls
 *   invoke_virtual_slot_two_1047ee84 with param_1, likely to finalize or notify. No camera-
 *   specific subsystem is identifiable from the pseudocode or callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void sum_five_values_into_offset_0x2c(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar5;
  int iVar4;
  
  iVar1 = return_one_constant_1047ee44();
  iVar2 = check_short_field_at_offset_0x28((int)param_1);
  iVar3 = check_short_field_equals_0x20((int)param_1);
  bVar5 = get_byte_or_default_0x20((int)param_1);
  iVar4 = shift_struct_field_left_one((int)param_1);
  *(uint *)((int)param_1 + 0x2c) = iVar1 + iVar2 + iVar3 + (uint)bVar5 + iVar4;
  invoke_virtual_slot_two_1047ee84(param_1);
  return;
}
