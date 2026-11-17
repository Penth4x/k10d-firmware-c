/* @k10d check_object_type_and_query @ 0x1051deb6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks if a field in param_3 equals 4 and if so calls a helper to get a value, storing
 *   it in param_2.
 * summary:
 *   The function reads a short integer at offset 2 of the object pointed to by param_3. If
 *   this value is 4, it calls read_table_entry_by_index with param_3 and 0 to retrieve an
 *   integer. This result (or 0 if the check failed) is written to offset 0x18 of the memory
 *   location pointed to by param_2. The function returns true if the retrieved value is
 *   non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_object_type_and_query(uint32_t param_1,int param_2,void *param_3)

{
  int iVar1;
  
  if (*(short *)((int)param_3 + 2) == 4) {
    iVar1 = read_table_entry_by_index(param_3,0);
  }
  else {
    iVar1 = 0;
  }
  *(int *)(param_2 + 0x18) = iVar1;
  return iVar1 != 0;
}
