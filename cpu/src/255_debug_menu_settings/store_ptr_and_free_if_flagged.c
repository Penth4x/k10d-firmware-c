/* @k10d store_ptr_and_free_if_flagged @ 0x104eb8d6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Writes a fixed pointer into the first word of param_1 and frees the block if param_2's
 *   low bit is set.
 * summary:
 *   If param_1 is non-NULL, it stores the constant 0x105c2658 into *param_1. If the low bit
 *   of param_2 is set, it then calls heap_free on param_1. This matches the C++ operator
 *   delete idiom of storing a vtable/flag word before freeing a heap block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_ptr_and_free_if_flagged(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105c2658/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
