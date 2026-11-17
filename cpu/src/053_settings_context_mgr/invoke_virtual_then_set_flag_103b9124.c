/* @k10d invoke_virtual_then_set_flag_103b9124 @ 0x103b9124
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 053_settings_context_mgr (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_then_set_flag_103b9124(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
  (**(code **)(iVar1 + 0x54))(*(int *)(param_1 + 0x50) + (int)*(short *)(iVar1 + 0x50));
  set_flg_obj((uint32_t *)(param_1 + 0x48));
  write_value_to_offset_0x40(param_1);
  return;
}
