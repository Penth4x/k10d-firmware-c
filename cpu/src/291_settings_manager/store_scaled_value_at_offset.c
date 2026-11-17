/* @k10d store_scaled_value_at_offset @ 0x1053212a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores the result of read_table_entry_by_index divided by 100 into a field at offset
 *   0x508 of a struct.
 * summary:
 *   The function reads a pointer from offset 0x14 of the first parameter. It calls
 *   read_table_entry_by_index with the second parameter and 0, then divides the result by
 *   100 and writes it to offset 0x508 of the struct pointed to by the first parameter's
 *   field. The specific camera subsystem is not identifiable from the provided code and
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_scaled_value_at_offset(int param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  uVar1 = read_table_entry_by_index(param_2,0);
  *(uint *)(iVar2 + 0x508) = uVar1 / 100;
  return;
}
