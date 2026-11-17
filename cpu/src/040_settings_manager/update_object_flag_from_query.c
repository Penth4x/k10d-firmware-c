/* @k10d update_object_flag_from_query @ 0x10396a06
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_flag_from_query(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  uVar2 = return_r4_passthrough_104d800e();
  adjust_pointer_by_flag(uVar2,1);
  uVar2 = (*(code *)0x104d659e/*ROM*/)();
  iVar1 = read_byte_from_struct_offset_104d590e(uVar2,2);
  *(bool *)(param_1 + 0x80) = iVar1 != 0;
  apply_param_to_four_offsets_1039be8e((void *)(param_1 + 0xc),iVar1 != 0);
  return;
}
