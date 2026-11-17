/* @k10d copy_three_fields_to_offset @ 0x10393606
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes a value from two parameters and writes three derived fields into a struct at
 *   offset 8.
 * summary:
 *   The function calls add_offset_to_pointer_104d65b6(param_2) and
 *   map_mode_index_to_flag_1039367e(param_1), then combines the results via
 *   find_entry_in_fixed_table. It then calls read_byte_at_offset_104d5d8e three times with
 *   indices 0, 1, and 2, passing each result to set_object_field_by_index_10398c82 along
 *   with the corresponding index and a base pointer offset by 8. This pattern suggests
 *   extracting three components from a computed value and storing them into a structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_three_fields_to_offset(void *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  
  uVar1 = add_offset_to_pointer_104d65b6(param_2);
  uVar2 = map_mode_index_to_flag_1039367e(param_1);
  uVar1 = find_entry_in_fixed_table(uVar1,uVar2);
  iVar3 = (int)param_1 + 8;
  uVar2 = read_byte_at_offset_104d5d8e(uVar1,0);
  set_object_field_by_index_10398c82((void *)iVar3,0,uVar2);
  uVar2 = read_byte_at_offset_104d5d8e(uVar1,1);
  set_object_field_by_index_10398c82((void *)iVar3,1,uVar2);
  uVar1 = read_byte_at_offset_104d5d8e(uVar1,2);
  set_object_field_by_index_10398c82((void *)iVar3,2,uVar1);
  return;
}
