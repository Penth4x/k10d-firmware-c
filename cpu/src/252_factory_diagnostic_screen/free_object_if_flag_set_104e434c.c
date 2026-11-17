/* @k10d free_object_if_flag_set_104e434c @ 0x104e434c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Writes a fixed 32-bit value to the first word of an object and frees it if the low bit
 *   of param_2 is set.
 * summary:
 *   Checks that param_1 is non-NULL, then stores the constant 0x105c0440 into *param_1. If
 *   the low bit of param_2 is set, it calls heap_free on param_1. The stored value
 *   0x105c0440 is a code address, likely a vtable pointer or marker, but its specific role
 *   is not determinable from this snippet alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_104e434c(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105c0440/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
