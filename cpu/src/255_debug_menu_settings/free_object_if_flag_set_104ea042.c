/* @k10d free_object_if_flag_set_104ea042 @ 0x104ea042
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Nulls a pointer field at offset 8 and frees the object if the low bit of param_2 is
 *   set.
 * summary:
 *   Takes an object pointer in param_1 and a flags word in param_2. If param_1 is non-NULL,
 *   it writes the constant 0x105c1878 into the field at offset 8 (likely a vtable or back-
 *   pointer). If bit 0 of param_2 is set, it calls heap_free on param_1. This matches the
 *   C++ operator delete pattern where the flag indicates whether to actually free the
 *   block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_104ea042(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 8) = 0x105c1878/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
