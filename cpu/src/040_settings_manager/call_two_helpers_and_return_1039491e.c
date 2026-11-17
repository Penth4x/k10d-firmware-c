/* @k10d call_two_helpers_and_return_1039491e @ 0x1039491e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_and_return_1039491e(void)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  call_single_helper_104d8492();
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  return_r4_passthrough_104d800e();
  uVar2 = (*(code *)0x104d689e/*ROM*/)();
  return uVar2;
}
