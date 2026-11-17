/* @k10d copy_four_values_to_struct @ 0x103934f4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Extracts four values from a source object and writes them into consecutive fields of a
 *   destination struct.
 * summary:
 *   The function calls add_offset_to_pointer_104d65b6 and map_mode_index_to_flag_1039367e
 *   to obtain two intermediate values, which are combined via find_entry_by_key_in_table.
 *   It then uses read_byte_from_struct_offset_104d5b30 to extract four distinct values
 *   (indexed 0, 3, 2, 1) from the combined result and writes them to offsets 0, 4, 8, and
 *   12 of the structure pointed to by param_1 using set_object_field_by_index_10398bf2. The
 *   specific subsystem is not identifiable from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_values_to_struct(void *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  void *pvVar3;
  
  uVar1 = add_offset_to_pointer_104d65b6(param_2);
  uVar2 = map_mode_index_to_flag_1039367e(param_1);
  uVar1 = find_entry_by_key_in_table(uVar1,uVar2);
  pvVar3 = (void *)((int)param_1 + 8);
  uVar2 = read_byte_from_struct_offset_104d5b30(uVar1,0);
  set_object_field_by_index_10398bf2(pvVar3,0,uVar2);
  uVar2 = read_byte_from_struct_offset_104d5b30(uVar1,3);
  set_object_field_by_index_10398bf2(pvVar3,1,uVar2);
  uVar2 = read_byte_from_struct_offset_104d5b30(uVar1,2);
  set_object_field_by_index_10398bf2(pvVar3,2,uVar2);
  uVar1 = read_byte_from_struct_offset_104d5b30(uVar1,1);
  set_object_field_by_index_10398bf2(pvVar3,3,uVar1);
  return;
}
