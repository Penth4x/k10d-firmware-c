/* @k10d forward_two_params_to_helper_104a874a @ 0x104a874a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_params_to_helper_104a874a(int param_1,uint32_t param_2)

{
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = param_2;
  forward_struct_and_second_field((int *)(param_1 + 4),&uStack_c);
  return;
}
