/* @k10d init_two_magic_fields_104849d8 @ 0x104849d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_two_magic_fields_104849d8(int param_1,int param_2)

{
  init_magic_set_14(param_1 + 0x14,param_2);
  init_magic_set_14(*(int *)(param_1 + 0xc),param_2);
  return;
}
