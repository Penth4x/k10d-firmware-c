/* @k10d invoke_virtual_then_set_flag_103b9124 @ 0x103b9124
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 053_settings_context_mgr (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_then_set_flag_103b9124(cls_10594c54 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1->field_0x50 + 0x10);
  (((vtbl_entry*)(iVar1))[10].fn)(param_1->field_0x50 + (int)((vtbl_entry*)(iVar1))[10].adj);
  set_flg_obj(&param_1->field_0x48);
  write_value_to_offset_0x40((int)(param_1));
  return;
}
