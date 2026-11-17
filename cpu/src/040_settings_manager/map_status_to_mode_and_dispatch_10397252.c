/* @k10d map_status_to_mode_and_dispatch_10397252 @ 0x10397252
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_status_to_mode_and_dispatch_10397252(uint32_t param_x0)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  iVar1 = get_or_create_singleton_object_10395bd6();
  iVar1 = call_function_at_offset_8_10395dd4(iVar1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else if (iVar1 == 1) {
    uVar3 = 3;
  }
  else if (iVar1 == 2) {
    uVar3 = 1;
  }
  else if (iVar1 == 3) {
    uVar3 = 2;
  }
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  return_r4_passthrough_104d800e();
  add_offset_to_pointer_104d6882(__frv_reg_unset(4));
  uVar2 = (*(code *)0x104d8ae2/*ROM*/)();
  (*(code *)0x104d5454/*ROM*/)(uVar2,uVar3);
  return;
}
