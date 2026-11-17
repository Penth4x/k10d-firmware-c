/* @k10d free_heap_block_if_flagged_104b4186 @ 0x104b4186
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Clears a 2-byte field at offset 2 of the object and frees the heap block when the low
 *   bit of param_2 is set.
 * summary:
 *   Takes a pointer (param_1) and a flags word (param_2). If the pointer is non-NULL, it
 *   writes 0 to the 16-bit field at offset 2, then calls heap_free on the pointer only when
 *   bit 0 of param_2 is set. This matches the Cfront operator delete idiom: store a
 *   marker/vtable slot then free if the allocation flag is set. No camera-specific
 *   subsystem is indicated by the code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_block_if_flagged_104b4186(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint16_t *)(param_1 + 2) = 0, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
