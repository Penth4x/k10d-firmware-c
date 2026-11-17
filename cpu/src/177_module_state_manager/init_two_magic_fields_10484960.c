/* @k10d init_two_magic_fields_10484960 @ 0x10484960
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_two_magic_fields_10484960(int param_1,int param_2)

{
  init_magic_set_8(param_1 + 0x14,param_2);
  init_magic_set_8(*(int *)(param_1 + 0xc),param_2);
  return;
}
