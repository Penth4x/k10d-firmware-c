/* @k10d call_three_param_helpers @ 0x10475f5a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions with the same first two arguments and varying
 *   third/fourth parameters.
 * summary:
 *   The function is a thin wrapper that forwards its arguments to three callees:
 *   copy_four_bytes_from_source receives param_1, param_2, param_4, and param_5;
 *   write_integer_as_four_ascii_digits receives param_1, param_2, and param_3; and
 *   allocate_and_init_buffer_10476180 receives param_1, param_2, and param_4. No local
 *   state is modified and no return value is produced. The specific subsystem role cannot
 *   be determined because the callees are unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_param_helpers(int param_1,void *param_2,int param_3,int param_4,byte param_5)

{
  copy_four_bytes_from_source(param_1,(int)param_2,param_4,(uint)param_5);
  write_integer_as_four_ascii_digits(param_1,(int)param_2,param_3);
  allocate_and_init_buffer_10476180(param_1,(int)param_2,param_4);
  return;
}
