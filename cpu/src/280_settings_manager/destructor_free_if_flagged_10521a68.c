/* @k10d destructor_free_if_flagged_10521a68 @ 0x10521a68
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets the object's vtable pointer to its class vtable and frees the heap block if the
 *   low bit of param_2 is set.
 * summary:
 *   This is virtual slot 1 of cls_105d8304, acting as a C++ deleting destructor. It first
 *   writes the class vtable address 0x105d8304 into the object header (param_1). If param_2
 *   has bit 0 set, it calls heap_free on the object, releasing the memory. If param_1 is
 *   NULL or the flag is clear, it returns without freeing.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destructor_free_if_flagged_10521a68(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105d8304/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
