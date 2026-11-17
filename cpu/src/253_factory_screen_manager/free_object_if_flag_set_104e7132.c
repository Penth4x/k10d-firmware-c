/* @k10d free_object_if_flag_set_104e7132 @ 0x104e7132
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Writes a fixed pointer into an object field and frees the object if a flag bit is set.
 * summary:
 *   Takes an object pointer and a flags word. If the pointer is non-NULL, it stores the
 *   constant 0x105c1334 at offset 0x10 of the object. If bit 0 of the flags word is set, it
 *   calls heap_free on the object. This matches the C++ operator delete pattern where the
 *   vtable is restored before freeing.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_104e7132(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 0x10) = 0x105c1334/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
