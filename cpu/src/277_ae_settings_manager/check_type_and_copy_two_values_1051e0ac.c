/* @k10d check_type_and_copy_two_values_1051e0ac @ 0x1051e0ac
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks if a field at offset 2 of param_3 equals 5, and if so, copies two values from
 *   param_3 into param_2.
 * summary:
 *   The function tests whether the short value at offset 2 of the object pointed to by
 *   param_3 is equal to 5. If the condition is true, it calls read_table_entry_by_index
 *   twice with indices 0 and 1, storing the results at offsets 0x34 and 0x38 of param_2. It
 *   returns true if the type check passed, false otherwise. The specific role of
 *   read_table_entry_by_index and the meaning of the value 5 are not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_type_and_copy_two_values_1051e0ac(uint32_t param_1,int param_2,void *param_3)

{
  uint32_t uVar1;
  bool bVar2;
  
  bVar2 = *(short *)((int)param_3 + 2) == 5;
  if (bVar2) {
    uVar1 = read_table_entry_by_index(param_3,0);
    *(uint32_t *)(param_2 + 0x34) = uVar1;
    uVar1 = read_table_entry_by_index(param_3,1);
    *(uint32_t *)(param_2 + 0x38) = uVar1;
  }
  return bVar2;
}
