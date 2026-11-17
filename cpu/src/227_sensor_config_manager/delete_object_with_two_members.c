/* @k10d delete_object_with_two_members @ 0x104c2294
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Destroys two embedded class members and conditionally frees the object's heap block.
 * summary:
 *   Takes a pointer to an object and a flags word. If the pointer is non-null, it calls the
 *   delete routine on the member at offset 0x138 and the member at offset 0x18. If bit 0 of
 *   the flags word is set, it frees the object itself via heap_free. This follows the
 *   Cfront/C++ pattern for a destructor that cleans up sub-objects before releasing the
 *   parent allocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void delete_object_with_two_members(int param_1,uint param_2)

{
  if (param_1 != 0) {
    cls_105b572c_delete((void *)(param_1 + 0x138),2);
    cls_105aae7c_delete((void *)(param_1 + 0x18),2);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
