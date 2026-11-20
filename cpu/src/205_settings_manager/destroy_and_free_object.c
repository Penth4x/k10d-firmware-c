/* @k10d destroy_and_free_object @ 0x1049c308
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a member cleanup routine on the object, then frees the heap block if the flag bit
 *   is set.
 * summary:
 *   Takes an object pointer and a flags word. If the pointer is non-null, it calls
 *   free_heap_if_flagged_1049a016 with the object and the constant 2, then checks bit 0 of
 *   the flags parameter. If set, it calls heap_free to release the object. This pattern
 *   matches a C++ deleting destructor that performs member cleanup before freeing the
 *   allocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_and_free_object(void *param_1,uint param_2)

{
  if ((param_1 != 0) && (free_heap_if_flagged_1049a016(param_1,2), (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
