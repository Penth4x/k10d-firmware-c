/* @k10d init_six_struct_members @ 0x104d6548
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_six_struct_members(void *param_1)

{
  init_struct_and_call_helper_104d52b0(param_1);
  reset_struct_and_call_helper((void *)((int)param_1 + 0x1c));
  init_struct_and_call_helper_104d58be((void *)((int)param_1 + 0xc0));
  init_struct_and_call_helper_104d5ad8((void *)((int)param_1 + 0xd8));
  init_struct_and_call_helper_104d5d3e((void *)((int)param_1 + 0xf4));
  init_struct_and_zero_subobjects((void *)((int)param_1 + 0x10c));
  return;
}
