/* @k10d reset_vtable_and_free_if_owned_104a90ee @ 0x104a90ee
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Resets the object's vtable pointer to a tombstone and frees the heap block if the
 *   ownership flag is set.
 * summary:
 *   This function is called by multiple deleting destructors as a final cleanup step. It
 *   writes the address 0x105b6a50 into the first word of the object (param_1), which
 *   corresponds to the vtable slot for class cls_105b6a50, effectively marking the object
 *   as destroyed. If the second parameter (param_2) has bit 0 set, it calls heap_free to
 *   release the memory. This pattern is typical for C++ deleting destructors that manage
 *   their own heap allocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_owned_104a90ee(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = (uint32_t)&DAT_105b6a50/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
