/* @k10d store_result_at_offset_2b78 @ 0x1052bfa8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 287_factory_menu_init (unit names are model-proposed)
 * purpose:
 *   Calls two helpers, stores the second's return value at param_1+0x2b78, and returns that
 *   value.
 * summary:
 *   Invokes get_shared_sram_buffer (no return used) then
 *   iterate_object_array_for_nonzero_result, writing the latter's int result into the
 *   object field at offset 0x2b78. If the result is zero it redundantly writes zero again.
 *   Returns the stored value. The callees are unnamed, so the subsystem role is not
 *   determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_result_at_offset_2b78(int param_1)

{
  int iVar1;
  
  get_shared_sram_buffer();
  iVar1 = iterate_object_array_for_nonzero_result(__frv_reg_unset(4));
  *(int *)(param_1 + 0x2b78) = iVar1;
  if (iVar1 == 0) {
    *(uint32_t *)(param_1 + 0x2b78) = 0;
  }
  return *(uint32_t *)(param_1 + 0x2b78);
}
