/* @k10d destroy_five_member_objects @ 0x104bb4da
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Destroys five member objects at fixed offsets within a parent structure, optionally
 *   freeing the parent.
 * summary:
 *   Iterates over five pointers at offsets 0x00, 0x08, 0x10, 0x18, and 0x20 of the object
 *   pointed to by param_1, calling free_heap_if_flagged_1045c402 on each with argument 2.
 *   If the low bit of param_2 is set, the parent object is freed via heap_free. Called from
 *   multiple class deleting destructors as part of member cleanup.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_five_member_objects(void *param_1,uint param_2)

{
  if (param_1 != 0) {
    free_heap_if_flagged_1045c402((void *)((int)param_1 + 0x20),2);
    free_heap_if_flagged_1045c402((void *)((int)param_1 + 0x18),2);
    free_heap_if_flagged_1045c402((void *)((int)param_1 + 0x10),2);
    free_heap_if_flagged_1045c402((void *)((int)param_1 + 8),2);
    free_heap_if_flagged_1045c402(param_1,2);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
