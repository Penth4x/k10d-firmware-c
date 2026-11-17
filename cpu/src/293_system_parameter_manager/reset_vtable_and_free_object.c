/* @k10d reset_vtable_and_free_object @ 0x10535b54
 * name: model (proposed by the local model from the decompile, confidence 0.92)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Resets the object's vtable pointer to the class vtable and frees the heap block when
 *   the flag bit is set.
 * summary:
 *   This is virtual method slot 1 of class cls_1062112c. It writes the class vtable address
 *   (0x1062112c) into the object's vtable pointer at offset 0x6c, then calls heap_free on
 *   the object if param_2 has bit 0 set. The pattern matches a C++ deleting destructor or
 *   cleanup routine that invalidates the vtable before releasing the heap allocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_object(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(void **)(param_1 + 0x6c) = &DAT_1062112c, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
