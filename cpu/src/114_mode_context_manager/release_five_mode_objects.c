/* @k10d release_five_mode_objects @ 0x1042fa04
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_five_mode_objects(uint32_t param_1)

{
  int iVar1;
  
  iVar1 = app_mode_activate(param_1,0);
  if (iVar1 != 0) {
    call_helper_with_offset_and_flag_104279d4(iVar1 + 8);
  }
  iVar1 = app_mode_activate(param_1,1);
  if (iVar1 != 0) {
    call_helper_with_offset_and_flag_104279d4(iVar1 + 8);
  }
  iVar1 = app_mode_activate(param_1,2);
  if (iVar1 != 0) {
    call_helper_with_offset_and_flag_104279d4(iVar1 + 8);
  }
  iVar1 = app_mode_activate(param_1,3);
  if (iVar1 != 0) {
    call_helper_with_offset_and_flag_104279d4(iVar1 + 8);
  }
  iVar1 = app_mode_activate(param_1,4);
  if (iVar1 != 0) {
    call_helper_with_offset_and_flag_104279d4(iVar1 + 8);
  }
  iVar1 = get_or_init_cached_value(param_1,0);
  if (iVar1 != 0) {
    call_helper_with_offset_and_flag_104279d4(iVar1 + 8);
  }
  iVar1 = get_or_init_cached_value(param_1,1);
  if (iVar1 != 0) {
    call_helper_with_offset_and_flag_104279d4(iVar1 + 8);
  }
  iVar1 = get_or_init_cached_value(param_1,2);
  if (iVar1 != 0) {
    call_helper_with_offset_and_flag_104279d4(iVar1 + 8);
  }
  iVar1 = get_or_init_cached_value(param_1,3);
  if (iVar1 != 0) {
    call_helper_with_offset_and_flag_104279d4(iVar1 + 8);
  }
  return;
}
