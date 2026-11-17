/* @k10d call_writer_with_context_and_arg @ 0x10511868
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Loads a pointer from offset 0x818 of an object in r8, adds 8, and calls a helper with
 *   that pointer and r5.
 * summary:
 *   This is a one-line thunk. It dereferences the field at [r8+0x818], adds 8 to the
 *   result, and passes that value along with the register r5 to
 *   copy_null_terminated_string. The specific role of the helper or the object is not
 *   determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_writer_with_context_and_arg(void)

{
  void *r5_in;
  int caller_r8;
  
  copy_null_terminated_string((void *)(*(int *)(caller_r8 + 0x818) + 8),r5_in);
  return;
}
