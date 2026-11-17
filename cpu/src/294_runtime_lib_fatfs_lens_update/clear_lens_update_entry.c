/* @k10d clear_lens_update_entry @ 0x105429bc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Clears a specific entry in a lens firmware update table if the index matches the
 *   current count.
 * summary:
 *   The function accesses a structure at param_1, retrieving a pointer to a count or index
 *   variable from offset 0x6c. It calculates an expected value using the count at offset
 *   0x38 and a stride at offset 0x14. If the calculated value matches the value at the
 *   target pointer, it sets that pointer's value to zero, effectively clearing or
 *   invalidating the entry.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_lens_update_entry(void *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)((int)param_1 + 0x6c) + 8);
  if (*(int *)((int)param_1 + 0x38) + (param_2 + -2) * *(int *)((int)param_1 + 0x14) == *piVar1) {
    *piVar1 = 0;
  }
  return;
}
