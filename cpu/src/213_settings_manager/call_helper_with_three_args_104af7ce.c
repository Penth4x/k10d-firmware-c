/* @k10d call_helper_with_three_args_104af7ce @ 0x104af7ce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the input pointer and constants 3 and 0.
 * summary:
 *   This function is a thin wrapper that invokes dispatch_by_type_field_104af7e6, passing
 *   param_1 as the first argument, the integer 3 as the second, and 0 as the third. It
 *   performs no other operations and returns immediately after the call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_three_args_104af7ce(cls_105b7838 *param_1)

{
  dispatch_by_type_field_104af7e6((void *)param_1,3,0);
  return;
}
