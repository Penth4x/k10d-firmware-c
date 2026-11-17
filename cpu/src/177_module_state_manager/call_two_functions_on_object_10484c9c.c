/* @k10d call_two_functions_on_object_10484c9c @ 0x10484c9c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_functions_on_object_10484c9c(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*(code *)0x10428b2c/*ROM*/)(param_1 + 0x14);
  (*(code *)0x10428b2c/*ROM*/)(*(uint32_t *)(param_1 + 0xc),param_2,param_3,param_4);
  return;
}
