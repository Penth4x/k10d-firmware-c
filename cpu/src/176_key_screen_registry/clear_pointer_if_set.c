/* @k10d clear_pointer_if_set @ 0x10481570
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Calls a helper on a value from param_1 if a pointer field in param_2 is non-null, then
 *   nulls that field.
 * summary:
 *   Checks the 4-byte field at offset 4 of param_2. If it is non-zero, it calls
 *   store_result_and_check_zero_10480100 with the value at offset 8 of param_1 as an
 *   argument, and then sets the field at offset 4 of param_2 to zero. This pattern is
 *   typical for releasing or invalidating a resource or pointer stored in a structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_pointer_if_set(int param_1,void *param_2)

{
  if (*(int *)((int)param_2 + 4) != 0) {
    store_result_and_check_zero_10480100(*(uint32_t *)(param_1 + 8), (uint32_t)param_2);
    *(uint32_t *)((int)param_2 + 4) = 0;
  }
  return;
}
