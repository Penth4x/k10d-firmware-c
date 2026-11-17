/* @k10d free_object_if_flag_set_104ea064 @ 0x104ea064
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Writes a vtable pointer to the object and frees it if the low bit of the second
 *   argument is set.
 * summary:
 *   Checks that param_1 is non-NULL, stores the constant 0x105c1888 (likely a vtable
 *   pointer) into the first word of the object, and then calls heap_free on the object if
 *   bit 0 of param_2 is set. This matches the C++ operator delete idiom where the vtable is
 *   restored before freeing the heap block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_104ea064(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105c1888/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
