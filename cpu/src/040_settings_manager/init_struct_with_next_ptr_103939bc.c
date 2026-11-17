/* @k10d init_struct_with_next_ptr_103939bc @ 0x103939bc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets the fourth field of a struct to point to its own eighth byte and calls an unknown
 *   helper.
 * summary:
 *   The function takes a pointer in param_1, writes the address param_1+8 into the integer
 *   at offset 4 of that structure, then calls call_two_helpers_on_object_10393a2e with no
 *   arguments. It returns the original pointer. The specific role of the struct or the
 *   helper function is not determinable from the provided pseudocode and callee list.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_struct_with_next_ptr_103939bc(int param_1)

{
  *(int *)(param_1 + 4) = param_1 + 8;
  call_two_helpers_on_object_10393a2e((void *)__frv_reg_unset(4));
  return param_1;
}
