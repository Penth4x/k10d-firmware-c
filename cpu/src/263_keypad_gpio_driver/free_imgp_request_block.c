/* @k10d free_imgp_request_block @ 0x104fec0a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Frees an image-processor request block if the pointer is non-NULL and the flag bit is
 *   set.
 * summary:
 *   Checks that param_1 is non-NULL and that bit 0 of param_2 is set before calling
 *   heap_free on param_1. This is a guarded deallocation helper for a heap-allocated
 *   structure used by the image processor driver. The flag likely indicates ownership or a
 *   valid allocation state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_imgp_request_block(int param_1,uint param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
