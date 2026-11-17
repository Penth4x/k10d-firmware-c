/* @k10d populate_twelve_entry_table @ 0x1039556e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Fills an array of 12 pointers at param_1+8 by deriving each from a base handle via a
 *   sequence of helper calls.
 * summary:
 *   The function calls get_value_from_object and passes the result to
 *   add_offset_to_pointer_104df392. It then obtains a base handle via
 *   return_r4_passthrough_104d800e and adjust_pointer_by_flag. In a loop-like sequence, it
 *   calls add_offset_to_pointer_104d65b6 and read_byte_at_offset_0x88 with specific integer
 *   constants (0, 2, 4, 7, 1, 0xe, 5, 8, 3, 9, 6, 0xd) and stores the results into
 *   consecutive memory locations starting at param_1+8 via
 *   set_object_field_by_index_1039abb0. The specific meaning of the constants and the
 *   subsystem is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_twelve_entry_table(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  uVar2 = return_r4_passthrough_104d800e();
  uVar2 = adjust_pointer_by_flag(uVar2,1);
  iVar1 = (int)param_1 + 8;
  uVar3 = add_offset_to_pointer_104d65b6(__frv_reg_unset(4));
  uVar3 = read_byte_at_offset_0x88(uVar3,0);
  set_object_field_by_index_1039abb0((void *)iVar1,0,uVar3);
  uVar3 = add_offset_to_pointer_104d65b6(uVar2);
  uVar3 = read_byte_at_offset_0x88(uVar3,2);
  set_object_field_by_index_1039abb0((void *)iVar1,1,uVar3);
  uVar3 = add_offset_to_pointer_104d65b6(uVar2);
  uVar3 = read_byte_at_offset_0x88(uVar3,4);
  set_object_field_by_index_1039abb0((void *)iVar1,2,uVar3);
  uVar3 = add_offset_to_pointer_104d65b6(uVar2);
  uVar3 = read_byte_at_offset_0x88(uVar3,7);
  set_object_field_by_index_1039abb0((void *)iVar1,3,uVar3);
  uVar3 = add_offset_to_pointer_104d65b6(uVar2);
  uVar3 = read_byte_at_offset_0x88(uVar3,1);
  set_object_field_by_index_1039abb0((void *)iVar1,4,uVar3);
  uVar3 = add_offset_to_pointer_104d65b6(uVar2);
  uVar3 = read_byte_at_offset_0x88(uVar3,0xe);
  set_object_field_by_index_1039abb0((void *)iVar1,5,uVar3);
  uVar3 = add_offset_to_pointer_104d65b6(uVar2);
  uVar3 = read_byte_at_offset_0x88(uVar3,5);
  set_object_field_by_index_1039abb0((void *)iVar1,6,uVar3);
  uVar3 = add_offset_to_pointer_104d65b6(uVar2);
  uVar3 = read_byte_at_offset_0x88(uVar3,8);
  set_object_field_by_index_1039abb0((void *)iVar1,7,uVar3);
  uVar3 = add_offset_to_pointer_104d65b6(uVar2);
  uVar3 = read_byte_at_offset_0x88(uVar3,3);
  set_object_field_by_index_1039abb0((void *)iVar1,8,uVar3);
  uVar3 = add_offset_to_pointer_104d65b6(uVar2);
  uVar3 = read_byte_at_offset_0x88(uVar3,9);
  set_object_field_by_index_1039abb0((void *)iVar1,9,uVar3);
  uVar3 = add_offset_to_pointer_104d65b6(uVar2);
  uVar3 = read_byte_at_offset_0x88(uVar3,6);
  set_object_field_by_index_1039abb0((void *)iVar1,10,uVar3);
  uVar2 = add_offset_to_pointer_104d65b6(uVar2);
  uVar2 = read_byte_at_offset_0x88(uVar2,0xd);
  set_object_field_by_index_1039abb0((void *)iVar1,0xb,uVar2);
  return;
}
