/* @k10d store_result_and_check_zero_1047fc38 @ 0x1047fc38
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_result_and_check_zero_1047fc38(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar1 = (*(code *)0x10541a56/*ROM*/)(param_2,param_3,param_4,&uStack_c);
  *(int *)(param_1 + 4) = iVar1;
  return iVar1 == 0;
}
