/* @k10d store_vtable_and_free_if_flagged_1041aa0e @ 0x1041aa0e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Writes a vtable pointer into the object and frees it if the low bit of the second
 *   argument is set.
 * summary:
 *   Checks that param_1 is non-NULL, stores the constant 0x1059c960 (a vtable pointer) into
 *   the first word of the object, and then calls heap_free on param_1 if bit 0 of param_2
 *   is set. This matches the C++ operator delete idiom where the vtable is restored before
 *   freeing a heap block. No camera-specific behavior is evident from the code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_vtable_and_free_if_flagged_1041aa0e(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x1059c960/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
