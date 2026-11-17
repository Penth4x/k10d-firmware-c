/* @k10d remove_list_node_by_key @ 0x10478ebc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void remove_list_node_by_key(int param_1,int param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  uVar2 = call_helper_with_zero_arg_1047e48c(param_3);
  uVar2 = uVar2 & 0xffff;
  puVar3 = *(ushort **)(param_1 + 0xea4c);
  if (puVar3 != (ushort *)0x0) {
    uVar1 = *puVar3;
    while ((int)(uint)uVar1 <= param_2) {
      if ((int)(uint)uVar1 < param_2) {
        puVar3 = *(ushort **)(puVar3 + 0x1c);
      }
      else if (puVar3[1] < uVar2) {
        puVar4 = *(ushort **)(puVar3 + 0x1c);
        forward_two_struct_fields(param_1,puVar3);
        puVar3 = puVar4;
      }
      else if (puVar3[1] == uVar2) {
        puVar3 = *(ushort **)(puVar3 + 0x1c);
      }
      else {
        uVar2 = increment_and_call_helper(param_3,uVar2);
        uVar2 = uVar2 & 0xffff;
      }
      if (puVar3 == (ushort *)0x0) {
        return;
      }
      uVar1 = *puVar3;
    }
  }
  return;
}
