/* @k10d delete_object_with_flag_10496838 @ 0x10496838
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Deletes a C++ object by calling its destructor and freeing the heap block if a flag bit
 *   is set.
 * summary:
 *   Checks if param_1 is non-null. If so, calls cls_105a5c2c_delete on param_1+4 (likely
 *   the vtable pointer or object header) with argument 2. Then, if bit 0 of param_2 is set,
 *   calls heap_free on param_1. This follows the standard Cfront/C++ operator delete
 *   pattern where the destructor is invoked before freeing memory, with the flag
 *   determining whether the memory was heap-allocated.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void delete_object_with_flag_10496838(int param_1,uint param_2)

{
  if ((param_1 != 0) && (cls_105a5c2c_delete((void *)(param_1 + 4),2), (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
