/* @k10d reset_vtable_and_free_if_flagged_104e33c2 @ 0x104e33c2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Resets the object's vtable pointer to 0x105c0074 and frees the heap block if the low
 *   bit of param_2 is set.
 * summary:
 *   This function is virtual method slot 1 of class cls_105c0074, acting as a destructor or
 *   cleanup routine. It writes the vtable address 0x105c0074 to offset 0x18 of the object,
 *   which is outside the stated 0x1c byte object size, suggesting it may be modifying a
 *   base class or adjacent structure. If the least significant bit of param_2 is set, it
 *   calls heap_free to release the object memory.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_flagged_104e33c2(void *param_1,uint param_2)

{
  if ((param_1 != 0) &&
     (*(uint32_t *)((int)param_1 + 0x18) = 0x105c0074/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
