/* @k10d run_four_step_sequence @ 0x1047fda4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int run_four_step_sequence(int param_1,char *param_2,char *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  uVar1 = 1;
  iVar3 = 0;
  do {
    if (iVar3 == 0) {
      bVar2 = store_result_and_check_zero_1047fe0e(param_1,param_2,param_3);
      uVar1 = (uint)bVar2;
    }
    else if (iVar3 == 1) {
      bVar2 = store_result_and_flag(param_1,param_2,&uStack_c);
      uVar1 = (uint)bVar2;
    }
    else if (iVar3 == 2) {
      uVar1 = store_result_and_check_zero_1047fd7c(param_1,param_3,uStack_c);
    }
    else if (iVar3 == 3) {
      uVar1 = store_result_and_check_zero_1047fca6(param_1,param_2);
    }
    iVar3 = iVar3 + 1;
  } while ((iVar3 < 4) && (uVar1 == 1));
  return uVar1;
}
