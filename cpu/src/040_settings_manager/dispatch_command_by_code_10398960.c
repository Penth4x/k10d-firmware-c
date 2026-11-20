/* @k10d dispatch_command_by_code_10398960 @ 0x10398960
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_command_by_code_10398960(cls_10563404 *param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0x5060020) {
    uVar1 = (*(code *)0x10399818/*ROM*/)();
  }
  else if (param_2 == 0x506002f) {
    uVar1 = (*(code *)0x10399852/*ROM*/)();
  }
  else if (param_2 == 0x506003c) {
    uVar1 = (*(code *)0x1039988c/*ROM*/)();
  }
  else if (param_2 == 0x5060000) {
    uVar1 = param_1->field_0xe4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
