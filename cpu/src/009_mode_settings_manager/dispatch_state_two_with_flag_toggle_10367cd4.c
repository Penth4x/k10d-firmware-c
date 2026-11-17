/* @k10d dispatch_state_two_with_flag_toggle_10367cd4 @ 0x10367cd4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_two_with_flag_toggle_10367cd4(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x18;
  cVar1 = read_byte_at_offset_0x1d(iVar2);
  if (cVar1 != '\0') {
    dispatch_object_state_update_10491fb2(iVar2,1);
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    configure_subobject_with_two_values(param_1);
  }
  else if (*(int *)(param_1 + 0x9c) == 1) {
    init_subobject_from_parent_fields(param_1);
  }
  cVar1 = read_byte_at_offset_0x1d(iVar2);
  if (cVar1 != '\0') {
    dispatch_object_state_update_10491fb2(iVar2,0);
  }
  return;
}
