/* @k10d check_virtual_method_result @ 0x1049c426
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object and returns true if the method returns zero.
 * summary:
 *   The function dereferences the vtable pointer at offset 0x14 of the object in param_1
 *   and calls the corresponding virtual slot with param_2 as an argument. It compares the
 *   return value to zero and returns a boolean indicating success or failure. The specific
 *   role of the virtual method is unknown because the callee
 *   compare_null_terminated_strings is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_virtual_method_result(int param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = compare_null_terminated_strings(*(void **)(param_1 + 0x14),param_2);
  return iVar1 == 0;
}
