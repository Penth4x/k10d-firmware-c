/* @k10d check_object_field_via_helper @ 0x104847f4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with an object sub-pointer and a field value, returning whether the
 *   result is non-zero.
 * summary:
 *   Takes param_1 as an object pointer, extracts a sub-pointer at offset 0x14 and a value
 *   at offset 0xc, and passes them along with constant 0x344 to compare_byte_arrays.
 *   Returns true if the callee returns a non-zero value. The specific role of
 *   compare_byte_arrays and the object layout are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_object_field_via_helper(void *param_1)

{
  int iVar1;
  
  iVar1 = compare_byte_arrays((void *)((int)param_1 + 0x14),*(void **)((int)param_1 + 0xc),0x344);
  return iVar1 != 0;
}
