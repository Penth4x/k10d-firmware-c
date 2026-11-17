/* @k10d free_object_if_flag_set_104ed8f8 @ 0x104ed8f8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Writes a fixed pointer into an object field and frees the object if a flag bit is set.
 * summary:
 *   Takes an object pointer and a flags word. If the pointer is non-NULL, it stores the
 *   constant 0x105c2cbc at offset 0x14 of the object. If bit 0 of the flags word is set, it
 *   calls heap_free on the object. This matches the C++ operator delete idiom where the
 *   flag indicates the object was heap-allocated.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_104ed8f8(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 0x14) = 0x105c2cbc/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
