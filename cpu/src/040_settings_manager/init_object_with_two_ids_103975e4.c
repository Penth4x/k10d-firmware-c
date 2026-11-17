/* @k10d init_object_with_two_ids_103975e4 @ 0x103975e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_103975e4(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  uVar2 = return_r4_passthrough_104d800e();
  adjust_pointer_by_flag(uVar2,1);
  uVar2 = (*(code *)0x104d6596/*ROM*/)();
  iVar1 = read_byte_at_offset_104d56a4(uVar2,0x18);
  forward_field_at_offset_0x30((void *)(param_1 + 8),iVar1 != 0);
  return;
}
