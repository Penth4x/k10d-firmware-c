/* @k10d write_five_values_to_object @ 0x10532ab0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads five indexed values from param_2 and writes each to a base pointer derived from
 *   param_1.
 * summary:
 *   The function loads a base pointer from *(param_1 + 0x14) + 0x4d0. It then calls
 *   read_table_entry_by_index five times with indices 0 through 4 to retrieve values from
 *   param_2. Each retrieved value is passed to a distinct callee
 *   (store_value_at_offset_four_10436d60 through store_value_at_offset_0x14) along with the
 *   base pointer, suggesting a sequence of five separate write or update operations to a
 *   structure or memory block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_five_values_to_object(int param_1,void *param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar2 = *(uint32_t *)(*(int *)(param_1 + 0x14) + 0x4d0);
  uVar1 = read_table_entry_by_index(param_2,0);
  store_value_at_offset_four_10436d60(uVar2,uVar1);
  uVar1 = read_table_entry_by_index(param_2,1);
  store_value_at_offset_8_10436d66(uVar2,uVar1);
  uVar1 = read_table_entry_by_index(param_2,2);
  store_value_at_offset_0xc_10436d6c(uVar2,uVar1);
  uVar1 = read_table_entry_by_index(param_2,3);
  store_value_at_offset_0x10_10436d72(uVar2,uVar1);
  uVar1 = read_table_entry_by_index(param_2,4);
  store_value_at_offset_0x14(uVar2,uVar1);
  return;
}
