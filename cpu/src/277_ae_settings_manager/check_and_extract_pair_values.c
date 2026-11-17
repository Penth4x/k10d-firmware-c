/* @k10d check_and_extract_pair_values @ 0x1051e182
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks if a field in param_3 equals 10 and if so, extracts two values via a callee into
 *   param_2.
 * summary:
 *   The function tests if the short value at offset 2 of param_3 is 10. If true, it sets a
 *   flag at offset 0x3c of param_2 to 1 and calls read_table_entry_by_index twice with
 *   indices 0 and 1, storing the results at offsets 0x40 and 0x44 of param_2. It returns
 *   the result of the initial check.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_extract_pair_values(uint32_t param_1,int param_2,void *param_3)

{
  uint32_t uVar1;
  bool bVar2;
  
  bVar2 = *(short *)((int)param_3 + 2) == 10;
  if (bVar2) {
    *(uint32_t *)(param_2 + 0x3c) = 1;
    uVar1 = read_table_entry_by_index(param_3,0);
    *(uint32_t *)(param_2 + 0x40) = uVar1;
    uVar1 = read_table_entry_by_index(param_3,1);
    *(uint32_t *)(param_2 + 0x44) = uVar1;
  }
  return bVar2;
}
