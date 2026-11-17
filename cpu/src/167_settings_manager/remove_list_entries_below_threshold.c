/* @k10d remove_list_entries_below_threshold @ 0x10478e5e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void remove_list_entries_below_threshold(int param_1,int *param_2)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  
  uVar1 = call_helper_with_zero_arg_1047e48c(param_2);
  uVar1 = uVar1 & 0xffff;
  puVar3 = *(ushort **)(param_1 + 0xea4c);
  while (puVar3 != (ushort *)0x0) {
    if (*puVar3 < uVar1) {
      puVar2 = *(ushort **)(puVar3 + 0x1c);
      forward_two_struct_fields(param_1,puVar3);
      puVar3 = puVar2;
    }
    else if (*puVar3 == uVar1) {
      puVar3 = *(ushort **)(puVar3 + 0x1c);
    }
    else {
      uVar1 = increment_and_call_helper(param_2,uVar1);
      uVar1 = uVar1 & 0xffff;
    }
  }
  return;
}
