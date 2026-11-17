/* @k10d destructor_cls_105b6d0c @ 0x104a9bdc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Destroys an object of class cls_105b6d0c by clearing its vtable pointer and invoking
 *   the base class destructor.
 * summary:
 *   The function checks if the object pointer is non-null. It overwrites the vtable pointer
 *   at offset 0x10 with 0x105b6d0c, calls an unknown function with the value at offset
 *   0x14, and calls the base class destructor release_object_and_free_payload. If the
 *   second parameter's bit 0 is set, it calls release_mempool_block_104a8e60. This pattern
 *   is consistent with a C++ destructor for class cls_105b6d0c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destructor_cls_105b6d0c(void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0) {
    *(uint32_t *)((int)param_1 + 0x10) = 0x105b6d0c/*ROM*/;
    heap_free_2(*(int *)((int)param_1 + 0x14));
    release_object_and_free_payload(param_1,0);
    if ((param_2 & 1) != 0) {
      release_mempool_block_104a8e60(param_1);
    }
  }
  return;
}
