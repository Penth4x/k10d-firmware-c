/* @k10d init_struct_with_next_ptr_10394074 @ 0x10394074
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets the second field of a struct to point to its third field and calls an unknown
 *   helper.
 * summary:
 *   The function writes the address param_1+8 into the integer at offset 4 of the object
 *   pointed to by param_1. It then calls call_helper_with_second_arg_103940ae, whose
 *   purpose is unknown. Finally, it returns the original pointer param_1. This pattern is
 *   consistent with initializing a linked list node or a small object where the second
 *   member points to subsequent data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_struct_with_next_ptr_10394074(int param_1)

{
  *(int *)(param_1 + 4) = param_1 + 8;
  call_helper_with_second_arg_103940ae((void *)__frv_reg_unset(4));
  return param_1;
}
