/* @k10d free_object_if_flag_set_104e6166 @ 0x104e6166
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Writes a fixed pointer into the first word of an object and frees it if the low bit of
 *   the second argument is set.
 * summary:
 *   Checks that param_1 is non-NULL, stores the constant 0x105c0a20 into *param_1, and if
 *   (param_2 & 1) is true calls heap_free on param_1. The stored constant likely points to
 *   a vtable or type descriptor used by the heap_free/operator-delete path. No camera-
 *   specific behavior is evident from the code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_104e6166(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105c0a20/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
