/* @k10d validate_and_update_pair @ 0x10474ebe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_and_update_pair(int param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uStack_c;
  
  uVar3 = (uint)*param_2;
  uVar4 = (uint)param_2[1];
  if (((uVar3 != 0) && (uVar4 != 0)) &&
     (iVar1 = invoke_virtual_slot_two_and_store_result(*(uint32_t *)(param_1 + 8),uVar3,*(uint32_t *)(param_1 + 0xc)),
     iVar1 != 0)) {
    uVar2 = call_helper_with_offset_c_10476666(*(int *)(param_1 + 8));
    if (uVar4 == uVar2) {
      uStack_c = poll_until_target_value(param_1,uVar3);
      uVar2 = call_vtable_slot_at_offset_c(*(int *)(param_1 + 8));
    }
    else {
      uVar2 = call_with_offset_c_field_1047668a(*(int *)(param_1 + 8));
      uStack_c = uVar3;
    }
    if ((uVar3 != uStack_c) || (uVar4 != uVar2)) {
      *param_2 = (ushort)uStack_c;
      param_2[1] = (ushort)uVar2;
      return 1;
    }
  }
  return 0;
}
