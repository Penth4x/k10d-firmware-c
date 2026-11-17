/* @k10d iterate_over_structured_entries @ 0x1051a540
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls write_to_dynamic_array once per entry in a count field at param_2+4.
 * summary:
 *   Reads a 31-bit count from offset 4 of the structure pointed to by param_2. If non-zero,
 *   loops from 0 to (count << 1), invoking write_to_dynamic_array(param_2, index, 1) each
 *   iteration. The loop bound being twice the stored count suggests the structure holds
 *   count pairs or 8-byte records. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_over_structured_entries(uint32_t param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(uint *)(param_2 + 4) & 0x7fffffff) != 0) {
    do {
      write_to_dynamic_array(param_2,uVar1,1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)(param_2 + 4) << 1));
  }
  return;
}
