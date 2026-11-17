/* @k10d iterate_until_match_or_done @ 0x10473e38
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int iterate_until_match_or_done(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = call_helper_with_field_at_offset_8_104767e6(*(int *)(param_1 + 8));
  iVar3 = call_function_at_offset_8_104767d4(*(int *)(param_1 + 8));
  bVar1 = false;
  do {
    if (iVar3 == iVar2) {
      bVar1 = true;
    }
    iVar4 = call_helper_on_field_at_offset_8_1047681c(*(int *)(param_1 + 8));
    iVar5 = iterate_until_match_or_stop(param_1,iVar3);
  } while ((!bVar1) && (iVar3 = iVar4, iVar5 == 1));
  return iVar5;
}
