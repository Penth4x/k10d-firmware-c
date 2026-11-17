/* @k10d reset_vtable_and_free_if_flagged_10428182 @ 0x10428182
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resets the object's vtable pointer to 0x1059e478 and frees the heap block when param_2
 *   bit 0 is set.
 * summary:
 *   Called from the deleting destructors of several classes as the final step. It
 *   nulls/overwrites the first word (vtable pointer) with the address 0x1059e478, then
 *   conditionally calls heap_free on the object when the low bit of param_2 is set. The
 *   object size is 4 bytes per the class layout, so the vtable write covers the entire
 *   object before deallocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_flagged_10428182(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = (uint32_t)&DAT_1059e478/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
