/* @k10d invoke_object_method_and_update @ 0x10476c30
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves an object, calls its virtual slot 1 with argument 3, and updates a field at
 *   offset 0xc.
 * summary:
 *   Calls read_bounded_array_element_10477358 to obtain a pointer to an object. If the
 *   pointer is non-null, it performs a virtual call to slot 1 (offset 0xc) with the
 *   argument 3. It then calls decrement_index_and_update_bounds with the first parameter
 *   plus 0xc and the second parameter. Returns true if the object was successfully
 *   retrieved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_object_method_and_update(int param_1,uint32_t param_2)

{
  int *piVar1;
  
  piVar1 = (int *)read_bounded_array_element_10477358(__frv_reg_unset(4), __frv_reg_unset(5));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    decrement_index_and_update_bounds((void *)(param_1 + 0xc),param_2);
  }
  return piVar1 != (int *)0x0;
}
