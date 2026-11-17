/* @k10d dispatch_param_update_by_type @ 0x1051a5e2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Routes parameter updates to 16-bit or 32-bit setter functions based on a type field in
 *   param_2.
 * summary:
 *   Checks the short value at offset 2 of param_2. If it is 3, calls
 *   write_word_to_dynamic_array twice with 16-bit values read from offsets 0x10 and 0x14 of
 *   the pointer at param_1+0x5c. If it is 4, calls write_to_dynamic_array twice with 32-bit
 *   values from the same locations. The specific subsystem is not identifiable from the
 *   provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_param_update_by_type(int param_1,int param_2)

{
  if (*(short *)(param_2 + 2) == 3) {
    write_word_to_dynamic_array(param_2,0,(short)*(uint32_t *)(*(int *)(param_1 + 0x5c) + 0x10));
    write_word_to_dynamic_array(param_2,1,(short)*(uint32_t *)(*(int *)(param_1 + 0x5c) + 0x14));
  }
  else if (*(short *)(param_2 + 2) == 4) {
    write_to_dynamic_array(param_2,0,*(uint32_t *)(*(int *)(param_1 + 0x5c) + 0x10));
    write_to_dynamic_array(param_2,1,*(uint32_t *)(*(int *)(param_1 + 0x5c) + 0x14));
  }
  return;
}
