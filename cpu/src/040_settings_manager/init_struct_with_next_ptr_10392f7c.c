/* @k10d init_struct_with_next_ptr_10392f7c @ 0x10392f7c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_struct_with_next_ptr_10392f7c(int param_1)

{
  *(int *)(param_1 + 4) = param_1 + 8;
  initialize_object_with_three_calls_10393162((void *)__frv_reg_unset(4));
  return param_1;
}
